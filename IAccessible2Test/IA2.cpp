// dw_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#undef UNICODE
#include <iostream>
#include <atlbase.h>
#include<Windows.h>
#include<tchar.h>
#include <time.h>
#include <fstream>
#include <string>
#include <UIAutomationClient.h>

using namespace std;
IUIAutomationElement* pTargetElement = NULL;
IUIAutomation* pAutomation = NULL; 
IUIAutomationTreeWalker *walk;
static POINT p1;
static POINT p2;
static DWORD t1;
static DWORD t2;

bool checkPoint()
{
	GetCursorPos(&p1);

	if (p1.x == p2.x && p1.y == p2.y) {
		t2 = GetTickCount();
		if (t2 - t1 > 1500) {
			t1 = GetTickCount();
			GetCursorPos(&p2);
			GetCursorPos(&p1);
			return true;
		}
	}
	else {
		t1 = GetTickCount();
		t2 = GetTickCount();
		GetCursorPos(&p2);
		GetCursorPos(&p1);
	}
	return false;
}

std::string ws2s(const wchar_t* pw)
{
	int nLen = ::WideCharToMultiByte(CP_ACP, NULL, pw, -1, NULL, 0, NULL, NULL);
	char* buf = new char[nLen];
	::WideCharToMultiByte(CP_ACP, NULL, pw, -1, buf, nLen, NULL, NULL);
	std::string s(buf);
	delete[] buf;
	return s;
}



#include <oleacc.h>
#include "Accessible2.h"
#include "ISimpleDOMDocument.h"
#include "ISimpleDOMNode.h"

bool TestIa2()
{
	IAccessible *pacc = nullptr;
	VARIANT vchild;
	//auto ret = AccessibleObjectFromPoint(p1, &pacc, &vchild);
	HWND hwnd = WindowFromPoint(p1);
	HWND parent = nullptr;
	HWND desk = GetDesktopWindow();
	while (true) {
		parent = GetParent(hwnd);
		if (parent == nullptr) {
			break;
		}
		hwnd = parent;
	}
	
	//!!!!!!!!!!!!!!! OBJID_CLIENT
	//maybe "Chrome_WidgetWin_1"
	auto ret = AccessibleObjectFromWindow(hwnd, /*OBJID_WINDOW*/OBJID_CLIENT, IID_IAccessible, (void**)&pacc);
	if (ret != S_OK || pacc == nullptr) {
		return false;
	}
	BSTR name = nullptr;
	//VARIANT vv;

	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;
	ret = pacc->get_accName(vchild, &name);
	if (name != nullptr) {
		cout << "value=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}
	//ret = pacc->get_accRole(vchild, &vv);
	//if (ret == S_OK && vchild.vt == VT_I4) {
	//	cout << "get_accRole111=" << vv.lVal << "\n";
	//}

	//ret = pacc->accHitTest(10, 10, &vv);
	//if (ret == S_OK && vchild.vt == VT_I4) {
	//	cout << "accHitTest=" << vv.lVal << "\n";
	//}
	IServiceProvider *ips = nullptr;
	ret = pacc->QueryInterface(IID_IServiceProvider, (void**)&ips);
	if (ret != S_OK || &ips == nullptr) {
		pacc->Release();
		return false;
	}
	IAccessible2 *ia2 = nullptr;
	ret = ips->QueryService(IID_IAccessible, IID_IAccessible2, (void**)&ia2);
	if (ret != S_OK || &ia2 == nullptr) {
		ips->Release();
		pacc->Release();
		return false;
	}
	ia2->Release();
	return true;
}


static BOOL CALLBACK WindowEnumProc(HWND hwnd, LPARAM data) {
	char buf[256];
	GetClassNameA(hwnd, buf, 256);
	if (string(buf) == "Chrome_WidgetWin_0") {
		DWORD pid;
		DWORD tid = GetWindowThreadProcessId(hwnd, &pid);
		//testIA2();
		Sleep(100);
	}
	return TRUE;
}

void GetUiaInfo()
{
	IUIAutomationElement * target = nullptr;
	pAutomation->ElementFromPoint(p1, &target);
	if (target != nullptr) {
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
		target->Release();
	}
}


int _tmain(int argc, TCHAR* argv[])
{
	HRESULT hr;
	int ret = 0;
	CoInitializeEx(NULL, COINIT_MULTITHREADED);
	hr = CoCreateInstance(__uuidof(CUIAutomation), NULL, CLSCTX_INPROC_SERVER, __uuidof(IUIAutomation), (void**)&pAutomation);
	if (FAILED(hr) || pAutomation == NULL)
	{
		CoUninitialize();
		system("pause");
		return 0;
	}

	bool checkIa2Flag = false;
	while (true) {
		if (checkPoint()) {
			if (!checkIa2Flag) {
				checkIa2Flag = TestIa2();
			}
			else {
				GetUiaInfo();
			}
		}
	}
	CoUninitialize();
	system("pause");
	return 0;
}