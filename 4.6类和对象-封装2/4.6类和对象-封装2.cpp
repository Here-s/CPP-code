#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//包含头文件 使得在主文件中可以使用point 和circle两个类




//这样写的话，代码太长了 所以可以把类写在另外的一个文件当中 这样就能缩短代码量
//将不同的类拆分为不同的文件 拆分方式为 在头文件中写声明 在另一个源文件中写代码

//练习2：点和圆的关系
//设计一个圆类（circle） 和一个点类（point），计算圆和点的关系。
//会有三种关系：园内 圆上 园外  通过半径来判断
//点到圆心的距离：根号下面 (x1-x2)^2+(y1-y2)^2  和半径对比 来判断三种方式
//为了避免麻烦 所以就让左边和右边都取平方就行了
//圆要设计圆心和半径
//点要设计坐标

////点类
//class point
//{
//	//设置x坐标 y坐标
//public:
//	//设置X坐标 
//	void setx(int ax)
//	{
//		x = ax;
//	}
//	//获取X坐标
//	int getx()
//	{
//		return x;
//	}
//	//设置X坐标 
//	void sety(int ay)
//	{
//		y = ay;
//	}
//	//获取X坐标
//	int gety()
//	{
//		return y;
//	}
//private:
//	int x;
//	int y;
//};
////圆类
//class circle
//{
//public:
//	//设置半径
//	void setr(int ar)
//	{
//		r = ar;
//	}
//	//获取半径
//	int getr()
//	{
//		return r;
//	}
//	//设置圆心
//	void setcenter(point acenter)
//	{
//		center = acenter;
//	}
//	//获取圆心
//	point getcenter()
//	{
//		return center;
//	}
//private:
//	int r;//半径
//	//在一个类中 可以让另一个类 作为本类中的成员  point是另一个类 可以作为本类中的成员
//	point center;//代表圆心
//};
//判断点和圆关系
void judgement(circle &c,point &p)
{
	//计算两点之间距离的平方
	int distance=
	(c.getcenter().getx() - p.getx())* (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//计算半径的平方
	int rdistance = c.getr() * c.getr();
	//判断关系
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()//
{
	//创建圆
	circle c;
	c.setr(10);
	point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);//把center传进去 就相当于是把两个点的坐标传进去
	//创建点
	point p;
	p.setx(10);
	p.sety(10);//手动设置的两个点都在圆上
	//判断这俩的关系
	judgement(c,p);//把圆和点传进去 进行判断
	return 0;
}

//设计立方体类（cube）
//设计立方体类属性
//求出立方体的表面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等
//class cube
//{
//	//行为  设置获取长宽高  获取立方体的面积  获取立方体的体积  尽量放在公共
//public:
//	//设置长
//	void setl(int al)
//	{
//		l = al;
//	}
//	//获取长
//	int getl()
//	{
//		return l;
//	}
//	//设置宽
//	void setw(int aw)
//	{
//		w = aw;
//	}
//	//获取宽
//	int getw()
//	{
//		return w;
//	}
//	//设置高
//	void seth(int ah)
//	{
//		h = ah;
//	}
//	//获取高
//	int geth()
//	{
//		return h;
//	}
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * l * w + 2 * w * h + 2 * l * h;
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return l * w * h;
//	}
//	//利用成员函数 判读两个立方体是否相等
//bool issamebyclass(cube &c)//class里面的就是成员  函数参数应该传一个  应该用已知的对象来调用这个函数  然后再传进来一个未知的立方体
//{
//	if (l == c.getl() && w == c.getw() && h == c.geth())//&&并且的意思
//	{
//		return true;
//	}
//	return false;
//}
//	//属性  长宽高  尽量放在私有 
//private:
//	int l;//长
//	int w;//宽
//	int h;//高
//};
////利用全局函数判断 两个立方体是否相等
//bool issame(cube &c1,cube &c2)//判断是否相等
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())//&&并且的意思
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	//创建第一个立方体
//	cube c1;
//	c1.setl(10);
//	c1.seth(20);
//	c1.setw(30);
//	cout << "c1的面积是：" << c1.calculateS() << endl;
//	cout << "c1的体积是：" << c1.calculateV() << endl;
//	//创建第二个立方体  让c1和c2完全相等 这样就能用全局函数和成员函数判断两个立方体是否相等
//	cube c2;
//	c2.setl(10);
//	c2.seth(20);
//	c2.setw(30);
//	cout << "c2的面积是：" << c2.calculateS() << endl;
//	cout << "c2的体积是：" << c2.calculateV() << endl;
//	//利用全局函数判断
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//	//利用成员函数判断
//	ret = c1.issamebyclass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断  c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断  c1和c2是不相等的" << endl;
//	}
//	return 0;
//}