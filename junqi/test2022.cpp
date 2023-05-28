
#include <windows.h>
#include <tlhelp32.h>
#include <UIAutomationClient.h>
#include <atlbase.h>
#include <oleacc.h>
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <set>

#pragma comment (lib, "oleacc.lib")
using namespace std;

IUIAutomation* pAutomation = NULL;
IUIAutomationTreeWalker* gWalk = NULL;

HWND gHwnd[4];
int gHwndCount = 0;
constexpr int USER_COUNT = 2;

extern std::string ws2s(const wchar_t* pw);
std::set<int> gProgSet;
std::set<int> gFileSet;

void ReadTextData(const wstring& file, std::set<int>& fSet)
{
    ifstream fs;
    string readStr;
    fs.open(file, ios::in);
    if (fs) {
        fs >> readStr;
    }
    fs.close();
    if (readStr != "")
    {
        size_t pos;
        while (true) {
            int num = atoi(readStr.c_str());
            DWORD out;
            GetHandleInformation((HWND)num, &out);
            if (out != 0) {
                fSet.insert(num);
                // printf("%d\n", num);
            }
            if ((pos = readStr.find(",")) == string::npos) {
                break;
            }
            readStr = readStr.substr(pos + 1);
            if (readStr == "") {
                break;
            }
        }
    }
}

void AddTextData(const wstring& file)
{
    std::set<int> fileSet;
    ReadTextData(file, fileSet);

    string str;
    for (auto x : gProgSet) {
        fileSet.insert(x);
    }
    for (auto x : fileSet) {
        str += to_string(long(x));
        str += ',';
    }
    ofstream fo;
    fo.open(file, ios::out/* | ios::ate*/);
    fo << str;
    fo.close();
    cout << "str=" << str << "\n";
}

void RemoveTextData(const wstring& file)
{
    std::set<int> fileSet;
    ReadTextData(file, fileSet);

    for (auto x : gProgSet) {
        fileSet.erase(x);
    }
    if (fileSet.size() == 0)
    {
        string f = ws2s(file.c_str());
        remove(f.c_str());
        return;
    }
    string str;
    for (auto x : fileSet) {
        str += to_string(long(x));
        str += ',';
    }

    ofstream fo;
    fo.open(file, ios::out);
    fo << str;
    fo.close();
}

wstring GetTxtFilePath()
{
    TCHAR szFilePath[MAX_PATH + 1] = { 0 };
    GetModuleFileName(NULL, szFilePath, MAX_PATH);
    // 删除文件名，只获得路径字串
    (_tcsrchr(szFilePath, _T('\\')))[1] = 0;
    // 例如str_url==e:\program\Debug\ 
    wstring file = szFilePath;
    file += L"tmphwndstr.txt";
    return file;
}


bool CheckUiaHwnd(HWND hwnd)
{
    CComPtr<IUIAutomationElement> target = nullptr;

    pAutomation->ElementFromHandle(hwnd, &target);
    if (!target) {
        cout << "IUIAutomationElement target null.\n";
        return false;
    }
    CComPtr<IUIAutomationElement> child = nullptr;

    auto hr = gWalk->GetFirstChildElement(target, &child);
    if (FAILED(hr) || !child) {
        cout << "IUIAutomationElement child null.\n";
        return false;
    }
    CComPtr<IUIAutomationElement> next = nullptr;
    gWalk->GetNextSiblingElement(child, &next);
    if (!next) {
        cout << "IUIAutomationElement next null.\n";
        return false;
    }
    VARIANT varProp;
    varProp.vt = VT_I4;
    varProp.lVal = UIA_ComboBoxControlTypeId;
    CComPtr<IUIAutomationCondition> condition;
    UIA_ClassNamePropertyId;
    pAutomation->CreatePropertyCondition(UIA_ControlTypePropertyId, varProp, &condition);

    if (!condition) {
        cout << "condition target null.\n";
        return false;
    }
    CComPtr<IUIAutomationElement> found = nullptr;
    child->FindFirst(TreeScope_Descendants, condition, &found);
    if (found) {
        return true;
    }
    else {
        next->FindFirst(TreeScope_Descendants, condition, &found);
        if (found) {
            return true;
        }
    }
    return false;
}


BOOL mycallback(HWND hwnd, LPARAM lpara)
{
    if (!::IsWindow(hwnd) || !IsWindowVisible(hwnd))
        return TRUE;

    wchar_t buf[20];
    GetWindowText(hwnd, buf, 20);
    if (wcscmp(buf, L"四国军棋角色版") == 0 && CheckUiaHwnd(hwnd)) {
        if (gFileSet.find((long)hwnd) == gFileSet.end()) {
            gHwnd[gHwndCount++] = hwnd;
            cout << "hwnd =" << std::hex << hwnd << std::dec << "\n";
        }
    }
    if (gHwndCount >= USER_COUNT) {
        return FALSE;
    }
    return TRUE;
}

