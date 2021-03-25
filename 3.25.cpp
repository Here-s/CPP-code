#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//指针和函数
//void swap(int a,int b)//形参中的a,b 变了，但是main函数中的没有变
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	cout << a << endl;
//	cout << b << endl;
//}
void swap1(int* p1, int* p2)//传的是地址  所以对main函数也有效  所以原函数中的值也被修改了
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()
{
	int a = 3;
	int b = 5;
	//swap(a,b);
	swap1(&a, &b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}

//指针和数组
//int main()//利用指针来访问数组中的元素
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	cout << arr[0] << endl;
//	int* p = arr;//arr是数组首地址
//	cout << *p << endl;
//	p++;//指针+1 就是向后偏移4个字节
//	cout << *p << endl;
//	int* p2 = arr;
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//	return 0;
//}

//const修饰指针常量 同C语言  就是使得常量不可改变
//const int* p=&a;  特点 指针的指向可以被修改 但是指针指向的值不可以被修改
//int *const p=&a;  指针的指向不可改 指针指向的值可以改指针指向的值都不可以被修改
//const int* const p=&a;//指针的指向和
//int main()
//{
//	int a = 10;
//	int b = 10;
//	const int* p = &a;//指针指向的值不可以改 指针的指向可以改  const修饰指针 常量指针
//	//*p = 20;//不可以改 所以会报错
//	p = &b;//指针的指向可以改
//	int* const p2 = &a;//const修饰常量 指针常量   指针的指向不可以改 指向的值可以改
//	*p2 = 100;
//	//p2 = &b;//指针的指向不可以改  所以会报错
//	const int* const p3 = &a;//const修饰指针和变量
////	*p3 = 100;
////	p3 = &b;
//	return 0;
//}


//指针
//野指针 非法访问内存空间  同C语言  非法访问  越界访问  一定要注意
//int main()
//{
//	
//	return 0;
//}
