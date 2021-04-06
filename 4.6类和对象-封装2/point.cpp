#define _CRT_SECURE_NO_WARNINGS 1
#include"point.h"//包含一下刚刚的头文件 

//把其它都删掉 只留下函数实现就行了
//点类
//设置X坐标 
void point:: setx(int ax)//加point::是说明这是作用在point作用域下的成员函数
{
	x = ax;
}
//获取X坐标
int getx()
{
	return x;
}
//设置X坐标 
void point:: sety(int ay)
{
	y = ay;
}
//获取X坐标
int point:: gety()
{
	return y;
}
