#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//const修饰成员函数 

//常函数  使其变为只读状态
//1 成员函数后加const后我们称这个函数为常函数
//2 常函数内不可以修改成员属性
//3 成员属性声明时加关键字mutable后 在常函数中依然可以修改
//
//常对象
//1 声明对象前加const称该对象为常对象
//2 常对象只能调用常函数

//常函数
class person
{
public:
	//this指针的本质是一个指针常量 指针的指向是不可以修改的 
	//const person* const this;这样就都不可以修改了加cosnt 修饰的是this指针，让指针指向的值不可以修改
	//在成员函数后面
	void showperson()const//const加到这里 就相当于声明这行的第一个const
	{
		//在函数体内部 不管传还是不传 这个函数体内部都有一个this指针 隐含在函数体内部都有一个this指针
		//a = 100;//可以修改 当在函数体后面加一个const 就不能修改了 相当于有个this指针在修饰着这个a 指向的是p
		//this = NULL;//报错是因为 this指向p了 所以就不能指向别的地方了 也就是this指针不可以修改指针指向
		//但是this指针指向的值是可以修改的 如果不加const就能修改代码
		b = 100;
	}

	void fun()
	{

	}
	int a;
	mutable int b;//特殊变量 即使在常函数中也可以修改这个值  加了mutable之后就相当于声明了 就可以修改了
};
void test01()
{
	person p;
	p.showperson();//调用的时候 this指向的是p
}

//常对象
void test02()
{
	const person p;//在对象前加上const 变为常对象
	//p.a = 100;//会报错 因为前面加了const 所以这个对象的属性是不可以被修改的
	p.b = 100;//不会报错 因为b前面加了mutable
	//b是特殊值 在常对象下也可以修改 只要加了mutable就能修改

	//常对象只能调用常函数
	p.showperson();
	//p.fun();//报错 因为fun是普通函数 可以修改属性 但是常对象本身是不允许修改属性的 如果能调用 就相当于
	//相当于侧面把属性修改了 这样是不允许的 所以会报错 常对象不能调用普通的成员函数
}
int main()
{
	test01();
	return 0;
}


//空指针访问成员函数
//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//	如果用到this指针 需要加以判断保证代码的健壮性

//class person
//{
//public:
//	void showclassname()
//	{
//		cout << "this is person class" << endl;
//	}
//
//	void showpersonage()
//	{
//		if (this == NULL)
//		{
//			return;//这样的话 就不会蹦了 提高代码的健壮性
//		}
//		cout << "age  " << age << endl;//代码崩溃了 因为age前面默认加了this指针  但因为是空指针 所以this不是实体 指向的是空的
//		//指向的是空的值 一个空的值 还要访问里面的属性 不可能 所以代码崩溃了从空的对象里面访问年龄的值 根本不可能 所以代码崩溃了 
//	}
//	int age;
//};
//void test01()
//{
//	person* p = NULL;//指向空指针
//	p->showclassname();
//	p->showpersonage();//代码崩溃了 会报错
//
//}
//int main()
//{
//	test01();
//	return 0;
//}