void GetJunqiHwnd()
{
    EnumWindows(mycallback, NULL);
}


bool CheckUiaSurrender(HWND hwnd)
{
    IUIAutomationElement* target = nullptr;

    pAutomation->ElementFromHandle(hwnd, &target);
    if (!target) {
        cout << "CheckUiaSurrender target null.\n";
        return false;
    }
    IUIAutomationElement* dialog = nullptr;
    auto hr = gWalk->GetFirstChildElement(target, &dialog);
    target->Release();
    if (FAILED(hr) || !dialog) {
        cout << "CheckUiaSurrender dialog null.\n";
        return false;
    }

    IUIAutomationElement* child = nullptr;
    hr = gWalk->GetFirstChildElement(dialog, &child);
    dialog->Release();
    if (FAILED(hr) || !child) {
        cout << "CheckUiaSurrender child null.\n";
        return false;
    }
    CComPtr<IUIAutomationElement> next = nullptr;
    gWalk->GetNextSiblingElement(child, &next);
    child->Release();
    if (!next) {
        cout << "CheckUiaSurrender next null.\n";
        return false;
    }

    CONTROLTYPEID id;
    next->get_CurrentControlType(&id);
    if (id != UIA_ButtonControlTypeId) {
        cout << "get_CurrentControlType next null.\n";
        return false;
    }


    IUIAutomationLegacyIAccessiblePattern* da = nullptr;
    next->GetCurrentPatternAs(UIA_LegacyIAccessiblePatternId, __uuidof(IUIAutomationLegacyIAccessiblePattern), (void**)&da);
    if (!da) {
        cout << "IUIAutomationLegacyIAccessiblePattern null.\n";
        return false;
    }
    da->DoDefaultAction();
    da->Release();
    return true;

}


void ClickSurrender(HWND hwnd)
{
    auto t1 = GetTickCount64();
    
    while (true) {
        auto rr = CheckUiaSurrender(hwnd);
        if (rr) {
            cout << "CheckUiaSurrender true.\n";
            return;
        }
        auto t2 = GetTickCount64();
        if (t2 - t1 > 3000) {
            cout << "time out.\n";
            break;
        }
    }
}


static void PrintRect(HWND findHwnd)
{
    RECT rc;
    GetWindowRect(findHwnd, &rc);
    printf("findHwnd=%llx\n", findHwnd);
    printf("x=%d,y=%d,r=%d,b=%d\n", rc.left, rc.top, rc.right, rc.bottom);
}



// inspect 挂在军旗下面的dialog
static HWND GetSpecificWnd(HWND hwnd, wstring str)
{
    HWND ret = nullptr;
    if (hwnd == nullptr) return nullptr;

    auto findx = false;
    HWND h, child;
    wchar_t buf[128];
    h = GetWindow(hwnd, GW_HWNDFIRST);
    //h = FindWindowEx(hwnd, 0, L"#32770", nullptr); //
    while (h != nullptr) {
        //PrintRect(h);
        child = FindWindowEx(h, 0, L"Static", NULL);
        GetWindowText(child, buf, 128);
        if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
            //PrintRect(child);
            auto hBtn = FindWindowEx(h, 0, L"Button", nullptr); //
            hBtn = FindWindowEx(h, hBtn, L"Button", nullptr);
            PostMessage(hBtn, BM_CLICK, 0, 0);
            findx = true;
            ret = h;
        }
        h = GetWindow(h, GW_HWNDNEXT);
    }
    if (findx) return ret;
    //cout << "end GetSpecificWnd.\n";
    return nullptr;
}


//inspect 有可能是单独挂在桌面下面的dialog
static HWND GetSpecificWnd2(HWND hwnd, wstring str)
{
    auto ret = GetSpecificWnd(hwnd, str);
    if (ret != nullptr) {
        return ret;
    }
    HWND dialog, child;
    wchar_t buf[128];
    dialog = FindWindowEx(0, 0, L"#32770", NULL);
    while (dialog != nullptr) {
        PrintRect(dialog);
        child = FindWindowEx(dialog, 0, L"Static", nullptr);
        while (child) {
            //child = GetWindow(dialog, GW_HWNDFIRST);
            GetWindowText(child, buf, 128);
            if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
                //PrintRect(child);
                auto hBtn = FindWindowEx(dialog, 0, L"Button", nullptr); // 确定按钮
                hBtn = FindWindowEx(dialog, hBtn, L"Button", nullptr);
                PostMessage(hBtn, BM_CLICK, 0, 0);
                cout << "find GetSpecificWnd2.\n";
                return 0;
            }
            child = FindWindowEx(child, 0, L"Static", nullptr);
        }
        // if (wstring(buf) != L"" && wstring(buf) == L"你确定要投降吗?") {
        dialog = FindWindowEx(0, dialog, L"#32770", NULL);
    }
    //cout << "end GetSpecificWnd2.\n";
    return nullptr;
}

