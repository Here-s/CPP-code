#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<ctime>
using namespace std;




//猜数字游戏 通过cpp实现
void menu()
{
	cout << "猜数字游戏，开始请选择1，退出请选择0"<<endl;
}

void game()
{
	int d = 0;
	d = rand() % 100;
	int b = 0;
		cout << "游戏开始，请猜数字" << endl;
	while (1)
	{

		scanf("%d", &b);
		if (d == b)
		{
			cout << "恭喜你，猜对了" << endl;
			break;
		}
		else if (d > b)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜大了" << endl;
		}
	}
}
int main()
{//经测试 发现每次随机的数字一模一样  所以应该修改 使每次都不一样 所以使用时间来生成随机数 
	srand((unsigned int)time(NULL));//引头文件#include<ctime>
	int a = 0;
	do
	{
		menu();
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			cout << "游戏开始" << endl;
			game();
			break;
		case 0:
			cout << "退出游戏" << endl;
			break;
		default:
			cout << "选择错误，重新选择" << endl;
			break;
		}
	} while (a);//因为是0的话 为假 就退出循环
	return 0;
}

//do while语句 先执行一次循环语句 再判断循环条件 要是满足就继续循环，否则退出循环
//int main()
//{
//	int a = 0;
//	do
//	{
//		cout << a << endl;
//		a++;
//	} while (a < 1000);
	//do
	//{
	//	cin >> a;
	//	cout << a << endl;
	//} while (a);//当等于0的时候视为假 跳出循环
//	return 0;
//}

//while 循环 只要判断为真 就会一直执行 为假 就跳出循环
//int main()//在屏幕上打印0-9的数字
//{
//	int a = 0;
//	while (a <= 8)//因为是下标 所以是<=8
//	{
//		a++;
//		cout << a << endl;
//	}
//	return 0;
//}

//switch语句 同C语言   只能是整型或字符 不能是区间
//switch(表达式)得到的结果为1 就执行case1  为2 就执行case2  还有default 就是之前的案例都没出现 就执行这个  break 跳出语句
//int main()
//{
//	int a = 0;
//	cout << "请给电影评分" << endl;
//	cin >> a;
//	switch (a)
//	{
//	case 10:
//		cout << "您对此电影很满意满意" << endl;
//		break;//跳出语句
//	case 9:
//		cout << "您对此电影很满意满意" << endl;
//		break;
//	default:
//		cout << "感谢评分" << endl;
//		break;
//	}
//	return 0;
//}
