//设置屏保和启用登录密码
//个性化-锁屏界面-屏幕保护程序设置-屏幕保护程序：等待时间，在回复时显示登录屏幕(R)
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
	//cout << "时间差：" << difftime(ends, start) << endl;
	//cout << "Clock时间差：" << cends - cstart << endl;
	SetThreadExecutionState(ES_CONTINUOUS);
	return 0;
}
