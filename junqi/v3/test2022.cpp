
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
#include "winternl.h"
#pragma comment (lib, "oleacc.lib")
using namespace std;
using std::cout;
IUIAutomation* pAutomation = NULL;
IUIAutomationTreeWalker* gWalk = NULL;

HWND gHwnd[4];
wstring gName[4];
wstring gQq[4];
int gHwndCount = 0;
int USER_COUNT = 2;

extern std::string ws2s(const wchar_t* pw);
std::set<int> gProgSet;
std::set<int> gFileSet;
int gPlayCout;
int gStep;
int gMaxStep;
int gLosePos = 0; // 默认是第一桌投降
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
        auto hwnd = FindWindow(0, L"#qq军旗助手");
        if (hwnd == nullptr) {
            return;
        }
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

static void PrintRect(HWND findHwnd)
{
    RECT rc;
    GetWindowRect(findHwnd, &rc);
    printf("findHwnd=%llx\n", findHwnd);
    printf("x=%d,y=%d,r=%d,b=%d\n", rc.left, rc.top, rc.right, rc.bottom);
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
        PrintRect(hwnd);
        cout << "IUIAutomationElement child null.\n";
        return false;
    }
    CComPtr<IUIAutomationElement> next = nullptr;
    gWalk->GetNextSiblingElement(child, &next);
    if (!next) {
        PrintRect(hwnd);
        cout << "IUIAutomationElement next null.\n";
        return false;
    }
    VARIANT varProp;
    varProp.vt = VT_I4;
    varProp.lVal = UIA_ComboBoxControlTypeId;
    CComPtr<IUIAutomationCondition> condition;
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

typedef NTSTATUS(WINAPI* NtQueryInformationProcessFake)(HANDLE, DWORD, PVOID, ULONG, PULONG);

NtQueryInformationProcessFake ntQ = NULL;


wstring GetProcCmd(DWORD pid) {
    HANDLE hproc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (INVALID_HANDLE_VALUE != hproc) {
        HANDLE hnewdup = NULL;
        PEB peb;
        RTL_USER_PROCESS_PARAMETERS upps;
        WCHAR buffer[MAX_PATH] = { NULL };
        HMODULE hm = LoadLibrary(_T("Ntdll.dll"));
        if (!hm) {
            return L"";
        }
        ntQ = (NtQueryInformationProcessFake)GetProcAddress(hm, "NtQueryInformationProcess");
        if (DuplicateHandle(GetCurrentProcess(), hproc, GetCurrentProcess(), &hnewdup, 0, FALSE, DUPLICATE_SAME_ACCESS)) {
            PROCESS_BASIC_INFORMATION pbi;
            NTSTATUS isok = ntQ(hnewdup, 0/*ProcessBasicInformation*/, (PVOID)&pbi, sizeof(PROCESS_BASIC_INFORMATION), 0);
            if (BCRYPT_SUCCESS(isok)) {
                if (ReadProcessMemory(hnewdup, pbi.PebBaseAddress, &peb, sizeof(PEB), 0))
                    if (ReadProcessMemory(hnewdup, peb.ProcessParameters, &upps, sizeof(RTL_USER_PROCESS_PARAMETERS), 0)) {
                        WCHAR* buffer = new WCHAR[upps.CommandLine.Length + 1];
                        ZeroMemory(buffer, (upps.CommandLine.Length + 1) * sizeof(WCHAR));
                        ReadProcessMemory(hnewdup, upps.CommandLine.Buffer, buffer, upps.CommandLine.Length, 0);
                        wstring ret = buffer;
                        delete[]buffer;
                        return ret;
                    }
            }
            CloseHandle(hnewdup);
        }
        FreeLibrary(hm);
        CloseHandle(hproc);
    }
    return L"";
}
wstring CheckClientCmd(HWND hwnd)
{
    DWORD pid;
    GetWindowThreadProcessId(hwnd, &pid);
    wstring str = GetProcCmd(pid);
    if (str == L"") {
        cout << "null cmd.\n";
        return L"";
    }
    size_t pos = str.find(L"/PIPE \"");
    if (pos == wstring::npos) {
        cout << "wrong cmd.\n";
        return L"";
    }
    // L"\"C:\\Program Files (x86)\\Tencent\\QQGameTempest\\MiniGames\\junqiRPG\\junqirpg.exe\" /PIPE \"8730881871022044328\""
    str = str.substr(pos + lstrlen(L"/PIPE \""));
    //GameID=87&ServerID=3089&RoomID=57
    //GameID=87&ServerID=3089&RoomID=187
    //87 3089 57
    if (str.size() < 8) {
        return L"";
    }
    return str.substr(0, 8);
}


