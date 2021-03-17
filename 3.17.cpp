#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//三目操作符  表达式1？表达式2；表达式3  如果表达式1的值为真 就执行表达试2 否则执行表达式3 并返回相关的结果     同C语言
int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	a > b ? cout << "as" << endl: cout << "aa" << endl;
	(a > b ? a : b) = 100;//赋值操作 赋给的是执行的表达式
	cout << "a=" << a << endl;
	return 0;
}

//给三只小猪称体重 并且输出最重的
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "最重的是a" << endl;
//		}
//		else
//		{
//			cout << "最重的是c" << endl;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			cout << "最重的是b" << endl;
//		}
//		else
//		{
//			cout << "最重的是c" << endl;
//		}
//	}
//	return 0;
//}

//int main()//if嵌套
//{
//	int line = 0;
//	cout << "请输入敲的代码行数" << endl;
//	cin >> line;
//	if (line >= 30000)
//	{
//		cout << "正在检索能进入的公司" << endl;
//		if (line >= 80000)
//		{
//			cout << "byte dance" << endl;
//		}
//		else if (line >= 50000)
//		{
//			cout << "bat offer" << endl;
//		}
//		else
//			cout << "好offer" << endl;
//	}
//	else if(line>20000)
//	{
//		cout << "继续加油" << endl;
//	}
//	else
//	{
//		printf("你废了");
//	}
//	return 0;
//}

//程序结构：顺序结构 按顺序执行   2 if判断语句   3 循环语句      同C语言
//int main()//if语句
//{//假设用户输入一个代码行数 大于30000  好offer  否则  继续加油
//	int line = 0;
//	cout << "请输入代码行数:" << endl;
//	cin >> line;
//	cout << "输入的行数是：" << line << endl;
//	if (line >= 30000)
//	{
//		cout << "好offer" << endl;
//	}
//	else if(line>20000)
//	{
//		cout << "继续加油" << endl;
//	}
//	else
//	{
//		printf("你废了");
//	}
//	return 0;
//}