void InitUia()
{

    if (pAutomation == NULL) {
        cout << "InitUia.\n";
        auto r = CoInitializeEx(NULL, COINIT_MULTITHREADED);
        HRESULT hr = CoCreateInstance(__uuidof(CUIAutomation), NULL, CLSCTX_INPROC_SERVER, __uuidof(IUIAutomation), (void**)&pAutomation);
        if (FAILED(hr) || pAutomation == NULL)
        {
            cout << "pAutomation null.\n";
            CoUninitialize();
            exit(0);
        }
        hr = pAutomation->get_ControlViewWalker(&gWalk);
        if (FAILED(hr) || gWalk == NULL)
        {
            cout << "gWalk null.\n";
            CoUninitialize();
            exit(0);
        }
    }
}

class UiaInstance {
public:
    UiaInstance()
    {
        InitUia();
    }

    ~UiaInstance()
    {
        if (gWalk) {
            gWalk->Release();
            gWalk = NULL;
        }
        if (pAutomation) {
            pAutomation->Release();
            pAutomation = NULL;
            cout << "UiaInstance.\n";
            CoUninitialize();
        }
    }
};

UiaInstance g_UiaInstance;


LPVOID gUserPosAddr = (LPVOID)0x49DD44;
LPVOID gStepNum = (LPVOID)0x49dd88;
LPVOID gPlayTimer = (LPVOID)0x46acb8;
LPVOID gGameStart = (LPVOID)0x4A6A9C; // 地址不对，以后在研究

class UserProcess {
public:
    HWND mHwnd;
    HANDLE mProcess;
    RECT rect;
    int x;
    int y;
    int count;
    int startX;
    int startY;
    int offset;
    int endX;
    int endY;
    int endOkX;
    int endOkY;
    int scoreX;
    int scoreY;
    int comfirmX;
    int comfirmY;
    int runCount;
    int runFlag;

    UserProcess()
    {
        mProcess = NULL;
        runCount = 0;
        runCount = 0;
    }
    void Init(HWND hwnd) 
    {
        mHwnd = hwnd;
        InitProcess();
        this->mHwnd = hwnd;
        RECT r;
        GetWindowRect(hwnd, &r);
        this->rect = r;
        // 18 = (468 - 432) / 2
        this->offset = 18; 
        this->x = 432 + this->offset;
        this->y = 539;
        this->count = 0;
        this->startX = 861;
        this->startY = 561;
        //cout << "init hwnd =" << std::hex << mHwnd << std::dec << "\n";

        this->endX = 865;
        this->endY = 670;

        this->endOkX = this->rect.left + 459;
        this->endOkY = this->rect.top + 409;

        this->comfirmX = this->rect.left + 510;
        this->comfirmY = this->rect.top + 416;

        this->scoreX = 550; // 510
        this->scoreY = 460; // 450
        this->runCount = 10;
        this->runFlag = 1;
    }

    ~UserProcess()
    {
        if (mProcess != NULL) {
            CloseHandle(mProcess);
        }
    }
    void InitProcess()
    {
        DWORD pid;
        DWORD ThreadID;
        ThreadID = GetWindowThreadProcessId(mHwnd, &pid);

        // 获取目标进程句柄
        mProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
        if (mProcess == NULL) {
            std::cout << "Failed to open process: " << GetLastError() << std::endl;
            cout << "hwnd =" << std::hex << mHwnd << std::dec << "\n";
            return ;
        }
    }

    void ClickPos()
    {
        auto ox = 0;
        if (this->count % 2 == 0)
            ox = this->offset;
        else
            ox = -1 * this->offset;

        //printf("clickPos from this->hwnd=%llx\n", this->mHwnd);
        //printf("clickPos from x=%d,y=%d\n", this->x - ox, this->y);
        // SendMessage(this->hwnd, win32con.WM_LBUTTONDOWN, win32con.MK_LBUTTON, long_position);
        SendMessage(this->mHwnd, WM_LBUTTONUP, 0, MAKELONG(this->x - ox, this->y));
        Sleep(100);
        SendMessage(this->mHwnd, WM_LBUTTONUP, 0, MAKELONG(this->x + ox, this->y));
        this->count += 1;
    }

