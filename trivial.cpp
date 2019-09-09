
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;


class A
{
public:
	A(int) {}; //no default constructor
};

class B
{
public:
	B() {} //default constructor available
};

class C
{

public:
	int a;
	string  b;
	constexpr  static double dx=0.2;
	const  static string sx;
	string e;
};
const string C::sx = string("sss");
int mainxx()
{

	C c = {0, "abc","aa"};
	A a1[3] = { A(2), A(1), A(14) }; //OK n == m
	//A a2[3] = { A(2) }; //ERROR A没有默认构造函数. 不能按值初始化a2[1] 和 a2[2]
	B b1[3] = { B() }; //OK b1[1]和b1[2]使用默认构造函数按值初始化
	int Array1[1000] = { 0 }; //所有元素被初始化为0
	int Array2[1000] = { 1 }; //注意: 只有第一个元素被初始化为1，其他为0;
	bool Array3[1000] = {}; //大括号里可以为空，所有元素被初始化为false；
	int Array4[1000]; //没有被初始化. 这和空{}初始化不同；
	//这种情形下的元素没有按值初始化，他们的值是未知的，不确定的; 
	//(除非Array4是全局数据)
	//int array[2] = { 1,2,3,4 }; //ERROR, 太多初始值
	return 0;
}