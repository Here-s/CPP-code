#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
//圆类
//设置半径
void circle:: setr(int ar)//加circle::是说明这是作用在circle作用域下的成员函数
{
	r = ar;
}
//获取半径
int circle:: getr()
{
	return r;
}
//设置圆心
void circle:: setcenter(point acenter)
{
	center = acenter;
}
//获取圆心
point circle:: getcenter()
{
	return center;
}
