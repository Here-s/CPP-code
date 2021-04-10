#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<iostream>


//成员函数做友元
class building;//因为是顺序调用的方式 所以要在这里声明一下class building 不然检测不到会报错
class good
{
public:
	good();
	void visit();//让visit函数可以访问building中的私有成员
	void visit2();//让visit2函数不可以访问building中的私有成员
	building* build;
};
class building
{
	//告诉编译器 good类下的visit成员函数 作为本类的好朋友 可以访问私有成员
public:
	friend void good::visit();
public:
	building();
public:
	string sittingroom;//客厅
private:
	string bedroom;//卧室
};

//类外实现成员函数
building::building()//building作用域下的函数
{
	sittingroom = "客厅";
	bedroom="卧室";
}
good::good()
{
	build = new building;
}
void good::visit()
{
	cout << build->sittingroom << endl;
	cout << build->bedroom << endl;
}
void good::visit2()
{
	cout << build->sittingroom << endl;
}
void test01()
{
	good g;
	g.visit();
	g.visit2();
}
int main()
{
	test01();
	return 0;
}


//类做友元
//class building
//{
//public:
//	friend class good;
//public:
//	building();
//public:
//	string sittingroom;//客厅
//private:
//	string bedroom;//卧室
//};
//
//class good
//{
//public:
//	good();
//	void visit();//参观函数访问building中的属性
//	building* build;//在前面创建一个类building
//};
////类外写成员函数
//building::building()//building 作用域下的函数
//{
//	sittingroom = "客厅";
//	bedroom = "卧室";
//}
//good::good()//good作用域下的函数
//{
//	build = new building;
//}
//void good::visit()
//{
//	cout << "正在访问" << build->sittingroom << endl;
//	cout << "正在访问" << build->bedroom << endl;//再class building里面加一个 friend class good; 就可以访问私有成员了
//
//}
//void test01()
//{
//	good g;
//	g.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//生活中你的家里有客厅（public） 有你的卧室（private)
//客厅里所有的客人都可以进去，但你的卧室是私有的，也就是说只有你能进去
//但是你的卧室你可以允许你的好闺蜜进去

//在程序里 有些私有属性也想让类外特殊的一些函数或者类进行访问 就需要用到友元的技术

//友元的目的就是让一个函数或者类 访问另一个类中的私有成员

//友元的关键字是 friend

//友元的三种实现
//1 全局函数做友元
//2 类和友元
//3 成员函数做友元

//全局函数做友元
//class building//建筑物类
//{
//	//good是building的好朋友 可以访问building中的私有属性
//	friend void good(building* build);
//public:
//	building()
//	{
//		sittingroom = "客厅";
//		bedroom = "卧室";
//	}
//public:
//	string sittingroom;//客厅
//
//private:
//	string bedroom;//卧室
//
//
//};
////全局函数：可以访问私有的
//void good(building* build)
//{
//	cout << build->sittingroom << endl;//客厅是公共属性 在类外也可以访问到
//	cout << build->bedroom << endl;//报错 因为私有属性 是不能在类外访问的
//}
//void test01()
//{
//	building build;
//	good( &build);
//}
//int main()
//{
//	test01();
//	return 0;
//}