#include<iostream>
using namespace std;


//菱形继承
//概念
//   两个派生类继承同一个基类
//   又有某个类同时继承着两个派生类
//   这种继承称为菱形继承 或者钻石继承
//
//典型的菱形继承案例
//动物 由羊  驼  继承  羊   驼 又可由羊驼继承
//
//菱形继承问题
//1 羊继承了动物的数据 驼同样继承了动物的数据 当羊驼使用数据时 就会产生二义性
//2 羊驼继承自动物的数据继承了两份 其实我们应该清楚 这份数据 我们只要一份进行了

//动物类
class anima
{
public:
	int age;
};
//利用虚继承 可以解决菱形继承的问题 就是加上virtual anima类就被叫做虚基类
// 底层是指针
// 
//羊类
class sheep:virtual public anima{};
//驼类
class tuo:virtual public anima{};
//羊驼类
class sheeptuo :public sheep, public tuo{};
void test01()
{
	sheeptuo s1;
	//s1.age = 18;//报错 是因为不知道指向羊还是驼 所以加个作用域
	s1.sheep::age = 18;
	//加上虚继承之后 这里的数据就只有一个了 后面的是28 所以结果都是28
	s1.tuo::age = 28;
	//当出现菱形继承的时候 两个父类拥有相同数据，需要加以作用域区分
	cout << "sheep age " << s1.sheep::age << endl;
	cout << "tuo age " << s1.tuo::age << endl;
	cout << s1.age << endl;//这样就不会报错了 因为只有一个 不会发生指向不明确的问题
	//这份数据我们知道有一份就行了 菱形继承导致数据有两份 资源浪费
}
int main()
{
	test01();
	return 0;
}



//多继承语法

//C++允许一个类继承多个类
//语法：class　子类：继承方式　父类１，继承方式　父类２．．．．
//多继承可能会引发父类中有同名成员出现　需要加作用域区分
//
//C++实际研发中不建议使用多继承
//class base1
//{
//public:
//	base1()
//	{
//		a = 100;
//	}
//	int a;
//};
//class base2
//{
//public:
//	base2()
//	{
//		a = 200;
//	}
//	int a;
//};
////子类
////子类  需要继承base1和base2
////语法 class 子类：继承方式 父类1，继承方式 父类2.....
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		c = 300;
//		d = 400;
//	}
//	int c;
//	int d;
//};
//void test01()
//{
//	son s;
//	cout << "sizeof son" << sizeof(s) << endl;//答案是16 因为把父类的继承了
//	cout << s.base1::a << endl;//假设两个父类中都是a 那么就会报错 因为不知道按照那个a算 需要加作用域区分
//	cout << s.base2::a << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//继承同名静态成员处理方式
//静态成员和非静态成员出现同名 处理方式一致
//   1 访问子类同名成员 直接访问即可
//   2 访问父类同名成员 需要加作用域
//class base
//{
//public:
//	static int a;//静态成员变量 类内声明 类外初始化
//	static void fun()
//	{
//		cout << "base-static 成员函数的调用" << endl;
//	}
//	static void fun(int a)
//	{
//		cout << "son-static 重载成员函数的调用" << endl;
//	}
//
//};
//int base::a = 100;//初始化
//
//class son :public base
//{
//public:
//	static int a;
//	static void fun()
//	{
//		cout << "son-static 成员函数的调用" << endl;
//	}
//
//};
//int son::a = 200;
////同名静态成员属性
//void test01()
//{
//	//通过对象访问
//	son s;
//	cout << "son下的a " << s.a << endl;//访问的是200 因为直接访问 访问的是子类
//	cout << "base下的a " << s.base::a << endl;//访问父类 要加作用域
//
//	//通过类名访问
//	cout << "通过类名来访问" << endl;
//	cout << "son下的a  " << son::a << endl;//通过类名访问son作用域下的a
//	cout << "base下的a  " << base::a << endl;//这也是通过父类作用域直接拿到这个数据
//	//第一个：：代表通过类名方式访问  第二个：：代表访问父类作用域下
//	cout << "base下的a  " << son::base::a << endl;//通过子类对象访问到父类对象中的a数据 并且按照类名的方式访问
//}
////同名静态成员函数
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	son s;
//	s.fun();//直接调用 调用的是自己
//	s.base::fun();//加作用域 就是调用父类的
//	//通过类名访问
//	cout << "通过类名访问" << endl;
//	son::fun();
//	son::base::fun();//通过子类访问到父类下的fun
//	son::base::fun(100);//访问父类中的重载函数
//}
////如果子类中出现了和父类重名的静态成员函数 子类的同名成员函数会隐藏掉父类中所有同名成员函数 重载也会隐藏
////如果想访问 需要加作用域
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//继承中同名成员处理方式
//问题：当子类和父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据
//  访问子类同名成员 直接访问进行了
//  访问父类同名成员 需要加作用域
//class base
//{
//public:
//	base()
//	{
//		a = 100;
//	}
//	void fun()
//	{
//		cout << "base-作用域下的函数调用" << endl;
//	}
//	void fun(int a)//函数重载
//	{
//		cout << "base-作用域下的重载函数调用" << endl;
//	}
//
//	int a;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		a = 200;
//	}
//	void fun()
//	{
//		cout << "son-作用域下的函数调用" << endl;
//	}
//
//	int a;
//};
////同名成员属性处理
//void test01()
//{
//	son s;
//	cout << "son的a  " << s.a << endl;//出现重名的话 直接访问 访问的就是子类的
//	cout << "base的a  " << s.base::a << endl;//在s.后面加一个base的作用域就行了
//}
////同名成员函数处理
//void test02()
//{
//	son s;
//	s.fun();//直接调用 调用的是子类中的同名成员
//	//如何调用父类中同名成员函数  加作用域
//	s.base::fun();
//
//	//如果子类中出现了和父类重名的成员函数 子类的同名成员会隐藏掉父类中所有同名成员函数 重载也会隐藏
//	//如果想访问到父类中被隐藏的成员函数 需要加作用域
//	s.base::fun(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//继承中的构造和析构顺序

//子类继承父类之后 当创建子类对象 也会调用父类的构造函数
//父类和子类的构造和析构顺序是 先有父类 后有子类的构造函数 先有子类 后有父类的析构函数
//class base
//{
//public:
//	base()
//	{
//		cout << "base的构造函数" << endl;
//	}
//	~base()
//	{
//		cout << "base的析构函数" << endl;
//	}
//};
//class son:public base
//{
//public:
//	son()
//	{
//		cout << "son的构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son的析构函数" << endl;
//	}
//
//};
//void test01()
//{
//	//base b;//会调用构造和析构函数 因为放在栈上
//	son s;//子类对象做一个继承的操作 所以会把父类中的对象全都拿走 所以也会创建一个父类对象 也会有构造和析构
//}
//int main()
//{
//	test01();
//	return 0;
//}