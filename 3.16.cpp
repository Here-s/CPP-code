#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//大多同C语言


//逻辑运算符   同C语言    只要不是0 都为真 
//运算符 ！ 非    也就是取反的意思
//运算符 && 与    a&&b  a b两个都为真 结果为真 1  一个为假  结果为假 0
//运算符 || 或    a||b  a b有一个为真 结果为真 1  两个都是假  结果为假 0
int main()
{
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;//再次取反 得到为真
	int b = 0;
	int c = 0;
	c = a && b;
	cout << c << endl;
	int d = 0;
	d = a || b;
	cout << d << endl;
	return 0;
}

//赋值运算符
//1  = 赋值给。。。。
//2 += 变量等于原来的值再加一个值
//3 -= 变量等于原来的值再减一个值
//4 *= 变量等于原来的值再乘一个值
//5 %= 变量等于原来的值再除一个值
//例如:
//int main()
//{
//	int a = 3;
//	a += 3;//意思是 a=a+3;//其他也类似
//	cout << a << endl;
//
//	return 0;
//}

//前置++   后置++   前置--   后置--
//int main()
//{
//	int a = 10;
//	++a;//前置++ 先++再运算
//	cout << a << endl;
//	a = 10;
//	cout << a++ << endl;//后置++ 先运算 在++     前置-- 后置--  也同理
//	cout << a << endl;
//}

//取模运算符（取余数） 例如10%3=1;  10%20=10;   取模的时候也不能是0 和除法一样  两个小数也是不能取模的 例如：
//int main()
//{
//	int a = 10;
//	double b = 4.25;
//	cout << a % b << endl;//这样已经报错了 语法错误 不能这样
//	return 0;
//}

//运算符  
//1 四则运算
//2 赋值运算符
//3 比较运算符
//4 逻辑运算符
//int main()
//{
//	//1 四则运算
//	int a = 10;
//	int b = 3;
//	cout << a + b << endl;
//	cout << a - b << endl;
//	cout << a * b << endl;
//	cout << a / b << endl;//两个整型相除 结果依然保留的是整数
//	//两个数相除 除数为0 程序会崩 所以要避免除数为0
//	return 0;
//}