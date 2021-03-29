#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//结构体案例  设计一个英雄结构体 包括姓名，年龄，性别   创建结构体数组 数组中存放5名英雄
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序 最终打印排序后的效果
//英雄信息
//{刘备 23 男}
//{关羽 22 男}
//{张飞 20 男}
//{赵云 21 男}
//{貂蝉 19 女}


struct hero
{
	//姓名
	string name;
	int age;
	string sex;//sex表示性别
};
void bubbleSort(struct hero arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				int tmp = 0;
				tmp = arr[j + 1].age;
				arr[j + 1].age = arr[j].age;
				arr[j].age = tmp;
			}
		}
	}
}
void print(struct hero arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i].name << arr[i].age << arr[i].sex << endl;
	}
}
int main()
{
	//创建数组存放5名英雄
	struct hero arr[5] = { {"刘备", 23, "男"},{"关羽" ,22, "男"} ,{"张飞" ,20, "男"}, {"赵云" ,21, "男"}, {"貂蝉" ,19, "女"} };
	//对数组进行冒泡排序 按照年龄进行升序排序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz);
	//排序后结果打印输出
	print(arr, sz);
	return 0;
}