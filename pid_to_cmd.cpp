#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <windows.h>
#include <stdio.h>
#include "Winternl.h"
#include <iostream>

typedef NTSTATUS(NTAPI *_NtQueryInformationProcess)(
	HANDLE ProcessHandle,
	DWORD ProcessInformationClass,
	PVOID ProcessInformation,
	DWORD ProcessInformationLength,
	PDWORD ReturnLength
	);

PVOID GetPebAddress(HANDLE ProcessHandle)
{
	_NtQueryInformationProcess NtQueryInformationProcess =
		(_NtQueryInformationProcess)GetProcAddress(
			GetModuleHandleA("ntdll.dll"), "NtQueryInformationProcess");
	PROCESS_BASIC_INFORMATION pbi;

	NtQueryInformationProcess(ProcessHandle, 0, &pbi, sizeof(pbi), NULL);

	return pbi.PebBaseAddress;
}

std::wstring getProcessCmd(int pid)
{
	std::wstring target_cmd = L"";
	HANDLE processHandle;
	PVOID pebAddress;
	PVOID rtlUserProcParamsAddress;
	UNICODE_STRING commandLine;
	//WCHAR *commandLineContents;

	if ((processHandle = OpenProcess(
		PROCESS_QUERY_INFORMATION | /* required for NtQueryInformationProcess */
		PROCESS_VM_READ, /* required for ReadProcessMemory */
		FALSE, pid)) == 0)
	{
		//printf("Could not open process!\n");
		std::cout <<  GetLastError();
		return L"";
	}

	pebAddress = GetPebAddress(processHandle);

	/* get the address of ProcessParameters */
	if (!ReadProcessMemory(processHandle,
		&(((_PEB*)pebAddress)->ProcessParameters),
		&rtlUserProcParamsAddress,
		sizeof(PVOID), NULL))
	{
		//printf("Could not read the address of ProcessParameters!\n");
		//return GetLastError();
		return L"";
	}

	/* read the CommandLine UNICODE_STRING structure */
	if (!ReadProcessMemory(processHandle,
		&(((_RTL_USER_PROCESS_PARAMETERS*)rtlUserProcParamsAddress)->CommandLine),
		&commandLine, sizeof(commandLine), NULL))
	{
		//printf("Could not read CommandLine!\n");
		//return GetLastError();
		return L"";
	}

	/* allocate memory to hold the command line */
	//commandLineContents = (WCHAR *)malloc(commandLine.Length);
	target_cmd.resize(commandLine.Length+1);


	/* read the command line */
	if (!ReadProcessMemory(processHandle, commandLine.Buffer,
		(WCHAR *)target_cmd.c_str(), commandLine.Length, NULL))
	{
		//printf("Could not read the command line string!\n");
		//return GetLastError();
		return L"";
	}

	//target_cmd = std::wstring(commandLine.Buffer, commandLine.Length);
	return target_cmd;

	/* print it */
	/* the length specifier is in characters, but commandLine.Length is in bytes */
	/* a WCHAR is 2 bytes */
	//printf("%.*S\n", commandLine.Length / 2, commandLineContents);
	//CloseHandle(processHandle);
	//free(commandLineContents);
}

int wmainxx(int argc, WCHAR *argv[])
{
	std::wstring fcck = getProcessCmd(2040);
	std::wcout << fcck.c_str();
	return 0;
}