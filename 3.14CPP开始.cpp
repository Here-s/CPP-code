#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;//命名空间


//关键字：C++中保留的单词（标识符）
//不要用关键字给变量或者常量起名称  例如  int int=10;  因为int是一个数据类型 已经有了别的含义 当又变成变量名的时候 就会报错 所以关键字不能做变量名
//所以写的时候一定不要把关键字当作变量名

//常量：用于记录程序中不可更改的数据
//1 #define 定义一个宏常量 定义的常量的值不可以改变 通常在文件上方定义     2 const 定义为常量 不可更改 C语言中讲过

//#define Day 7 //定义Day为7
//int main()
//{
//	//Day = 14;//这里不能改 因为#define使Day不能修改的值
//	cout << "一周有：" << Day << "天" << endl;
//	const int month = 12;//const使month不能修改
//	cout << "一年有:" << month << "个月" << endl;
//	return 0;
//}

//变量：给一段指定的空间起名，方便操作这段内容  也就是定义一个局部变量
//变量存在是方便我们管理内存空间 通过地址 可以管理 可以拿变量a来代替地址
//变量创建的语法：数据类型 变量名=变量初始值；     例如： int a=10;
//int main()
//{
//	int a = 10;
//	cout << "a=" << a << endl;//打印出a的值
//	return 0;
//}

//int main()//程序的入口，主函数，只有一个，同C语言
//{
//	cout << "byte dance" << endl;//endl 结束换行的意思  cout是打印的意思  这里是在屏幕上输出 byte dance
//	return 0;
//}