#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//空指针和野指针
//空指针  指针变量指向内存中编号为0的空间  用于初始化指针变量  空指针指向的内存不可以被访问
int main()
{
	int* p = NULL;//空指针
	return 0;
}

//指针所占的内存空间  在32位操作平台上面都是占用4个字节 64位是8个字节
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	cout << sizeof(p) << endl;
//	//float double  之类的都是4 因为是32位平台
//	return 0;
//}

//指针 间接访问地址 同C语言 传的时候传的是首地址
//指针定义的语法：数据类型*指针变量名
//int main()
//{
//	int a = 10;
//	int* p;
//	p = &a;
//	cout << p << endl;
//	*p=1000;//指针解引用  找到指针指向内存的地址 也就是找到数据
//	cout << *p << endl;
//	return 0;
//}
//函数的分文件编写  当代码多的时候就这样写  同C语言   和三子棋那样实现 另外创建一个.h的头文件和.cpp的源文件
//头文件写函数声明  源文件写函数的定义 
