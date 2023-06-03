
#include <iostream>
#include <UIAutomationClient.h>
#include <atlbase.h>
#include <oleacc.h>
#pragma comment (lib, "oleacc.lib")
using namespace std;

std::string ws2s(const wchar_t* pw)
{
    int nLen = ::WideCharToMultiByte(CP_ACP, NULL, pw, -1, NULL, 0, NULL, NULL);
    char* buf = new char[nLen];
    ::WideCharToMultiByte(CP_ACP, NULL, pw, -1, buf, nLen, NULL, NULL);
    std::string s(buf);
    delete[] buf;
    return s;
}

void GetUiaInfo(IUIAutomationElement* target)
{

    BSTR name;
    target->get_CurrentName(&name);
    if (name != nullptr) {
        cout << "name=" << ws2s(name).c_str() << "\n";
        SysFreeString(name);
    }
    target->get_CurrentClassName(&name);
    if (name != nullptr) {
        cout << "classname=" << ws2s(name).c_str() << "\n";
        SysFreeString(name);
    }

    target->get_CachedLocalizedControlType(&name);
    if (name != nullptr) {
        cout << "ControlType=" << ws2s(name).c_str() << "\n";
        SysFreeString(name);
    }

}

void testUia()
{
    IUIAutomation* automation = NULL;
    auto r = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    HRESULT hr = CoCreateInstance(__uuidof(CUIAutomation), NULL, CLSCTX_INPROC_SERVER, __uuidof(IUIAutomation), (void**)&automation);
    if (FAILED(hr) || automation == NULL)
    {
        cout << "pAutomation null.\n";
        CoUninitialize();
        exit(0);
    }

    int ret = 0;
    auto hwnd = nullptr;
    if (hwnd == nullptr) {
        return;
    }

    
    IUIAutomationElement* target = nullptr;
    automation->ElementFromHandle(hwnd, &target);
    if (!target) {

        cout << "IUIAutomationElement target null.\n";
        
    }
    GetUiaInfo(target);
    target->Release();
    automation->Release();
    CoUninitialize();
    system("pause");
    return;
}

static BOOL CALLBACK enumchildWindowCallback(HWND hWnd, LPARAM lparam)
{
    RECT rc;
    GetWindowRect(hWnd, &rc);
    //printf("hWnd=%llx\n", hWnd);
    //printf("x=%d,y=%d,  r=%d,b=%d\n", rc.left, rc.top, rc.right, rc.bottom);
    return TRUE;
}
void testEnum(HWND hwnd)
{
    EnumChildWindows(hwnd, enumchildWindowCallback, NULL);
}

//ClickSurrender((HWND)0x1A0C82);
//return 0 ;
// 定义要修改的PID和地址
// LPVOID address = (LPVOID)0x49DD44;


static HWND ghwnd = NULL;

static void PrintRect(HWND findHwnd)
{
    RECT rc;
    GetWindowRect(findHwnd, &rc);
    printf("findHwnd=%llx\n", findHwnd);
    printf("x=%d,y=%d,r=%d,b=%d\n", rc.left, rc.top, rc.right, rc.bottom);
}


static HWND GetSpecificWnd(HWND hwnd, wstring str)
{
    if (hwnd == nullptr) {
        return nullptr;
    }
    HWND h, child;
    wchar_t buf[128];
    h = GetWindow(hwnd, GW_HWNDFIRST);
    while (h != nullptr) {
        child = FindWindowEx(h, 0, L"Static", NULL);
        GetWindowText(child, buf, 128);
        if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
            //PrintRect(child);
            auto hBtn = FindWindowEx(h, 0, L"Button", nullptr); // 确定按钮
            //printf("11 hBtn=%llx\n", hBtn);
            hBtn = FindWindowEx(h, hBtn, L"Button", nullptr);
            PostMessage(hBtn, BM_CLICK, 0, 0);
            return h;
        }
        h = GetWindow(h, GW_HWNDNEXT);
    }
    return nullptr;
}

// 有可能是单独挂在桌面下面的dialog
static HWND GetSpecificWnd2(HWND hwnd, wstring str)
{
    HWND dialog, child;
    wchar_t buf[128];
    dialog = FindWindowEx(hwnd, 0, L"#32770", NULL);
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
    return nullptr;
}


BOOL mycallback2(HWND hwnd, LPARAM lpara)
{
    if (!::IsWindow(hwnd) || !IsWindowVisible(hwnd))
        return TRUE;

    wchar_t buf[20];
    GetWindowText(hwnd, buf, 20);
    if (wcscmp(buf, L"四国军棋角色版") == 0) {
        ghwnd = hwnd;
        cout << "hwnd =" << std::hex << hwnd << std::dec << "\n";
        return FALSE;
    }
    return TRUE;
}

void TestGetSpecificWnd()
{
    EnumWindows(mycallback2, NULL);
    if (ghwnd == NULL) {
        cout << "no client.\n";
        return ;
    }
    while (true) {
        auto findHwnd = GetSpecificWnd(ghwnd, L"战败");
        if (findHwnd != nullptr) {
            //RECT rc;
            //GetWindowRect(findHwnd, &rc);
            //printf("findHwnd=%llx\n", findHwnd);
            //printf("x=%d,y=%d,r=%d,b=%d\n", rc.left, rc.top, rc.right, rc.bottom);
            //Sleep(200);
            break;
        }
    }
    while (true) {
        auto findHwnd = GetSpecificWnd(ghwnd, L"本局游戏结束");
        if (findHwnd != nullptr) {
            //RECT rc;
            //GetWindowRect(findHwnd, &rc);
            break;
        }
    }
}


static HANDLE hEvtObj = NULL;
static void ComfilmFaild(void* para)
{
    cout << "start ComfilmFaild" << endl;
    WaitForSingleObject(hEvtObj, -1);

    cout << "end ComfilmFaild" << endl;
}

void TestComfilmFaild()
{
    hEvtObj = CreateEvent(NULL,
        TRUE,		// 手动重置为非信号态 
        FALSE,		// 初始不可响应 
        NULL);
    Sleep(1000);
    _beginthread(ComfilmFaild, 0, 0);
    Sleep(3000);
    cout << "start SetEvent\n" << endl;
    SetEvent(hEvtObj);
    cout << "end SetEvent\n" << endl;
    Sleep(1000);
    cout << "end main\n" << endl;
}

int main22()
{
    //TestTextData();
    //HWND h1 = (HWND)111;
    //HWND h1 = (HWND)0x00920BB2;
    //DWORD out;
    //GetHandleInformation(h1, &out);
    return 0;
}
