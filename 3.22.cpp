#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//二维数组数组名  同C语言  通过数组名可以查看占的内存空间  获取首元素的地址
int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	cout << "二维数组所占的空间大小为 " << sizeof(arr) << endl;
	&arr;//这里是第一行 第一个元素的地址
	arr[1][0];//这里是第二行第一个元素的地址
	cout << "行数 " << sizeof(arr) / sizeof(arr[0]) << endl;//获取行数
	cout << "列数 " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//获取列数
	return 0;
}

//二维数组 同C语言  数组名[行数][列数]  行数可以省略 列数不可以
//int main()
//{
//	int arr[2][3];//两行三列的数组1
//	arr[0][0] = 1;//赋值操作 也能这样赋值 int arr[2][3]={{1,2,3},{4,5,6}};
//	arr[0][1] = 2; 
//	arr[0][2] = 3;
//	arr[1][0] = 4;  
//	arr[1][1] = 5;
//	arr[1][2] = 6;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//冒泡排序  
//int main()//进行排序 使最后从小到大排序
//{
//	int arr[] = { 2, 5, 9, 8, 1, 6, 3, 7, 4, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)//排序有sz-1轮
//	{
//		int j = 0;
//		for (j = 0; j < sz - i -1; j++)//内部排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

//将数组元素逆置  就是前后交换  12345  变成54321
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//	for (a = 0; a < 5; a++)
//	{
//		cout << arr[a] << endl;
//	}
//	return 0;
//}

//int main()//给五只小猪称体重  打印最重的一只在屏幕上面
//{
//	int arr[5] = { 110,123,46,234,575 };//五个猪的体重
//	int max = 0;//先把最大值赋为0，然后再一个一个排序
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{	
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}