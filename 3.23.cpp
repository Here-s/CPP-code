#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//函数声明 建议将函数写在前面 这样就不用声明了

//函数的常见样式  1 有参无返(会传参数，但是不需要返回)  2 有参无返  3 无参有反  4 有参有反
int test4(int x)
{
	return 167;
}
int test3()
{
	return 100;
}
void test2(int a)
{
	a++;
	cout << a << endl;
}
void test()
{
	cout << "样式一" << endl;
}
int main()
{
	test();//样式1 
	int a = 0;
	test2(a);
	int b = 0;
	b=test3();
	cout << b << endl;
	int c = 134;
	int d = 0;
	d=test4(c);
	cout << d << endl;
	return 0;
}

//函数   1 定义 2 函数名 3 返回值 4 函数体语句 5 return表达式
//int Add(int x, int y)//这里的x y是形参 是形式上的一个参数  调用的时候实参的值会传给形参
////形参改变的时候不影响实参是数值  也就是形参与实参互不影响 
//{
//	return x + y;
//}
//int main()//实现一个加法 传入两个整型 计算和 然后返回
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	cin >> a;
//	cin >> b;
//	sum=Add(a, b);//函数调用 将返回值传给sum
//	cout << sum << endl;
//	return 0;
//}

//二维数组的应用 
//int main()//三位同学   张三 语文100 数学100 英语100   李四 语文90 数学50 英语100
////王五 语文 60 数学70 英语80   输出三位同学的总成绩
//{
//	int arr[3][3] = { 100,100,100,90,50,100,60,70,80 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{	
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}