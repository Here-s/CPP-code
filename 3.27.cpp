#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>



//结构体指针：通过指针访问结构体中的成员
//利用操作符->可以通过结构体访问指针结构体的属性
struct Stu
{
	string name;
	int age;
	int score;
};
int main()
{
	//创建学生的结构体变量
	struct Stu s = { "张三",18,100 };
	//通过指针指向结构体变量
	struct Stu* p = &s;//结构体是struct Stu 所以用它来当指针类型就可以了  struct可以省略
	cout << p->name << p->age << p->score << endl;
	return 0;
}

//结构体数组  将自定义的结构体放入数组中方便维护
//语法：struct 结构体名 数组名[元素个数]={ {}，{}，{}，…{} }
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()//结构体数组 先定义一个结构体 再创建结构体数组 再给结构体数组中的元素赋值 
////最后遍历结构体数组
//{
//	struct Stu arr[3] = { {"张三",18,100},{"李四",19,90},{"王五",20,80} };
//	arr[2].name = "字节";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		cout << arr[i].name   << arr[i].age   << arr[i].score   << endl;
//	}
//	return 0;
//}