int GetTableUserNum(HWND hwnd);
static wstring gRomeStr;
BOOL mycallback(HWND hwnd, LPARAM lpara)
{
    if (!::IsWindow(hwnd) || !IsWindowVisible(hwnd))
        return TRUE;

    wchar_t buf[20];
    GetWindowText(hwnd, buf, 20);
    if (wcscmp(buf, L"四国军棋角色版") == 0 && CheckUiaHwnd(hwnd)) {
        if (GetTableUserNum(hwnd) != 0) {
            gHwnd[gHwndCount++] = hwnd;
            cout << "hwnd=" << std::hex << hwnd << std::dec << "\n";
        }
    }

    return TRUE;
}

void GetJunqiHwnd()
{
    gRomeStr = L"";
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
    auto t1 = GetTickCount();
    
    while (true) {
        auto rr = CheckUiaSurrender(hwnd);
        if (rr) {
            cout << "CheckUiaSurrender true.\n";
            return;
        }
        auto t2 = GetTickCount();
        if (t2 - t1 > 3000) {
            cout << "time out.\n";
            break;
        }
    }
}


static HWND GetSpecificWnd(HWND hwnd, wstring str)
{
    HWND ret = nullptr;
    if (hwnd == nullptr) return nullptr;

    auto findx = false;
    HWND h, child;
    wchar_t buf[128];
    //int cnt = 0;
    h = GetWindow(hwnd, GW_HWNDFIRST);
    //h = FindWindowEx(hwnd, 0, L"#32770", nullptr); //
    while (h != nullptr) {
        //PrintRect(h);
        GetClassName(h, buf, 128);
        if (wstring(buf) != L"#32770") {
            h = GetWindow(h, GW_HWNDNEXT);
            continue;
        }
        child = FindWindowEx(h, 0, L"Static", NULL);
        GetWindowText(child, buf, 128);
        if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
            //PrintRect(child);
            auto hBtn = FindWindowEx(h, 0, L"Button", nullptr); //
            hBtn = FindWindowEx(h, hBtn, L"Button", nullptr);
            PostMessage(hBtn, BM_CLICK, 0, 0);
            findx = true;
            ret = h;
            //cout << "cnt=" << cnt++ << "\n";
        }
        h = GetWindow(h, GW_HWNDNEXT);
    }
    if (findx) return ret;
    //cout << "end GetSpecificWnd.\n";
    return nullptr;
}


static void GetSpecificWndx(HWND hwnd, wstring str)
{
    while (true) {
        HWND h, child;
        wchar_t buf[128];
        h = GetWindow(hwnd, GW_HWNDFIRST);
        while (h != nullptr) {
            GetClassName(h, buf, 128);
            if (wstring(buf) != L"#32770") {
                h = GetWindow(h, GW_HWNDNEXT);
                continue;
            }
            child = FindWindowEx(h, 0, L"Static", NULL);
            GetWindowText(child, buf, 128);
            if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
                //PrintRect(child);
                auto hBtn = FindWindowEx(h, 0, L"Button", nullptr);
                hBtn = FindWindowEx(h, hBtn, L"Button", nullptr);
                PostMessage(hBtn, BM_CLICK, 0, 0);
                return ;
            }
            h = GetWindow(h, GW_HWNDNEXT);
        }
    }
}


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
        //cout << "InitUia.\n";
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
            //cout << "UiaInstance.\n";
            CoUninitialize();
        }
    }
};

UiaInstance g_UiaInstance;