    void ClickStart()
    {
        this->count = 0;
        auto long_position = MAKELONG(startX, startY);
        SendMessage(mHwnd, WM_LBUTTONUP, 0, long_position);
        this->runFlag = 1;
    }

    void ClickOk()
    {
        SetCursorPos(endOkX, endOkY);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }

    void ClickFinalOk()
    {
        // printf("ClickFinalOk hwnd=%llx\n", this->mHwnd);
        auto long_position = MAKELONG(scoreX, scoreY);
        SendMessage(mHwnd, WM_LBUTTONDOWN, 1, long_position);
        Sleep(10);
        SendMessage(mHwnd, WM_LBUTTONUP, 0, long_position);
    }

    void ClickEnd()
    {
        //printf("clickPos from this->endX=%llx\n", this->mHwnd);
        //printf("clickPos from x=%d,y=%d\n", this->endX, this->endY);
        //printf("00\n");
        // SendMessage(this->hwnd, win32con.WM_LBUTTONDOWN, win32con.MK_LBUTTON, long_position);
        //PostMessage(this->mHwnd, WM_LBUTTONDOWN, 0, long_position);
        PostMessage(this->mHwnd, WM_LBUTTONDOWN, 1, MAKELONG(this->endX, this->endY)); // 1
        PostMessage(this->mHwnd, WM_LBUTTONUP, 0, MAKELONG(this->endX, this->endY));
        Sleep(800); // 200不行，还没有弹出来

        //SetCursorPos(this->endOkX, this->endOkY);
        //mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        //mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        //printf("ClickSurrender this->endX=%llx\n", this->mHwnd);
        // ClickSurrender(this->mHwnd);
        GetSpecificWnd(this->mHwnd, L"投降吗");
        

        Sleep(800);
        //printf("ClickEnd this->endX=%llx\n", this->mHwnd);
        //printf("ClickEnd22\n");
        this->runFlag = 0;
    }

    void ClickEndOK()
    {
        //SetCursorPos(this->endOkX, this->endOkY);
        //mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        //mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
       // printf("ClickEndOKxxxx this->endX=%llx\n", this->mHwnd);
        
        //ClickSurrender(this->mHwnd);
        if (USER_COUNT == 2) {
            GetSpecificWnd(this->mHwnd, L"全军覆没");
        } else {
            GetSpecificWnd(this->mHwnd, L"战败");
        }
        
       // printf("ClickEndOKxxx\n");
    }
};

int ReadData(LPVOID addr, HANDLE hProcess, int count)
{
    if (addr == nullptr || hProcess == nullptr) {
        cout << "addr nullptr.\n";
        return -1;
    }
    int tmp[2] = {};
    size_t dwNumberOfBytesRead;
    if (ReadProcessMemory(hProcess, (LPCVOID)addr, &tmp, count, &dwNumberOfBytesRead)) {
        return tmp[0];
    }
    cout << "ReadProcessMemory failed.\n";
    return -1;
}

HANDLE hEvtObj = NULL;
unsigned long long gStartTime;
void CheckAllStartThread(void* para) {
    UserProcess** pUser = (UserProcess**)para;
    Sleep(2000);
    while (true) {
        if (GetTickCount64() - gStartTime >= 20 * 1000) {
            gStartTime = GetTickCount64();
            cout << "纠正错误，重新点击开始。\n";
            for (int i = 0; i < USER_COUNT; i++) {
                pUser[i]->ClickStart();
                Sleep(50);
            }
        }
        Sleep(5000);
    }
}

void ComfilmFaildThread(void* para) {
   UserProcess** pUser = (UserProcess**)para;
   while (true) {
        WaitForSingleObject(hEvtObj, -1);
        
        if (USER_COUNT == 2) {
            //printf("11 ComfilmFaild hwnd=%llx\n", pUser[1]->mHwnd);
            GetSpecificWnd(pUser[1]->mHwnd, L"全军覆没");
        } else {
            //printf("xx11 ComfilmFaild hwnd=%llx\n", pUser[1]->mHwnd);
            GetSpecificWnd(pUser[1]->mHwnd, L"战败");
        }
        //if (USER_COUNT == 2) {
        //    //printf("0011 ComfilmFaild hwnd=%llx\n", pUser[0]->mHwnd);
        //    GetSpecificWnd(pUser[0]->mHwnd, L"全军覆没");
        //} else {
        //    //printf("xx0011 ComfilmFaild hwnd=%llx\n", pUser[0]->mHwnd);
        //    GetSpecificWnd(pUser[0]->mHwnd, L"战败");
        //}
        ResetEvent(hEvtObj);
    }
}

