#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//继承方式
//继承的语法：class 子类：继承方式 父类

//继承一共有三种方式： 就是在继承的时候的方式不一样 
//1 公共继承
//2 保护继承
//3 私有继承

//父类中的私有的 不论以哪种继承的方式都不能访问   父类中公共的 在子类中依然是公共的
//父类中保护的属性 在子类中依然是保护的属性  父类的访问权限在子类中不变

//如果是保护继承 父类中公共权限在子类中变成了保护权限 除了私有内容访问不到 剩下的全变成了保护权限
//如果是保护继承 父类中公共权限和保护权限在子类中变成了私有权限 除了私有内容访问不到 剩下的全变成了私有权限
class base1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
//公共继承
class son1 :public base1
{
	void fun()
	{
		a = 10;//没报错 说明父类中的公共权限 在子类中仍然是公共权限
		b = 20;//没报错 父类中的保护权限成员 到子类中依然是保护权限
		//c = 30;//报错是因为 父类中的私有权限 子类中是访问不到的
	}
};
void test01()
{
	son1 s;
	s.a = 100;//不报错  因为到子类还是公共权限 公共权限的特点就是类内类外都能访问 
	//s.b = 200;//报错 因为子类继承的保护权限内容 类内可以访问 类外不能访问
}
//保护继承
class base2
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class son2 :protected base2
{
public:
	void fun()
	{
		a = 100;//父类中的公共成员 到子类中变为保护权限
		b = 100;//父类中的保护成员 到子类中变为保护权限
		//c = 100;//报错是因为 父类中的私有成员 子类访问不到
	}
};
void test02()
{
	son2 s1;
	//s1.a = 1000;//报错是因为在son2子类中是保护权限 类外访问不到
	//s1.b = 100;//报错是因为在son2子类中也是保护权限 类外访问不到
}
//私有继承
class base3
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class son3 :private base3
{
public:
	void fun()
	{
		a = 100;//父类中的公共成员 到子类中变为私有权限
		b = 100;//父类中的公共成员 到子类中变为私有权限
		//c = 100;//报错了 因为父类中私有的成员 类外访问不到
	}
};
void test03()
{
	son3 s1;
	//s1.a = 1000;//报错是因为在son2子类中是私有权限 变为私有成员 类外访问不到
	//s1.b = 1000;//报错是因为在son2子类中是私有权限 变为私有成员 类外访问不到
}
class grandson3 :public son3
{
public:
	void fun()
	{
		//a = 1000;//因为父类是私有的权限 所以这里也访问不到
		//b = 1000;//因为父类是私有的权限 所以这里也访问不到
	}
};
int main()
{
	return 0;
}



//继承
//继承是面向对象的三大特性之一
//有些类和类直接存在特殊的关系 例如 动物包括猫和狗 猫又包括很多类型 狗也包括很多类型

//在定义这些类的时候 下级别的成员除了拥有上一级的共性 还有自己的特性
//这个时候我们就可以考虑继承的特性 减少重复代码

//继承的基本语法 
//很多的网页都有共同的头部 底部 甚至公共的左侧列表 只有中心内容不一样
//接下来分别用普通写法和继承写法实现网页中的内容 体验继承的好处和意义

//继承实现页面  好处是减少重复代码量
//语法：class 子类：继承方式(public:) 父类(basepage)
//子类也称为派生类  父类也称为基类
//class basepage//公共页面类 就会写公共的头 尾 左侧
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册，搜索，，（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，商业合作，，，（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，c，c++，python，，，，，，（公共分类列表）" << endl;
//	}
//};
/////Java页面
//class java :public basepage//把这个类拿过来 就可以使用共同内容
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//
//};
////python页面
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python学科视频" << endl;
//	}
//
//};
////C++页面
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//
//};
//void test01()
//{
//	cout << "Java页面如下" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << endl;
//	cout << "python页面如下" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << endl;
//	cout << "C++页面如下" << endl;
//	cpp c;
//	c.header();
//	c.footer();
//	c.content();
//	c.left();
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}




//普通实现页面
//Java页面
//class java//发现好多都可以复制 但是如果多的话 就会很乱 所以就使用继承的方式去写
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册，搜索，，（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，商业合作，，，（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，c，c++，python，，，，，，（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频 ，MySQL数据库" << endl;
//	}
//};
////python页面 完全可以复制上面的内容
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册，搜索，，（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，商业合作，，，（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，c，c++，python，，，，，，（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "python学科视频 " << endl;
//	}
//};
////C++页面 也可以复制
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册，搜索，，（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，商业合作，，，（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，c，c++，python，，，，，，（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频 " << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java页面如下" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << endl;
//	cout << "python页面如下" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << endl;
//	cout << "C++页面如下" << endl;
//	cpp c;
//	c.header();
//	c.footer();
//	c.content();
//	c.left();
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}