#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;




//加号运算符重载
class person
{
public:
	//成员函数重载+号
	//person operator+(person& p)
	//{
	//	person tmp;
	//	tmp.a = this->a + p.a;
	//	tmp.b = this->b + p.b;
	//	return tmp;
	//}
	int a;
	int b;
};

//全局函数重载+号
person operator+(person& p1, person& p2)
{
	person tmp;
	tmp.a = p1.a + p2.a;
	tmp.b = p1.b + p2.b;
	return tmp;
}

//函数重载的版本
person operator+(person& p1, int num)
{
	person tmp;
	tmp.a = p1.a + num;
	tmp.b = p1.b + num;
	return tmp;
}
void test01()
{
	person p1;
	person p2;
	p1.a = 10;
	p1.b = 20;
	p2.a = 10;
	p2.b = 20;
	//成员函数重载本质调用：person p3=p1.operator+(p2); 简化为 person p3 = p1 + p2;
	person p3 = p1 + p2; 
	//全局函数重载本质调用
	//person p3 = operator+(p1, p2) 简化为 person p3 = p1 + p2;

	//运算符重载 也可以发生函数重载
	person p4 = p1 + 100;//相当于person+int 编译器也不知道怎么做
	cout << p3.a << endl;
	cout << p3.b << endl;
	cout << p4.a << endl;
	cout << p4.b << endl;
}
int main()
{
	test01();
	return 0;
}


//运算符重载
//运算符重载概念：对已有的运算符重新进行定义 赋予其另外一种功能 以适应不同的数据类型

//加号运算符重载
//作用：实现两个自定义数据类型相加的运算

//对于内置的数据类型 编译器知道如何进行运算 
//int a = 10;  int b = 10;  int c = a + b;  c = 20;
//class person
//{
//public:
//	int a;
//	int b;
//};

//void test01()
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 20;
//	person p2;
//	p2.a = 10;
//	p2.b = 20;
//	person p3 = p1 + p2;//报错是因为编译器不知道怎么算这样的
//}

//通过自己写成员函数，实现两个对象相加属性后返回新的对象
//person addperson(person& p)
//{
//	person tmp;
//	tmp.a = this->a + p.a;
//	tmp.b = this->b + p.b;
//	return tmp;
//}

//通过全局函数重载+   
//person operator+(person& p1, person& p2)
//{
//	person tmp;
//	tmp.a = p1.a + p2.a;
//	tmp.b = p1.a + p2.b;
//	return tmp;
//}
//person p3 = operator+(p1, p2) 简化为 person p3 = p1 + p2;

//编译器给起了一个通用名称：operator+    person p3=p1.operator+(p2). 简化为: person p3=p1+p2;
//通过成员函数重载+号
//person operator+(person& p)
//{
//	person tmp;
//	tmp.a = this->a + p.a;
//	tmp.b = this->b + p.b;
//	return tmp;
//}
//int main()
//{
//	return 0;
//}