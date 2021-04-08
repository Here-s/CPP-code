#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//静态成员
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//静态成员分为
//
//  静态成员变量
//	所以对象共享同一份数据
//	在编译阶段分配内存
//	类内声明 类外初始化

//  静态成员函数
//	所有对象共享同一个函数
//	静态成员函数只能访问静态成员变量
class person
{
public:
	//静态成员函数
	static void fun()
	{
		a = 100;//静态成员函数可以访问静态成员变量
		//b = 200;//会报错 因为不是静态成员变量 静态成员函数不可以访问非静态成员变量
		//因为在这个函数体内 体现不出b这个成员 无法区分到底是哪个对象的b
		//静态成员变量是放在全局区的 非静态成员变量是放在堆区的 不能访问堆区
		cout << "static void fun 的调用" << endl;
	}
	static int a;//静态成员变量 特点：类内声明 类外初始化
	int b;//非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void fun2()
	{
		cout << "static void fun2 的调用" << endl;
	}
};
int person::a = 10;
void test01()
{
	//1 通过对象访问
	person p;
	p.fun();
	//2 通过类名访问
	person::fun();//这行的意思是 person作用域下的fun函数
	//person::fun2();//不能调用这个函数 因为是私有的作用域   类外访问不到私有的静态成员函数
}
int main()
{
	test01();
	return 0;
}


//类对象作为类成员
//C++类中成员可以是另外一个类的对象，我们称该成员为 对象成员
//class A{};
//class B//B中有对象A作为成员，A为对象成员  当创建B对象时 A与B的构造和析构的顺序是  先构造A
//就像是 得现有胳膊 之类的 才能有身体
//{
//	A a;//A的对象a可以是B的成员
//};

//手机类
//class Phone
//{
//public:
//	Phone(string apname)
//	{
//		pname = apname;
//		cout << "phone的构造函数调用" << endl;
//	}
//	~Phone()
//	{
//		cout << "phone的析构函数的调用" << endl;
//	}
//	string pname;
//};
////人类
//class person
//{
//public:
//	//Phone phone=pname 隐式转换法
//	person(string aname, string pname):name(aname),phone(pname)
//	{
//		cout << "person的构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "person的析构函数的调用" << endl;
//	}
//	//姓名
//	string name;
//	//手机
//	Phone phone;//将手机也定义成一个类
//	
//};
////当其他类对象作为本类成员，构造时候先构造对象，再构造自身
////析构顺序是 先析构自身 再析构对象  和构造是相反的
//void test01()
//{
//	person p("张三 ", "8848钛金手机");
//	cout << p.name << p.phone.pname << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


//初始化列表
//作用：C++提供了初始化列表语法，用来初始化属性
//语法：构造函数()：属性1(值1),属性2(值2)…{}

//class person
//{
//public:	
//	//传统的初始化操作
//	//person(int aa, int ab, int ac)
//	//{
//	//	a = aa;
//	//	b = ab;
//	//	c = ac;
//	//}
//
//	//初始化列表初始化属性
//	person(int aa,int ab,int ac) :a(aa), b(ab), c(ac)//创建 并且初始化  要注意冒号 冒号后面写属性 值
//	{
//
//	}
//	int a;
//	int b;
//	int c;
//};
//void test01()
//{
//	//person p(10, 20, 30);
//	person p(30, 20, 10);//创建这个对象的同时 就进行初始化了
//	cout << p.a << p.b << p.c << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}