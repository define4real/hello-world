
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
	//A a2[3] = { A(2) }; //ERROR Aû��Ĭ�Ϲ��캯��. ���ܰ�ֵ��ʼ��a2[1] �� a2[2]
	B b1[3] = { B() }; //OK b1[1]��b1[2]ʹ��Ĭ�Ϲ��캯����ֵ��ʼ��
	int Array1[1000] = { 0 }; //����Ԫ�ر���ʼ��Ϊ0
	int Array2[1000] = { 1 }; //ע��: ֻ�е�һ��Ԫ�ر���ʼ��Ϊ1������Ϊ0;
	bool Array3[1000] = {}; //�����������Ϊ�գ�����Ԫ�ر���ʼ��Ϊfalse��
	int Array4[1000]; //û�б���ʼ��. ��Ϳ�{}��ʼ����ͬ��
	//���������µ�Ԫ��û�а�ֵ��ʼ�������ǵ�ֵ��δ֪�ģ���ȷ����; 
	//(����Array4��ȫ������)
	//int array[2] = { 1,2,3,4 }; //ERROR, ̫���ʼֵ
	return 0;
}