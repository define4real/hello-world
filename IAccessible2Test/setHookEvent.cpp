// dw_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#undef UNICODE
#include <iostream>

#include<Windows.h>
#include<tchar.h>
char *g_buf;
BOOL InjectDll(DWORD dwPID, LPCTSTR szDllPath)
{
	HANDLE hProcess = NULL, hThread = NULL;
	HMODULE hMod = NULL;
	LPVOID pRemoteBuf = NULL;
	DWORD dwBufSize = (DWORD)(strlen(szDllPath) + 1) * sizeof(TCHAR);
	LPTHREAD_START_ROUTINE pThreadProc;

	if (!(hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPID)))
	{
		_tprintf(L"OpenProcess(%d) failed!!! [%d]\n", dwPID, GetLastError());
		return false;
	}
	pRemoteBuf = VirtualAllocEx(hProcess, NULL, dwBufSize, MEM_COMMIT, PAGE_READWRITE);
	g_buf = (char *)pRemoteBuf;
	WriteProcessMemory(hProcess, pRemoteBuf, (LPVOID)szDllPath, dwBufSize, NULL);

	hMod = GetModuleHandle("kernel32.dll");
	pThreadProc = (LPTHREAD_START_ROUTINE)GetProcAddress(hMod, "LoadLibraryA");
	hThread = CreateRemoteThread(hProcess, NULL, 0, pThreadProc, pRemoteBuf, 0, NULL);
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
	CloseHandle(hProcess);
	return TRUE;
}


#include <fstream>
#include <string>
using namespace std;
HWND g_target_hwnd;

void getText()
{
	//SendMessage(g_target_hwnd, 1305, 2, (LPARAM)g_buf);
	SendMessage(g_target_hwnd, 1306,1, 2);
	//SendMessage(g_target_hwnd, 1320,0, 0);

	{	
		ifstream  fin("D:/123.txt");

		string s;
		while (getline(fin, s))
		{
			cout << s << endl;
		}
	}
	remove("D:/123.txt");

}

struct  st_a
{
	int a;
	char b;
	int c;
};
#include <oleacc.h>
int _tmainbb(int argc, TCHAR* argv[])
{

	HWND hw = GetForegroundWindow();
	IAccessible *pIA;
	HRESULT hr = AccessibleObjectFromWindow(hw, OBJID_CLIENT, IID_IAccessible, (void**)&pIA);
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

	size_t d = offsetof(st_a, b);
	size_t e = (size_t)&((st_a *)&d)->b;
	int ddd = 0;
	//printf("%d\n",sizeof(long *));
	//system("pause");
	
	return 0;
	HWND hwnd = FindWindow(NULL, "Main Window");
	DWORD pid;
	GetWindowThreadProcessId(hwnd, &pid);

	//HWND g_target_hwnd = (HWND)(0X00020CE2);
	g_target_hwnd = FindWindowExA(hwnd, 0, "pbdw80", 0);
	//if (InjectDll(pid, "D:/123.txt"))
	//	_tprintf(L"InjectDll() success!!!\n");
	//else
	//	_tprintf(L"InjectDll() failed!!!\n");

	getText();
	system("pause");
	return 0;
}