//
bool CheckAllStart(void* para)
{
    UserProcess** pUser = (UserProcess**)para;
    int find[USER_COUNT] = {0};
    while (true) {
        int count = 0;
        for (int i = 0; i < USER_COUNT; i++) {
            if (find[i] == 0) {
                int isStart = ReadData((LPVOID)((unsigned long long )gGameStart+i*4), pUser[i]->mProcess, 1); //0x4A6A90 + 4*pos+ C
                cout << "i=" << i << " isStart=" << isStart << "\n";
                if (isStart == 0) {
                    pUser[i]->ClickStart();
                } else {
                    find[i] = isStart;
                    count++;
                }
            }
        }
        if (count >= USER_COUNT) {
            return true;
        }
        Sleep(1000);
    }
    return false;
}


void TestFileData()
{
    wstring file = GetTxtFilePath();
    gFileSet.clear();
    ReadTextData(file, gFileSet);

    GetJunqiHwnd();
    if (gHwndCount != USER_COUNT) {
        cout << "hwnd null.\n";
        return ;
    }
    
    gProgSet.clear();
    for (int i = 0; i < USER_COUNT; i++) {
        gProgSet.insert((long)gHwnd[i]);
    }
    AddTextData(file);
    Sleep(10 * 1000);
    RemoveTextData(file);
}

int RunJunQi()
{
    wstring file = GetTxtFilePath();
    gFileSet.clear();
    ReadTextData(file, gFileSet);
    GetJunqiHwnd();
    if (gHwndCount != USER_COUNT) {
        cout << "hwnd null.\n";
        return 1;
    }
    Sleep(2000);
    UserProcess user[USER_COUNT];
    UserProcess* pUser[USER_COUNT];
    int vi[2];
    hEvtObj = CreateEvent(NULL,
        TRUE,		// 手动重置为非信号态 
        FALSE,		// 初始不可响应 
        NULL);
    if (!hEvtObj) {
        cout << "CreateEvent null.\n";
        return 1;
    }
    gProgSet.clear();
    for (int i = 0; i < USER_COUNT; i++) {
        gProgSet.insert((long)gHwnd[i]);
    }
    AddTextData(file);
    for (int i = 0; i < USER_COUNT; i++) {
        user[i].Init(gHwnd[i]);
        int index = ReadData(gUserPosAddr, user[i].mProcess, 1);
        if (USER_COUNT == 4)
            pUser[index % USER_COUNT] = &user[i];
        else
            vi[i] = index;
    }
    if (USER_COUNT == 2) {
        if (vi[0] < vi[1]) {
            pUser[0] = &user[0];
            pUser[1] = &user[1];
        }
        else {
            pUser[0] = &user[1];
            pUser[1] = &user[0];
        }
    }
    _beginthread(ComfilmFaildThread, 0, pUser);
    _beginthread(CheckAllStartThread, 0, pUser);

    for (int xx = 0; xx < 50; xx++) {
        gStartTime = GetTickCount64();
        for (int i = 0; i < USER_COUNT; i++) {
            user[i].ClickStart();
            Sleep(50);
        }
        //CheckAllStart(pUser);
        while (true) {
            int step = ReadData(gStepNum, pUser[0]->mProcess, 1);
            //printf("step=%d\n", step);
            if (step >= 30) // 30 40
                break;
            for (int i = 0; i < USER_COUNT; i++) {

                int timer = ReadData(gPlayTimer, pUser[i]->mProcess, 1);
                //printf("i=%d\n", i);
                //printf("timer=%d\n", timer);
                if (timer != 0) {
                    pUser[i]->ClickPos();
                }
            }

        }
        Sleep(200);
        pUser[0]->ClickEnd(); // 点投降 and 点确定
        SetEvent(hEvtObj);
        //pUser[1]->ClickEndOK(); // 点全军覆没
        //pUser[0]->ClickEndOK(); // 点全军覆没
        Sleep(200);
        pUser[1]->ClickFinalOk();
        pUser[0]->ClickFinalOk();
        //GetSpecificWnd(pUser[1]->mHwnd, L"是否需要保存");
        //GetSpecificWnd(pUser[0]->mHwnd, L"是否需要保存");
        cout << "第" << xx + 1 << "局完，用时间：" << GetTickCount64() - gStartTime << " 毫秒\n";
    }
    RemoveTextData(file);
    Sleep(200);
}

int main()
{
    //TestFileData();
    //return 0;

    RunJunQi();
    return 0;
}
