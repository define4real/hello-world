//�������������õ�¼����
//���Ի�-��������-��Ļ������������-��Ļ�������򣺵ȴ�ʱ�䣬�ڻظ�ʱ��ʾ��¼��Ļ(R)
#include "pch.h"
#include <Windows.h>
#include <time.h>  
#include <iostream>
using namespace std;


int main()
{
	SetThreadExecutionState(ES_CONTINUOUS | ES_DISPLAY_REQUIRED | ES_SYSTEM_REQUIRED);
	time_t start, ends;
	clock_t cstart, cends;

	start = time(NULL);
	//cstart = clock();

	int count = 0;
	cout << "start\n";
	while (true)
	{
		Sleep(5000);
		ends = time(NULL);
		//cends = clock();

		double diff = difftime(ends, start);
		if (diff > 70)
		{
			cout << "end\n";
			break;
		}
		else
			cout << "count=" << ++count << "\n";
	}
	
	
	//system("pause");
	//cout << "ʱ��" << difftime(ends, start) << endl;
	//cout << "Clockʱ��" << cends - cstart << endl;
	SetThreadExecutionState(ES_CONTINUOUS);
	return 0;
}
