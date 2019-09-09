
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
using namespace std;

#include <functional>
#include <iostream>


//std function 调用成员函数的两种方式



class Test124 {
public:
	int Sum(int x, int y) {
		return x + y;
	}
};

int mainxxxx()
{
	Test124 testObj;

	// functional1 can be defined using 'auto' keyword instead
	std::function<int(int, int)> functional1 = std::bind(&Test124::Sum, testObj,
		std::placeholders::_1, std::placeholders::_2);
	int result1 = functional1(1, 2);

	// functional2 can not be defined using 'auto' keyword instead
	std::function<int(Test124, int, int)> functional2 = &Test124::Sum;
	int result2 = functional2(testObj, 1, 2);

	return 1;
}

struct Foo {
	void display_greeting() {
		std::cout << "Hello, world.\n";
	}
	void display_number(int i) {
		std::cout << "number: " << i << '\n';
	}
	int data = 7;
};

typedef int (Foo::* Fp)(int);
Fp fffp;

int main99() {
	Foo f;

	auto greet = std::mem_fn(&Foo::display_greeting);
	greet(f);

	auto print_num = std::mem_fn(&Foo::display_number);
	print_num(f, 42);

	auto access_data = std::mem_fn(&Foo::data);
	std::cout << "data: " << access_data(f) << '\n';
	return 0;
}

struct ptr {
	int age;
	char *p;
	std::string name;
	ptr()
	{
		cout << "ptr ctor.\n";
		p = new char[5];
	}

	//~ptr()
	//{
	//	cout << "ptr dtor.\n";
	//}

	void release()
	{
		cout << "ptr release.\n";
		delete []p;
		//delete this;
	}

};

/**
* std::bind1st  std::bind2nd 就是将一个二元函数的一个参数设置为定值，这样二元函数就转换为了一元函数
* 因为有些算法的参数要求必须是一元函数，但是我们又想用二元函数，那么就可以使用这两个函数
*/
/**
*@brief std::less 仿函数的内部实现
	template <class T> struct less : binary_function <T,T,bool> {
		bool operator() (const T& x, const T& y) const {return x<y;}
	};
*/



struct person {
	int age;
	std::string name;
	void printTest()
	{
		cout << "\n" << age << " + " << name << "\n";
	}
	void printTest2(int p2)
	{
		cout << "\n" << age+p2 << " = " << name << "\n";
	}
};

struct person_filter_func : public std::binary_function<person, std::string, bool>
{
	bool operator()(const person& p, const std::string& key) const {
		return (p.name.find(key) != std::string::npos);
	}
};

struct person_filter_func2
{
	string key;
	person_filter_func2(string str) : key(str) {}
	bool operator()(const person& p) const {
		return (p.name.find(key) != std::string::npos);
	}

};

bool person_filter_func3(const person& p, string& key)
{
	return (p.name.find(key) != std::string::npos);
}

void disp(int val) { std::cout << val << std::endl; }
void disp_v(const person p) { std::cout << p.age << "," << p.name << std::endl; }

void outOfMem() {
	std::cout << "Unable to alloc memory";
	std::abort();
}

int main11()
{
	{
		//long long int along = 9000000000L;
		//std::set_new_handler(outOfMem);
		//int *p = new int[along];
		//delete[]p;

		std::shared_ptr<ptr> p1(new ptr(), mem_fn(&ptr::release));
		//auto p2(p1);
		auto p3 = std::make_shared<ptr> (ptr());
		

	}
	//使用 std::less 仿函数
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	std::vector<int> vec;
	
	std::copy_if(std::begin(arr), std::end(arr), std::back_inserter(vec), std::bind1st(std::less<int>(), 6)); //将6 绑定为第一个参数，即 6 < value
	std::for_each(vec.begin(), vec.end(), disp);  // 7 8 9

	vec.clear();
	std::copy_if(std::begin(arr), std::end(arr), std::back_inserter(vec), std::bind2nd(std::less<int>(), 6)); //将6 绑定为第二个参数，即 value < 6
	std::for_each(vec.begin(), vec.end(), disp); //1 2 3 4 5


	//使用自定义的仿函数
	std::vector<person> vecP;
	person p1 = { 1,"jack" }; vecP.push_back(p1);
	person p2 = { 2,"rose" }; vecP.push_back(p2);
	person p3 = { 3,"jane" }; vecP.push_back(p3);
	
	
	function<void(person,int)> ffp = &person::printTest2;
	ffp(p2, 12);
	auto fperson = std::bind(&person::printTest2, placeholders::_1, 11);
	fperson(&p1);

	//age;store a call to a data member accessor
	function<int(const person&)> fage = &person::age;
	cout << fage(p2) << endl;

	std::for_each(vecP.begin(), vecP.end(),bind(&person::printTest2, std::placeholders::_1, 10));
	std::for_each(vecP.begin(), vecP.end(), std::mem_fn(&person::printTest));

	auto fx = [](const person& p) {return (p.name.find("se") != std::string::npos); };
	function<bool(const person&)> fx3 = std::bind(person_filter_func3, std::placeholders::_1, string("se"));
	std::vector<person> vecRet;
	//std::copy_if(vecP.begin(), vecP.end(), std::back_inserter(vecRet), std::bind2nd(person_filter_func(), "ja"));  //将包含关键字"ja"的person，复制到vecRet容器中
	//std::copy_if(vecP.begin(), vecP.end(), std::back_inserter(vecRet), person_filter_func2("ja"));  //将包含关键字"ja"的person，复制到vecRet容器中
	//std::copy_if(vecP.begin(), vecP.end(), std::back_inserter(vecRet), [](const person& p) {return (p.name.find("ja") != std::string::npos); });  //将包含关键字"ja"的person，复制到vecRet容器中
	//std::copy_if(vecP.begin(), vecP.end(), std::back_inserter(vecRet), fx);  //将包含关键字"ja"的person，复制到vecRet容器中
	std::copy_if(vecP.begin(), vecP.end(), std::back_inserter(vecRet), fx3);  //将包含关键字"ja"的person，复制到vecRet容器中
	std::for_each(vecRet.begin(), vecRet.end(), disp_v);//1, jack  3, jane
	return 0;
}


std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
	}
	return str;
}

void some_func() {
	std::string s = "example string";
	std::replace(s.begin(), s.end(), 'x', 'y'); // replace all 'x' to 'y'

	std::string str1 = "Text with some   spaces";
	str1.erase(std::remove(str1.begin(), str1.end(), ' '),
		str1.end());
	std::cout << str1 << '\n';

	std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
	str2.erase(std::remove_if(str2.begin(),
		str2.end(),
		[](unsigned char x) {return std::isspace(x); }),
		str2.end());
	std::cout << str2 << '\n';
}