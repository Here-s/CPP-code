#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//结构体  同C语言
//struct定义结构体变量
//struct Stu//里面是成员列表   这里是自定义结构类型  创建类型
//{
//	string name;
//	int age;
//	int score;
//};
struct Stu//第三种方式 顺便创建了s3结构体变量
{
	string name;
	int age;
	int score;

}s3;
int main()//定义一个结构体类型  在写的时候可以省略struct 
{
	struct Stu s1;//通过学生类型创建具体学生
	//第一种类型创建具体学生   第一种结构体
	//s1.name = "张三"; //通过一个点来访问结构体属性
	//s1.age = 18;
	//s1.score = 100;
	//cout << "姓名：" << s1.name << s1.age << s1.score << endl;
	//struct Stu s2 = { "李四",19,90 };//第二种  等于的类型
	//cout << s2.name << s2.age << s2.score << endl;
	//第三种，在创建结构体的时候顺便创建结构体变量
	s3.name = "王五";
	s3.age = 24;
	s3.score = 80;
	cout << s3.name << s3.age << s3.score << endl;
	return 0;
}

//指针 数组 函数
//void bubbleSort(int* arr,int sz)//把数组的地址传过来  用指针传的
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()//封装一个函数 利用冒泡排序 实现对整形数组的升序排序
//{
//	int arr[] = { 1,3,6,2,8,7,4,9,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr,sz);//排序完  还剩打印
//	print(arr, sz);
//	return 0;
//}