#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//一维数组数组名  同C语言
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	sizeof(arr);//统计数组的长度  求的是整个数组 如果arr后面加上方括号 并且里面有下标 就是算某个元素的大小
	cout << sizeof(arr) << endl;
	cout << arr << endl;//这里是打印地址 16进制
	return 0;
}

//数组  放在一块连续的内存空间中  同C语言  这里是下标
//int main()
//{
//	//int arr[5] = { 0 };
//	//arr[0] = 1;
//	int a = 0;
//	int arr[3] = { 1,2,3 };//也可以在方括号里面啥也不写
//	for (a = 0; a < 3; a++)
//	{
//		cout << arr[a] << endl;
//	}
//	return 0;
//}

//goto 语句  无条件跳转语句  如C语言当中的关机程序
//int main()
//{
//	cout << "a" << endl;
//	cout << "b" << endl;
//	goto object;
//	cout << "c" << endl;
//	cout << "d" << endl;
//	cout << "e" << endl;
//	object:
//	cout << "f" << endl;
//	return 0;
//}

// continue 语句  跳过本次循环中未执行的语句 继续执行下一次循环
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 10; a++)
//	{
//		cout <<a;
//		if (a == 5)
//		{
//			continue;//跳过下面的一行代码 但是不会跳出循环
//		}
//		cout << a << endl;
//	}
//	return 0;
//}

//break 跳出选择或者循环结构
//1 在switch中 终止case 跳出switch 
//2 跳出循环
//3 嵌套语句 跳出最近的内层循环
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 10; a++)
//	{
//		int b = 0;
//		for (b = 0; b <= 10; b++)
//		{	
//			if (b == 5)
//			{
//				break;
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100; a++)
//	{
//		cout << a << endl;
//		if (a == 50)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int main()//switch
//{
//	int a = 0;
//	cin >> a;
//	switch (a)
//	{
//	case 0:
//		cout << "退出" << endl;
//		break;
//	case 1:
//		cout << "1" << endl;
//		break;
//	case 2:
//		cout << "2" << endl;
//		break;
//	default:
//		cout << "结束" << endl;
//		break;
//	}
//	return 0;
//}