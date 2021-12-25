#include <Windows.h>
#include <iostream>
#include <thread>
#include <tchar.h>
#include <oleacc.h>
using namespace std;
#include <windows.h>
#include <process.h>

#include <oleacc.h>
#pragma comment (lib, "oleacc.lib")

#include <cstdio>

void CALLBACK HandleWinEvent(HWINEVENTHOOK hook, DWORD event, HWND hwnd, LONG idObject, LONG idChild, DWORD dwEventThread, DWORD dwmsEventTime)
{
	IAccessible* pAcc = NULL;
	VARIANT varChild;

	HRESULT hr = AccessibleObjectFromEvent(hwnd, idObject, idChild, &pAcc, &varChild);

	if ((hr == S_OK) && (pAcc != NULL))
	{
		VARIANT varResult = {};
		pAcc->get_accRole(varChild, &varResult);

		if (varResult.lVal == ROLE_SYSTEM_PAGETAB || varResult.lVal == NULL)
		{
			BSTR bstrName;
			pAcc->get_accName(varChild, &bstrName);

			if (event == EVENT_OBJECT_CREATE)
			{
				printf("Create: ");
			}
			else if (event == EVENT_OBJECT_DESTROY)
			{
				printf("Destroy:   ");
			}
			printf("%S\n", bstrName);
			SysFreeString(bstrName);
		}
		pAcc->Release();
	}
}

unsigned __stdcall hook(void* args)
{
	HWND hWindow = FindWindow(TEXT("Notepad++"), NULL);

	if (1)
	{
		DWORD ProcessId, ThreadId;
		ThreadId = GetWindowThreadProcessId(hWindow, &ProcessId);

		CoInitialize(NULL);
		HWINEVENTHOOK hHook = SetWinEventHook(EVENT_SYSTEM_ALERT, EVENT_SYSTEM_ALERT, NULL, 0, 0/*HandleWinEvent, ProcessId*/, ThreadId, WINEVENT_OUTOFCONTEXT | WINEVENT_SKIPOWNTHREAD);

		MSG msg;
		while (GetMessage(&msg, NULL, 0, 0) > 0);

		UnhookWinEvent(hHook);
		CoUninitialize();
	}
	return 0;
}

int mainxxx()
{

	//HWND lastForegroundHwnd = GetForegroundWindow();
	POINT pt = {1840, 200};
	HWND lastForegroundHwnd = WindowFromPoint(pt);
	DWORD dwId = OBJID_CLIENT;
	REFIID riid = IID_IAccessible;
	IAccessible *ppvObject = NULL;

	IID_IServiceProvider;

	const GUID  IID_IAccessible2 = { 0xE89F726E, 0xC4F4, 0x4C19, { 0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78 } };
	REFIID riid2 = IID_IAccessible2;
	//HRESULT hr = AccessibleObjectFromWindow(lastForegroundHwnd, dwId, riid, (void **)&ppvObject);
	HRESULT hr = AccessibleObjectFromWindow(lastForegroundHwnd, dwId, riid, (void **)&ppvObject);

	if ((hr == S_OK) && (ppvObject != NULL)) {
		BSTR name;
		VARIANT varChild;
		varChild.vt = VT_I4;
		varChild.lVal = CHILDID_SELF;
		ppvObject->get_accName(varChild, &name);
		if (name)
			SysFreeString(name);
		ppvObject->Release();
	}

	HWND parent = GetParent(lastForegroundHwnd);

	hr = AccessibleObjectFromWindow(parent, dwId, riid, (void **)&ppvObject);

	if ((hr == S_OK) && (ppvObject != NULL)) {
		BSTR name;
		VARIANT varChild;
		varChild.vt = VT_I4;
		varChild.lVal = CHILDID_SELF;
		ppvObject->get_accName(varChild, &name);
		if (name)
			SysFreeString(name);
		ppvObject->Release();
	}



	//NotifyWinEvent(EVENT_SYSTEM_ALERT, lastForegroundHwnd, 1, CHILDID_SELF);
	//Sleep(2000);
	//HWND parent = GetParent(lastForegroundHwnd);
	//NotifyWinEvent(EVENT_SYSTEM_ALERT, parent, 1, CHILDID_SELF);
	//SendMessage(lastForegroundHwnd, EVENT_SYSTEM_ALERT, 1, 0);
	//SendMessage(parent, EVENT_SYSTEM_ALERT, 1, 0);
	//Sleep(2000);
	system("pause");



	//HWND hw = GetForegroundWindow();
	//IAccessible *pIA;
	//HRESULT hr = AccessibleObjectFromWindow(hw, OBJID_CLIENT, IID_IAccessible, (void**)&pIA);
	//if (!SUCCEEDED(hr))
	//	return -1;

	//const IID IID_IAccessible2 = { 0xE89F726E, 0xC4F4, 0x4c19, 0xbb, 0x19, 0xb6, 0x47, 0xd7, 0xfa, 0x84, 0x78 };
	//::IServiceProvider *pService = NULL;
	//hr = pIA->QueryInterface(IID_IServiceProvider, (void **)&pService);
	//if (SUCCEEDED(hr))
	//{
	//	IAccessible2 *pIA2 = NULL;
	//	hr = pService->QueryService(IID_IAccessible2, IID_IAccessible2, (void**)&pIA2);
	//	if (SUCCEEDED(hr) && pIA2)
	//	{
	//		pIA2->Release();
	//	}
	//	pService->Release();
	//}

	return 0;


	unsigned ThreadId;
	HANDLE hThread = (HANDLE)_beginthreadex(NULL, 0, hook, NULL, 0, &ThreadId);

	for (;; Sleep(100))
	{
		if (GetAsyncKeyState(VK_END) & 0x8000) // Press End to exit
		{
			PostThreadMessage(ThreadId, WM_QUIT, 0, 0);
			WaitForSingleObject(hThread, 3000);
			break;
		}
	}
	CloseHandle(hThread);
	return 0;
}