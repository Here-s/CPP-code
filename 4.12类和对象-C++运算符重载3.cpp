#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//函数调用运算符重载
//1 函数调用运算符()也可以重载
//2 由于重载后使用的方式非常像函数的调用 因此称为仿函数
//3 仿函数没有固定写法，非常灵活

//打印输出类
class Print
{
public:
	//重载函数调用操作符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void Print02(string test)
{
	cout << test << endl;
}
void test01()
{
	Print print;
	print("byte");//由于使用非常类似于函数调用 因此称为仿函数
	Print02("dance");
}
//仿函数非常灵活 没有固定的写法
//加法类
class Add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	Add add;
	int ret = add(2, 3);
	cout << ret << endl;

	//匿名函数对象
	cout << Add()(3, 5) << endl;//表达式前一部分是在创建匿名对象 上面那种是起名字了 下面这种没有起名字
}
int main()
{
	//test01();
	test02();
	return 0;
}


//关系运算符重载
//作用：重载关系运算符，可以让两个自定义类型对象进行对比操作  因为编译器不会对比p1和p2两个数据类型 所以重载
//class person
//{
//public:
//	person(string aname, int aage)
//	{
//		name = aname;
//		age = aage;
//	}
//	//重载 == 号
//	int operator==(person &p)//因为要调用p1和p2 所以传参进来
//	{
//		if (this->name == p.name && this->age == p.age)//&&并且的意思
//		{
//			return 1;
//		}
//		return 0;
//	}
//	int operator!=(person& p)
//	{
//		if (this->name == p.name && this->age == p.age)//&&并且的意思
//		{
//			return 0;
//		}
//		return 1;
//
//	}
//	string name;
//	int age;
//};
//void test01()
//{
//	person p1("Tom", 18);
//	person p2("Jerry", 18);
//	//重载==号
//	if (p1 == p2)
//	{
//		cout << "p1等于p2" << endl;
//	}
//	else
//	{
//		cout << "p1不等于p2" << endl;
//	}
//	//重载!=号
//	if (p1 != p2)
//	{
//		cout << "p1不  等于p2" << endl;
//	}
//	else
//	{
//		cout << "p1  等于p2" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}


//赋值运算符重载
//C++编译器至少给一个类添加4个函数
//1 默认构造函数（无参 函数体为空）
//2 默认析构函数（无参 函数体为空）
//3 默认拷贝构造函数 对属性进行值拷贝
//4 赋值运算符 operator=，对属性进行拷贝
//
//如果类中有属性指向堆区 做赋值操作的时也会出现深浅拷贝问题

//class person
//{
//public:
//	person(int aage)
//	{
//		age = new int(aage);//使用指针age来维护数据 数据创建在堆区 也需要由程序员手动释放 在析构函数中释放
//	}
//	//p1和p2是两块空间 假设18的地址是0x0001 所以p1指向的就是0x0001 当赋值的时候就是进行一次拷贝 逐字节拷贝 把地址0x0001也拷贝了
//	//所以p2指向的也是这块内存 当析构的时候先把p2释放 释放的时候就把p2复制的0x0001给释放了 当判断p1的时候又释放了一次
//	//这样就导致堆区内存重复释放 程序崩溃 解决方法是：利用深拷贝 解决浅拷贝带来的问题 用另外一个地址0x0002来存放18 
//	//所以自己写一个等号赋值运算
//	~person()
//	{
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//	//重载赋值运算符
//	person& operator=(person& p)
//	{
//		//编译器提供的是浅拷贝 
//		//age = p.age;
//		//应该先判断是否有属性在堆区 如果有 先释放干净，然后再深拷贝
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//		//现在进行深拷贝
//		age = new int(*p.age);//用自身指针去指向新的内存空间  这就是深拷贝的操作
//		//返回对象本身
//		return* this;//因为指向自身的指针是this指针 所以返回解引用就是返回自身本体
//	}
//	int* age;//通过指针 将真实的数据开辟到堆区
//};
//void test01()
//{
//	person p1(18);
//	person p2(20);
//	person p3(30);
//	p3 = p2 = p1;//赋值操作 连等报错是因为之前的返回值是b 所以使用链式编程思想 把值赋值 所以调用完函数之后 再返回自身
//	cout << *p1.age << endl;
//	cout << *p2.age << endl;
//	cout << *p3.age << endl;
//}
//int main()
//{
//	test01();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;//全是10 
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;
//	return 0;
//}