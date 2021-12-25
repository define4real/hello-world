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
	//auto len = lstrlenW(pw);
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

void testIA2(HWND hwnd)
{
	
	IAccessible *pacc = nullptr;
	VARIANT vchild;
	//auto ret = AccessibleObjectFromPoint(p1, &pacc, &vchild);
	HWND hw = WindowFromPoint(p1);
	//hw = FindWindowA("Chrome_WidgetWin_0", nullptr);
	//if (hw == nullptr) {
	//	cout << "empyt.\n";
	//	return;
	//}
	hw = hwnd;
	auto ret = AccessibleObjectFromWindow(hw, OBJID_WINDOW/*OBJID_CLIENT*/, IID_IAccessible, (void**)&pacc);
	if (ret != S_OK || pacc == nullptr) {
		return;
	}

	ROLE_SYSTEM_WINDOW;
	BSTR name = nullptr;
	VARIANT vv;

	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;
	ret = pacc->get_accName(vchild, &name);
	if (name != nullptr) {
		cout << "value1111=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}
	ret = pacc->get_accRole(vchild, &vv);
	if (ret == S_OK && vchild.vt == VT_I4) {
		cout << "get_accRole111=" << vv.lVal << "\n";
	}


	IServiceProvider *ips = nullptr;
	ret = pacc->QueryInterface(IID_IServiceProvider, (void**)&ips);
	if (ret != S_OK || &ips == nullptr) {
		pacc->Release();
		return;
	}

	IAccessible2 *ia2 = nullptr;
	ret = ips->QueryService(IID_IAccessible, IID_IAccessible2, (void**)&ia2);
	if (ret != S_OK || &ia2 == nullptr) {
		ips->Release();
		pacc->Release();
		return;
	}
	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;
	
	
	ret = ia2->get_accRole(vchild, &vv);
	if (ret == S_OK && vchild.vt == VT_I4) {
		cout << "get_accRole=" << vv.lVal << "\n";
	}

	
	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;
	ret = ia2->get_accName(vchild, &name);
	if (name != nullptr) {
		cout << "name=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}

	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;
	ret = ia2->get_accValue(vchild, &name);
	if (name != nullptr) {
		cout << "value=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}

	ia2->Release();
}

void testDom()
{
	HRESULT ret;
	IAccessible *pacc = nullptr;
	VARIANT vchild;
	IUIAutomationElement* ui = nullptr;
	HWND hwnd = WindowFromPoint(p1);
	//pAutomation->ElementFromPoint(p1, &ui);
	pAutomation->ElementFromHandle(hwnd, &ui);
	if (ui == nullptr) {
		return;
	}

	IUIAutomationLegacyIAccessiblePattern *legacy;
	ui->GetCurrentPatternAs(UIA_LegacyIAccessiblePatternId, IID_IUIAutomationLegacyIAccessiblePattern, (void**)&legacy);
	if (legacy == nullptr) {
		ui->Release();
		return;
	}

	legacy->GetIAccessible(&pacc);
	pAutomation->Release();

	BSTR names;
	vchild.lVal = VT_I4;
	vchild.vt = CHILDID_SELF;
	auto tttt = pacc->get_accName(vchild, &names);
	auto terr = GetLastError();
	if (names != nullptr) {
		cout << "pacc get_accDescription=" << ws2s(names).c_str() << "\n";
		SysFreeString(names);
	}

	long x1, y1, x2, y2;
	vchild.lVal = VT_I4;
	vchild.vt = CHILDID_SELF;
	ret = pacc->accLocation(&x1, &y1, &x2, &y2, vchild);

	
	//auto ret = AccessibleObjectFromPoint(p1, &pacc, &vchild);
	//if (ret != S_OK || pacc == nullptr) {
	//	return;
	//}
	IServiceProvider *ips = nullptr;
	ret = pacc->QueryInterface(IID_IServiceProvider, (void**)&ips);
	if (ret != S_OK || &ips == nullptr) {
		pacc->Release();
		return;
	}


	ISimpleDOMNode *ia2 = nullptr;
	ret = ips->QueryService(IID_IAccessible, IID_ISimpleDOMNode, (void**)&ia2);
	if (ret != S_OK || &ia2 == nullptr) {
		ips->Release();
		pacc->Release();
		return;
	}

	BSTR name;
	vchild.lVal = VT_I4;
	vchild.vt = CHILDID_SELF;
	ret = pacc->get_accDescription(vchild, &name);
	terr = GetLastError();
	if (name != nullptr) {
		cout << "pacc get_accDescription=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}


	BSTR nodeName = nullptr;
	short nameId;
	BSTR nodeValue = nullptr;
	unsigned int numChildren;
	unsigned int uniqueId;
	unsigned short nodeType;
	ret = ia2->get_nodeInfo(&nodeName, &nameId, &nodeValue, &numChildren, &uniqueId, &nodeType);
	if (ret == S_OK) {
		if (nodeName != nullptr) {
			cout << "nodeName=" << ws2s(nodeName).c_str() << "\n";
			SysFreeString(nodeName);
		}
		if (nodeValue != nullptr) {
			cout << "nodeValue=" << ws2s(nodeValue).c_str() << "\n";
			SysFreeString(nodeValue);
		}
		cout << "nameId=" << nameId << "\n";
		cout << "numChildren=" << numChildren << "\n";
		cout << "uniqueId=" << uniqueId << "\n";
		cout << "nodeType=" << nodeType << "\n";
	}

	ret = ia2->get_language(&nodeName);
	if (ret == S_OK) {
		if (nodeName != nullptr) {
			cout << "get_language=" << ws2s(nodeName).c_str() << "\n";
			SysFreeString(nodeName);
		}
	}

	ret = ia2->get_innerHTML(&nodeName);
	if (ret == S_OK) {
		if (nodeName != nullptr) {
			cout << "innerHTML=" << ws2s(nodeName).c_str() << "\n";
			SysFreeString(nodeName);
		}
	}

	ISimpleDOMNode *dom2 = nullptr;
	ret = ia2->get_firstChild(&dom2);
	auto err = GetLastError();
	if (ret == S_OK) {
		if (dom2 != nullptr) {
			dom2->Release();
		}
	}

	//unsigned short maxAttribs = 2;
	//BSTR attribNames;
	//	short nameSpaceID;
	//BSTR ttribValues;
	// unsigned short numAttribs;
	// ret = ia2->get_attributes(maxAttribs, &attribNames, &nameSpaceID, &ttribValues, &numAttribs);
	// err = GetLastError();
	ia2->Release();
}

void testDocment()
{
	IAccessible *pacc = nullptr;
	VARIANT vchild;
	auto ret = AccessibleObjectFromPoint(p1, &pacc, &vchild);
	if (ret != S_OK || pacc == nullptr) {
		return;
	}
	IServiceProvider *ips = nullptr;
	ret = pacc->QueryInterface(IID_IServiceProvider, (void**)&ips);
	if (ret != S_OK || &ips == nullptr) {
		pacc->Release();
		return;
	}

	ISimpleDOMDocument *ia2 = nullptr;
	ret = ips->QueryService(IID_IAccessible, IID_ISimpleDOMDocument, (void**)&ia2);
	if (ret != S_OK || &ia2 == nullptr) {
		ips->Release();
		pacc->Release();
		return;
	}
	vchild.vt = VT_I4;
	vchild.lVal = CHILDID_SELF;


	BSTR nodeName = nullptr;
	ret = ia2->get_title(&nodeName);
	if (ret == S_OK) {
		if (nodeName != nullptr) {
			cout << "title=" << ws2s(nodeName).c_str() << "\n";
			SysFreeString(nodeName);
		}
	}

	ia2->Release();
}

static BOOL CALLBACK WindowEnumProc(HWND hwnd, LPARAM data) {
	char buf[256];
	GetClassNameA(hwnd, buf, 256);
	if (string(buf) == "Chrome_WidgetWin_0") {
		//cout << "hwnd=" << std::hex << hwnd << "\n";
		DWORD pid;
		DWORD tid = GetWindowThreadProcessId(hwnd, &pid);
		//cout << "pid=" << std::dec << pid << ",tid=" << tid << "\n";
		testIA2(hwnd);
		Sleep(100);
	}
	return TRUE;
}


int _tmain(int argc, TCHAR* argv[])
{
	//EnumWindows(WindowEnumProc, 0);
	//HWND hws = FindWindowEx(HWND(0x1608C8), nullptr, "Chrome_WidgetWin_", 0);
	//cout << "hwnd=" << std::hex << hws << "\n";
	//system("pause");
	//return 0;
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
	//pAutomation->get_ControlViewWalker(&walk);
	IUIAutomationElement * ele = nullptr;
	HWND hws = FindWindowExA(HWND(0x1608C8), nullptr, "Chrome_WidgetWin_1", 0);
	pAutomation->ElementFromHandle(hws, &ele);
	
	if (ele != nullptr) {
		RECT rc;
		ele->get_CurrentBoundingRectangle(&rc);
		BSTR sss = nullptr;
		ele->get_CurrentName(&sss);
		if (sss != nullptr) {
			cout << "hwnd uia name=" << ws2s(sss).c_str() << "\n";
			SysFreeString(sss);
		}
		IUIAutomationCondition *pcon = nullptr;
		pAutomation->CreatePropertyCondition(UIA_ClassNamePropertyId, CComVariant("Chrome_WidgetWin_1"), &pcon);
		if (pcon != nullptr) {
			IUIAutomationElement *child = nullptr;
			ele->FindFirst(TreeScope_Descendants, pcon, &child);
			if (child != nullptr) {

				ele->get_CurrentBoundingRectangle(&rc);
				child->get_CurrentName(&sss);
				if (sss != nullptr) {
					cout << "child uia name=" << ws2s(sss).c_str() << "\n";
					SysFreeString(sss);
				}
				IUIAutomationLegacyIAccessiblePattern *legacy;
				child->GetCurrentPatternAs(UIA_LegacyIAccessiblePatternId, IID_IUIAutomationLegacyIAccessiblePattern, (void**)&legacy);
				if (legacy != nullptr) {
					IAccessible *pacc = nullptr;
					legacy->GetIAccessible(&pacc);
					if (pacc != nullptr) {
						BSTR names;
						VARIANT vchild;
						VARIANT vv;

						vchild.lVal = VT_I4;
						vchild.vt = CHILDID_SELF;
						ret = pacc->get_accRole(vchild, &vv);
						if (ret == S_OK && vchild.vt == VT_I4) {
							cout << "get_accRole111=" << vv.lVal << "\n";
						}

						vchild.lVal = VT_I4;
						vchild.vt = CHILDID_SELF;
						auto tttt = pacc->get_accName(vchild, &names);
						auto terr = GetLastError();
						if (names != nullptr) {
							cout << "pacc get_accDescription=" << ws2s(names).c_str() << "\n";
							SysFreeString(names);
						}

						
						pacc->Release();
					}
					legacy->Release();
				}
				child->Release();
			}
			pcon->Release();
		}
		ele->Release();
	}

	//while (true) {
	//	if (checkPoint()) {
	//		//HWND hw = WindowFromPoint(p1);
	//		//HANDLE window_interface = GetProp(hw, "__BROWSER_WINDOW__");
	//		//cout << "window_interface=" << window_interface << "\n";
	//		//testIA2();
	//		//testDom();
	//		//testDocment();
	//		EnumWindows(WindowEnumProc, 0);
	//	}
	//}
	CoUninitialize();
	system("pause");
	return 0;

	HWND hw = GetForegroundWindow();
	IAccessible *pIA;
	hr = AccessibleObjectFromWindow(hw, OBJID_CLIENT, IID_IAccessible, (void**)&pIA);
	if (!SUCCEEDED(hr))
		return -1;

	const IID IID_IAccessible2 = { 0xE89F726E, 0xC4F4, 0x4c19, 0xbb, 0x19, 0xb6, 0x47, 0xd7, 0xfa, 0x84, 0x78 };
	::IServiceProvider *pService = NULL;
	hr = pIA->QueryInterface(IID_IServiceProvider, (void **)&pService);
	if (SUCCEEDED(hr))
	{
		IAccessible *pIA2 = NULL;
		hr = pService->QueryService(IID_IAccessible2, IID_IAccessible2, (void**)&pIA2);
		if (SUCCEEDED(hr) && pIA2)
		{
			pIA2->Release();
		}
		pService->Release();
	}

	system("pause");
	return 0;
}