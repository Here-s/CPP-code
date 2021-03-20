#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;





int main()//打印乘法口诀表
{
	int a = 1;
	int c = 0;
	cin >> c;
	for (a = 1; a <= c; a++)
	{
		int b = 1;
		for (b = 1; b <= a; b++)//因为每个循环都是b在变大 而for之后才是换行 所以是b在前面
		{
			cout << b << "*" << a << "=" << a * b << "\t";
		}
		cout << endl;
	}
	return 0;
}

//打印之前扫雷的棋盘 10*10
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			cout << "* ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main()//优化之后的 代码减少 并且不会有重复的
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 7 || a / 10 == 7 || a % 7 == 0)//||逻辑或的意思
//		{
//			cout << a << endl;
//		}
//	}
//	return 0;
//}

//for循环 与C语言一样
//int main()//1-100 数字个位或十位等于7 或者是7的整数倍 就打印出来
////所以先输出1-100的数字 然后再找出特殊的
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if(a % 10 == 7)//算的是个位
//		{
//			cout << a << endl;
//		}
//		if (a / 10 == 7)
//		{
//			cout << a << endl;
//		}
//		if (a % 7 == 0)
//		{
//			cout << a << endl;
//		}//可以优化  优化如上
//	}
//	return 0;
//}