LPVOID gUserPosAddr = (LPVOID)0x49DD44;
LPVOID gStepNum = (LPVOID)0x49dd88;
LPVOID gPlayTimer = (LPVOID)0x46acb8;
// LPVOID gGameStart = (LPVOID)0x4A6A9C; // + 4*i  
LPVOID gGameStart = (LPVOID)0x4652E4;
LPVOID gGameScore = (LPVOID)0x49cf7c;

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
    static const int endX = 865;
    static const int endY = 670;
    int scoreX;
    int scoreY;
    int comfirmX;
    int comfirmY;
    int runCount;
    wstring name;
    wstring qq;
 

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

        this->scoreX = 550;
        this->scoreY = 460;
        this->runCount = 10;
    }

    ~UserProcess()
    {
        //cout << "~UserProcess()\n";
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
            cout << "hwnd=" << std::hex << mHwnd << std::dec << "\n";
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
        //Sleep(gPlayCout % 2 == 1 ? 90 : 60); //这个地方太快了，服务器反应不过来，拿不到计时器
        Sleep(USER_COUNT == 4 ? 80 : 100); //这个地方太快了，服务器反应不过来，拿不到计时器
        SendMessage(this->mHwnd, WM_LBUTTONUP, 0, MAKELONG(this->x + ox, this->y));
        //Sleep(10);
        
        this->count += 1;
    }

    void ClickStart()
    {
        this->count = 0;
        SendMessage(mHwnd, WM_LBUTTONUP, 0, MAKELONG(startX, startY));
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
        PostMessage(this->mHwnd, WM_LBUTTONDOWN, 1, MAKELONG(UserProcess::endX, UserProcess::endY)); // 1
        PostMessage(this->mHwnd, WM_LBUTTONUP, 0, MAKELONG(UserProcess::endX, UserProcess::endY));
        // Sleep(800); // 200不行，还没有弹出来

        //SetCursorPos(this->endOkX, this->endOkY);
        //mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        //mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        //printf("ClickSurrender this->endX=%llx\n", this->mHwnd);
        // ClickSurrender(this->mHwnd);
        //GetSpecificWnd(this->mHwnd, L"您确定要投降吗");
        GetSpecificWndx(this->mHwnd, L"您确定要投降吗");

        //Sleep(800);
        //printf("ClickEnd this->endX=%llx\n", this->mHwnd);
        //printf("ClickEnd22\n");
 
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

int WriteData(LPVOID addr, HANDLE hProcess, byte val, int count)
{
    if (addr == nullptr || hProcess == nullptr) {
        cout << "addr nullptr.\n";
        return -1;
    }
    int tmp[2] = {};
    size_t dwNumberOfBytesRead;
    if (WriteProcessMemory(hProcess, (LPVOID)addr, &val, count, &dwNumberOfBytesRead)) {
        return tmp[0];
    }
    cout << "ReadProcessMemory failed.\n";
    return -1;
}

// 点击“完成调度之后”位置变成了1；全部开始之后， 马上又变了0
bool CheckAllStart(UserProcess** pUser)
{
    int find[4] = { 0 };
    int count = 0;
    for (int i = 0; i < USER_COUNT; i++) {
        if (find[i] == 0) {
            //int* p = 652E4
            DWORD px = ReadData((LPVOID)((unsigned  long)gGameStart), pUser[i]->mProcess, sizeof(px));
            cout << "addr px=" << std::hex << px << std::dec << "\n";
            cout << "addr px offse=" << std::hex << (unsigned long)px + i * 4 + 0xc << std::dec << "\n";
            int index = ReadData(gUserPosAddr, pUser[i]->mProcess, 1);
            cout << "addr index=" << index << "\n";
            int isStart = ReadData((LPVOID)((unsigned long)px + i*4 + 0xc), pUser[i]->mProcess, 1);//0x4A6A90 + 4*pos+ C
            cout << "纠正未开始错误，重新点击开始,i=[" << i << "], isStart=" << isStart <<"\n";
            //PrintRect(pUser[i]->mHwnd);
            if (isStart == 0) {
                pUser[i]->ClickStart();
            }
            else {
                find[i] = isStart;
                count++;
            }
        }
    }
    if (count >= 0) {
        return true;
    }
    return false;
}



void ComfilmFaildThread(void* para) {
   UserProcess** pUser = (UserProcess**)para;
   while (true) {
        //WaitForSingleObject(hEvtObj, -1);
        //HWND ret = nullptr;
        //while (ret == nullptr) {
        //    if (USER_COUNT == 2) {
        //        //printf("11 ComfilmFaild hwnd=%llx\n", pUser[1]->mHwnd);
        //        ret = GetSpecificWnd(pUser[1]->mHwnd, L"全军覆没");
        //    } else {
        //        //printf("xx11 ComfilmFaild hwnd=%llx\n", pUser[1]->mHwnd);
        //        ret = GetSpecificWnd(pUser[1]->mHwnd, L"战败");
        //    }
        //}
        //for (int i = 0; i < USER_COUNT; i++) { // 再次确认最后的确定点了没有
        //    pUser[i]->ClickFinalOk();
        //}
        //gFnish = 1;
       //ResetEvent(hEvtObj);
    }
}


void FilterHwnd()
{
    wstring file = GetTxtFilePath();
    gFileSet.clear();
    ReadTextData(file, gFileSet);
    GetJunqiHwnd();
    auto h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTitle(L"#qq军旗助手");
    gProgSet.clear();
    for (int i = 0; i < gHwndCount; i++) {
        gProgSet.insert((long)gHwnd[i]);
    }
    if (gProgSet.size() == 0) {
        cout << "军旗未开启.\n";
        exit(0);
    }
    //if (gProgSet.size() != 2 &&  gProgSet.size() != 4) {
    if (gProgSet.size() != USER_COUNT) {
        RemoveTextData(file);
        cout << "对战人数不匹配\n";
        exit(0);
    }
    AddTextData(file);
}


void GetNameQq(IUIAutomationElement* find)
{
    wstring qq;
    wstring name;
    BSTR str;
    IUIAutomationElement* text = NULL;
    IUIAutomationElement* next = NULL;

    gWalk->GetFirstChildElement(find, &text);
    if (!text) {
        return ;
    }
    wstring tmp;
    int start = 1;
    while (true) {
        gWalk->GetNextSiblingElement(text, &next);
        if (!next) {
            text->Release();
            return ;
        }
        start++;
        if (start == 5) {
            next->get_CurrentName(&str);
            wstring tmp = (const wchar_t*)str;
            name = tmp;
            SysFreeString(str);
        }
        else if (start == 10) {
            next->get_CurrentName(&str);
            wstring tmp = (const wchar_t*)str;
            SysFreeString(str);
            qq = tmp;
            text->Release();
            next->Release();
            break;
        }
        text->Release();
        text = next;
    }
    gName[gHwndCount] = name;
    gQq[gHwndCount] = qq;
}

int GetTableUserNum(HWND hwnd)
{
    IUIAutomationElement* target = NULL;
    pAutomation->ElementFromHandle(hwnd, &target);
    if (!target) {
        return 0;
    }
    VARIANT varProp;
    varProp.vt = VT_I4;
    varProp.lVal = UIA_ListItemControlTypeId;
    CComPtr<IUIAutomationCondition> condition;
    pAutomation->CreatePropertyCondition(UIA_ControlTypePropertyId, varProp, &condition);
    CComPtr<IUIAutomationElement> find[4];
    target->FindFirst(TreeScope_Descendants, condition, &find[0]);
    target->Release();
    if (!find[0]) {
        return 0;
    }

    if (gRomeStr != L"") {
        auto str = CheckClientCmd(hwnd);
        if (str != gRomeStr) {
            return 0;
        }
       GetNameQq(find[0]);
        return gHwndCount;
    }
    int count = 0;
    while (true) {
        gWalk->GetNextSiblingElement(find[count], &find[count+1]);
        if (!find[count+1]) {
            break;
        }
        CONTROLTYPEID type;
        find[count+1]->get_CurrentControlType(&type);
        if (type != UIA_ListItemControlTypeId) {
            break;
        }
        count++;
        if (count == 3) { // 不然越界了
            break;
        }
    }
    if (count + 1 != 2 && count + 1 != 4 || gFileSet.find((long)hwnd) != gFileSet.end()) {
        cout << "GetTableUserNum user not match.\n";
        return 0;
    }

    if (gRomeStr == L"") {
        count++;
        USER_COUNT = count; // 之前从0开始的
        gRomeStr = CheckClientCmd(hwnd);
    }
    GetNameQq(find[0]);
    return 1;
}

//byte val = 40;
//for (int i = 0; i < USER_COUNT; i++) {
//    WriteData(gStepNum, pUser[i]->mProcess, val, 1);
//}
//for (int i = 0; i < USER_COUNT; i++) {
//    int val = ReadData(gStepNum, pUser[i]->mProcess, 1);
//    cout << "val[i" << i << "i] " << val << "\n";
//}
// 
//CheckAllStart(pUser);

//pUser[1]->ClickEndOK(); // 点全军覆没
//pUser[0]->ClickEndOK(); // 点全军覆没
//Sleep(500);
//pUser[1]->ClickFinalOk();
//pUser[0]->ClickFinalOk();
//GetSpecificWnd(pUser[1]->mHwnd, L"是否需要保存");
//GetSpecificWnd(pUser[0]->mHwnd, L"是否需要保存");

/*


第135局完，用时间：12734 毫秒
第136局完，用时间：13484 毫秒
thread 纠正未开始错误，重新点击开始
第137局完，用时间：111438 毫秒
第138局完，用时间：10265 毫秒
第139局完，用时间：10282 毫秒
*/

DWORD gStartTime;
DWORD gClickFailedTime;
int gRunStage = 0;
void CheckAllStartThread(void* para) {
    UserProcess** pUser = (UserProcess**)para;
    Sleep(2000);
    while (true) {
        if (gStep == 0 && GetTickCount() - gClickFailedTime >= 2000)
        {
            cout << "thread 纠正未开始错误，重新点击开始 \n";
            gClickFailedTime = GetTickCount();
            for (int i = 0; i < USER_COUNT; i++) {
                pUser[i]->ClickFinalOk();
                Sleep(20);
                pUser[i]->ClickStart();
            }
        }

        //
        //if (USER_COUNT == 2) {
        //    if (gRunStage == 1) {
        //        if (GetTickCount() - gClickFailedTime >= 1500) { //  投降又没有点到
        //            cout << "thread 未投降错误，重新点击投降2-1111\n";
        //            gClickFailedTime = GetTickCount();
        //            pUser[gLosePos]->ClickEnd();
        //        }
        //    }
        //}
        //if (USER_COUNT == 4) {
        //    if (gRunStage == 1) { // 第1家投降
        //        if (GetTickCount() - gClickFailedTime >= 1500) { //  投降又没有点到
        //            gClickFailedTime = GetTickCount();
        //            cout << "thread 未投降错误，重新点击投降4-11111\n";
        //            pUser[(gLosePos + 2) % USER_COUNT]->ClickEnd();
        //        }
        //    }
        //    else if (gRunStage == 2) { // 走一步
        //        if (GetTickCount() - gClickFailedTime >= 1500) {
        //            cout << "thread 投降后走棋错误，重新走棋\n";
        //            gClickFailedTime = GetTickCount();
        //            pUser[(gLosePos + 1) % USER_COUNT]->ClickPos();

        //        }
        //    }
        //    else if (gRunStage == 3) { // 第2家投降
        //        if (GetTickCount() - gClickFailedTime >= 1500) { //  投降又没有点到
        //            cout << "thread 未投降错误，重新点击投降4-2222\n";
        //            gClickFailedTime = GetTickCount();
        //            pUser[gLosePos]->ClickEnd();
        //        }
        //    }
        //}

        //if (gRunStage == 5) {
        //    if (GetTickCount() - gClickFailedTime >= 1500) {
        //        gStartTime = GetTickCount();
        //        cout << "纠正未点击得分确定错误，重新点得分。\n";
        //        for (int i = 0; i < USER_COUNT; i++) {
        //            pUser[i]->ClickFinalOk();
        //        }
        //    }
        //}
        Sleep(5000);
    }
}


UserProcess gUser[4];
void InitUserValue(UserProcess** pUser)
{
    FilterHwnd();
    Sleep(1000);
    int vi[2];

    for (int i = 0; i < USER_COUNT; i++) {
        gUser[i].Init(gHwnd[i]);
        gUser[i].name = gName[i];
        gUser[i].qq = gQq[i];
        int index = ReadData(gUserPosAddr, gUser[i].mProcess, 1);
        //posSet.insert(index);
        if (USER_COUNT == 4)
            pUser[index % USER_COUNT] = &gUser[i];
        else
            vi[i] = index;
    }
    //gLosePos = 1; // 默认是第一桌投降
    gMaxStep = 38 + gLosePos;
    if (USER_COUNT == 2) {
        if (abs(vi[0]-vi[1]) != 2) {
            wstring file = GetTxtFilePath();
            RemoveTextData(file);
            cout << "座位不对，两人需要坐对家\n";
            exit(0);
        }
        gGameScore = (LPVOID)0x49cf84;
        if (vi[0] < vi[1]) {
            pUser[0] = &gUser[0];
            pUser[1] = &gUser[1];
        }
        else {
            pUser[0] = &gUser[1];
            pUser[1] = &gUser[0];
        }
        gMaxStep = 30 + gLosePos;
        cout << "赢家:" << ws2s(pUser[(gLosePos + 1) % USER_COUNT]->name.c_str()) << "(" << ws2s(pUser[(gLosePos + 1) % USER_COUNT]->qq.c_str()) << ")" << "\n";
        cout << "输家:" << ws2s(pUser[gLosePos]->name.c_str()) << "(" << ws2s(pUser[gLosePos]->qq.c_str()) << ")" << "\n";
    }
    else {
        gGameScore = (LPVOID)0x49cf7c;
        cout << "赢家1:" << ws2s(pUser[(gLosePos + 1) % USER_COUNT]->name.c_str()) << "(" << ws2s(pUser[(gLosePos + 1) % USER_COUNT]->qq.c_str()) << ")" << "\n";
        cout << "赢家2:" << ws2s(pUser[(gLosePos + 3) % USER_COUNT]->name.c_str()) << "(" << ws2s(pUser[(gLosePos + 3) % USER_COUNT]->qq.c_str()) << ")" << "\n";

        cout << "输家1:" << ws2s(pUser[(gLosePos + 0) % USER_COUNT]->name.c_str()) << "(" << ws2s(pUser[(gLosePos + 0) % USER_COUNT]->qq.c_str()) << ")" << "\n";
        cout << "输家2:" << ws2s(pUser[(gLosePos + 2) % USER_COUNT]->name.c_str()) << "(" << ws2s(pUser[(gLosePos + 2) % USER_COUNT]->qq.c_str()) << ")" << "\n";
    }
    _beginthread(CheckAllStartThread, 0, pUser);
}


int RunJunQi()
{
    UserProcess* pUser[4];
    InitUserValue(pUser);
    gRunStage = 0;
    for (int xx = 0; xx < 200; xx++) {
        gStartTime = GetTickCount();
        gClickFailedTime = GetTickCount();
        //gStep = 0;
        for (int i = 0; i < USER_COUNT; i++) {
            pUser[i]->ClickStart();
            Sleep(10);
        }
        //Sleep(10);
        //for (int i = 0; i < USER_COUNT; i++) {
        //    pUser[i]->ClickStart();
        //}
        while (true) {
            gStep = ReadData(gStepNum, pUser[gLosePos]->mProcess, 1);
            //printf("step=%d\n", step);
            // 30 40
            if (gStep >= gMaxStep)  {
                break;
            }
            for (int i = 0; i < USER_COUNT; i++) {
                int timer = ReadData(gPlayTimer, pUser[i]->mProcess, 1);
                //printf("i=%d\n", i);
                //printf("timer=%d\n", timer);
                if (timer != 0) {
                    pUser[i]->ClickPos();
                    gClickFailedTime = GetTickCount();
                    //Sleep(50);
                    break;
                }
                //else {
                //    PostMessage(pUser[i]->mHwnd, WM_LBUTTONUP, 0, MAKELONG(865 , 585));
                //}
                
            }
            if (gStep > 0 && GetTickCount() - gClickFailedTime >= 1500) {
                printf("timetout.gStep=%d\n", gStep);
                printf("timetout.this->count1=%d\n", pUser[gStep % USER_COUNT]->count);
                //Sleep(5000);
                pUser[gStep% USER_COUNT]->count -= 1; // 前一次没点击成功
                pUser[gStep% USER_COUNT]->ClickPos();
                printf("timetout.this->count2=%d\n", pUser[gStep % USER_COUNT]->count);
                Sleep(100);
                //PostMessage(pUser[gStep % USER_COUNT]->mHwnd, WM_LBUTTONUP, 0, MAKELONG(865, 585));
                //gClickFailedTime = GetTickCount();
                //RemoveTextData(GetTxtFilePath());
                //exit(0);
            }
        }
        //printf("start ReadData.gStep=%d\n", gStep);
        while (true) {
            int timer = ReadData(gPlayTimer, pUser[(gLosePos+2)% USER_COUNT]->mProcess, 1); // 倒计时到第1 或 3桌点击投降
            if (timer != 0) {
                //printf("pos0 ReadData timer=%d\n", timer);
                break;
            }
            //Sleep(10);
        }
        
        int score1 = -1;
        int score2 = -1;
        if (USER_COUNT == 2) {
            //printf("gLosePos ClickEnd.gStep=%d\n", gStep);
            //score2 = score1 = ReadData((LPVOID)0x49cf94, pUser[(gLosePos + 1) % USER_COUNT]->mProcess, 1);// 倒计时到第4桌再走一步
           pUser[gLosePos]->ClickEnd(); // 点投降 and 点确定
           gRunStage = 1;
           //gClickFailedTime = GetTickCount();
        }
        else {
            pUser[(gLosePos + 2) % USER_COUNT]->ClickEnd(); // 点投降 and 点确定
            gRunStage = 1;
            //gClickFailedTime = GetTickCount();
        }

        if (USER_COUNT == 4) {
            while (true) {
                //gStep = ReadData(gStepNum, pUser[gLosePos]->mProcess, 1);
                // 0 3 2 1的桌子顺序逆时针走旗，座位是 0 1 2 3顺时针排列
                int timer = ReadData(gPlayTimer, pUser[(gLosePos + 1) % USER_COUNT]->mProcess, 1);// 倒计时到第4桌再走一步
                if (timer != 0) {
                    pUser[(gLosePos + 1) % USER_COUNT]->ClickPos();
                    //gClickFailedTime = GetTickCount();
                    gRunStage = 2;
                    break;
                }
            }
            while (true) {
                int timer = ReadData(gPlayTimer, pUser[gLosePos]->mProcess, 1); // 倒计时到第0桌点击投降
                if (timer != 0) {
                    score2 = score1 = ReadData(gGameScore, pUser[(gLosePos + 1) % USER_COUNT]->mProcess, 1);// 倒计时到第4桌再走一步
                    //printf(" before111 ClickEnd score %d.\n", score1);
                    pUser[gLosePos]->ClickEnd(); // 点投降 and 点确定
                    //gClickFailedTime = GetTickCount();
                    gRunStage = 3;
                    break;
                }
            }
        }
        //Sleep(400);

        while (true) {
            score2 = ReadData(gGameScore, pUser[(gLosePos + 1) % USER_COUNT]->mProcess, 1);// 倒计时到第4桌再走一步
            if (score2 != score1) {
                //printf(" after2222 ClickEnd score %d.\n", score2);
                Sleep(50);
                break;
            }
            Sleep(10);
        }


        gClickFailedTime = GetTickCount();
        for (int i = 0; i < USER_COUNT; i++) { // 再次确认最后的确定点了没有
            pUser[i]->ClickFinalOk();
        }
        Sleep(10);
        for (int i = 0; i < USER_COUNT; i++) { // 再次确认最后的确定点了没有
            pUser[i]->ClickFinalOk();
        }
        gRunStage = 0;
        //while (true) { // 等待
        //    gStep = ReadData(gStepNum, pUser[gLosePos]->mProcess, 1);
        //    if (gStep == 0) {
        //        break;
        //    }
        //    Sleep(50);
        //}

        //for (int i = 0; i < USER_COUNT; i++) { // 再次确认最后的确定点了没有
        //    pUser[i]->ClickEndOK();// 点全军覆没
        //}
        gPlayCout += 1;
        //Sleep(400);
        //gClickFailedTime = GetTickCount();
        auto cur = GetTickCount();
        cout << "第" << xx + 1 << "局完，用时间：" << cur - gStartTime << " 毫秒. timestamp=" << cur << "\n";
    }
    gStartTime = GetTickCount();
    wstring file = GetTxtFilePath();
    RemoveTextData(file);
    Sleep(200);

    return 0;
}


int main()
{
    //auto h = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTitle(L"#qq军旗助手");
    //system("pause");
    //return 0;
    RunJunQi();
    return 0;
}