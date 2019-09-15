// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using  std::cout;
using  std::cin;
using  std::endl;

int main()
{
	int a, b;
	freopen("in.txt", "r", stdin); //输入重定向，输入数据将从in.txt文件中读取
	freopen("out.txt", "w", stdout); //输出重定向，输出数据将保存在out.txt文件中
	while (cin >> a >> b)
		cout << a + b << endl; // 注意使用endl
	freopen("CON", "w", stdout);
	cout << "haha" << endl;
	fclose(stdin);//关闭文件
	fclose(stdout);//关闭文件
	return 0;
}

