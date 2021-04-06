#pragma once
#include<iostream>
using namespace std;
#include"point.h"//因为在这个头文件中运用了point类 所以再引一次头文件 这样就不会point报错了
//圆类
class circle
{
public:
	//设置半径
	void setr(int ar);

	//获取半径
	int getr();

	//设置圆心
	void setcenter(point acenter);

	//获取圆心
	point getcenter();

private:
	int r;//半径
	//在一个类中 可以让另一个类 作为本类中的成员  point是另一个类 可以作为本类中的成员
	point center;//代表圆心
};

