// wechart_uia.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#undef UNICODE
#include <iostream>
#include <atlbase.h>
#include <Windows.h>
#include <tchar.h>
#include <time.h>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <oleacc.h>
#include <UIAutomationClient.h>

using namespace std;
IUIAutomationElement* pTargetElement = NULL;
IUIAutomation* pAutomation = NULL;
IUIAutomationTreeWalker* walk;
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

struct ElementInfo
{
	IUIAutomationElement* e;
	RECT rect;
};

vector<ElementInfo> g_elementInfo;
RECT g_targetRect;
RECT g_minRect;

//bool rectCompare(ElementInfo& e1, ElementInfo& e2)
//{
//	return e1.rect.left >= e2.rect.left && e1.rect.right <= e2.rect.right
//		&& e1.rect.top >= e2.rect.top && e1.rect.bottom <= e2.rect.bottom;
//	 
//}

void Print(IUIAutomationElement* target)
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

	target->get_CurrentLocalizedControlType(&name);
	if (name != nullptr) {
		cout << "ControlType=" << ws2s(name).c_str() << "\n";
		SysFreeString(name);
	}

}

IUIAutomationElement* GetSmallRectElement()
{
	int len = g_elementInfo.size();
	RECT smallRect = g_elementInfo[0].rect;
	int smallIndex = 0;
	
	for (int i = 1; i < len; i++) {
		if (g_elementInfo[i].rect.left >= smallRect.left &&
			g_elementInfo[i].rect.right <= smallRect.right &&
			g_elementInfo[i].rect.top >= smallRect.top &&
			g_elementInfo[i].rect.bottom <= smallRect.bottom) {
			smallRect = g_elementInfo[i].rect;
			g_elementInfo[smallIndex].e->Release();
			smallIndex = i;
		} else {
			g_elementInfo[i].e->Release();
		}
	}
	auto target = g_elementInfo[smallIndex].e;
	g_elementInfo.clear();
	return target;
	
}

IUIAutomationElement* SimpleTraverse(IUIAutomationElement* parent)
{
	if (parent == nullptr) {
		return nullptr;
	}
	IUIAutomationElement* child = nullptr;
	IUIAutomationElement* next = nullptr;
	IUIAutomationElement* target = parent;
	walk->GetFirstChildElement(parent, &child);
	int count = 0;
	RECT rect;
	while (child) {
		count++;
		child->get_CurrentBoundingRectangle(&rect);
		walk->GetNextSiblingElement(child, &next);
		if (rect.left <= p1.x && rect.right >= p1.x && rect.top <= p1.y && rect.bottom >= p1.y) {
			g_elementInfo.push_back({ child, rect});
			//if (rect.left <= g_minRect.left && rect.right >= g_minRect.right && rect.top <= g_minRect.top && rect.bottom >= g_minRect.bottom) {
			//	g_minRect = rect;
			//	parent->Release();
			//	target = SimpleTraverse(child);
			//}
		} else {
			child->Release();

		}
		
		child = next;
	}
	
	int len = g_elementInfo.size();
	//cout << "child count=" << count << "; in point len=" << len << "\n";
	if (len > 0) {
		// sort(g_elementInfo.begin(), g_elementInfo.end(), rectCompare);
		//for (int i = 1; i < len; i++) {
		//	g_elementInfo[i].e->Release();
		//}
		parent->Release();
		parent = GetSmallRectElement();
		//Print(parent);
		target = SimpleTraverse(parent);
	}
	
	return target;
}



void GetUiaInfo()
{
	IUIAutomationElement* target = nullptr;
	pAutomation->ElementFromPoint(p1, &target);
	if (target) {
		//Print(target);
		target->get_CurrentBoundingRectangle(&g_targetRect);
		g_minRect = g_targetRect;
	}
	target = SimpleTraverse(target);
	if (target != nullptr) {
		Print(target);
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
	pAutomation->get_ControlViewWalker(&walk);
	bool checkIa2Flag = false;
	while (true) {
		if (checkPoint()) {
			cout << "start checkPoint" << "\n";
			GetUiaInfo();

		}
	}

	CoUninitialize();
	system("pause");
	return 0;
}