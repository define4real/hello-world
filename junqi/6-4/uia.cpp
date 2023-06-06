#if 0

#include <iostream>
#include <UIAutomationClient.h>
#include <atlbase.h>
#include <oleacc.h>
#pragma comment (lib, "oleacc.lib")
using namespace std;

extern std::string ws2s(const wchar_t* pw);

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


//static HWND GetSpecificWnd(HWND hwnd, wstring str)
//{
//    if (hwnd == nullptr) {
//        return nullptr;
//    }
//    HWND h, child;
//    wchar_t buf[128];
//    h = GetWindow(hwnd, GW_HWNDFIRST);
//    while (h != nullptr) {
//        child = FindWindowEx(h, 0, L"Static", NULL);
//        GetWindowText(child, buf, 128);
//        if (wstring(buf) != L"" && wstring(buf).find(str) != wstring::npos) {
//            //PrintRect(child);
//            auto hBtn = FindWindowEx(h, 0, L"Button", nullptr); // 确定按钮
//            //printf("11 hBtn=%llx\n", hBtn);
//            hBtn = FindWindowEx(h, hBtn, L"Button", nullptr);
//            PostMessage(hBtn, BM_CLICK, 0, 0);
//            return h;
//        }
//        h = GetWindow(h, GW_HWNDNEXT);
//    }
//    return nullptr;
//}




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


extern IUIAutomation* pAutomation;
extern  IUIAutomationTreeWalker* gWalk;
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
#endif