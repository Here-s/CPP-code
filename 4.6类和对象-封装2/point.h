#pragma once //这是为了防止头文件重复包含
#include<iostream>
using namespace std;

//头文件里面只需要声明就行了 把实现都删掉 在声明的时候加个分号补全
//点类
class point
{
	//设置x坐标 y坐标
public:
	//设置X坐标 
	void setx(int ax);

	//获取X坐标
	int getx();

	//设置X坐标 
	void sety(int ay);

	//获取X坐标
	int gety();

private:
	//这里是变量的声明
	int x;
	int y;
};
