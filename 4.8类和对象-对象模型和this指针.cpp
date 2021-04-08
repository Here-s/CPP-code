#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//this指针概念
//在C++中 类内成员变量和成员函数是分开存储的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
//那么问题是：这一块代码是如何区分那个对象调用自己的
//
//C++通过提供特殊的对象指针 this指针 解决上述问题 this指针指向被调用的成员函数所属的对象 比如p1调用这个函数 那么this就指向p1
//就是谁调用函数 this就指向谁
//就相当于一个函数 有多个函数去调用这个函数 函数体内通过this指针来区分时哪个对象调用的
//
//
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接调用就可以了
//
//this指针用途
//1 当形参和成员变量同名时 可使用this指针来区分
//2 在类的非静态成员函数中返回对象本身 可使用return* this

//就是两个用途： 1 解决名称冲突    2 返回对象本身
class person
{
public:
	person(int age)//通过this解决名称冲突
	{
		//this指针指向的是 被调用的成员函数所属的对象  因为调用的是person的p1 所以this指向的是p1
		this->age = age;//将自身age做一个赋值操作 编译器认为这里的三个age是同一份 下面的age又是同一份 因为并没有将属性进行赋值操作
		//通过this加一个指针 来指向下面的age 这样就正常了
	}
	//链式编程思想
	person& personaddage(person &p)//因为要返回本体 所以用引用的方式返回
		//如果没有& 那么就是输出结果就是20 返回的不是p2本身 所以以此循环每次返回的p2都不一样 输出的时候是p2 所以是20
		//如果返回是值的方式返回 那么一定是创建新的对象  但如果是用引用的方式返回 它不会创建对象 会一直返回本体(p2)
	{
		this->age += p.age;//自身的年龄等于把age加一遍  this是指向p2的指针 所以*this指向的就是p2的本体
		return*this;
	}
	int age;
};
void test01()
{
	person p1(18);
	cout << p1.age << endl;
}
void test02()
{
	person p1(10);
	person p2(10);//想让p2的年龄加一点 把p1的十岁加到p2上面 也就是最后p2等于20岁
	p2.personaddage(p1).personaddage(p1).personaddage(p1);//假设我想加三次  但是会报错 因为返回值是void 所以不能再调用了
	//如果调用完一次之后 返回的还是p2 那就还可以继续调用
	cout << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}



//成员变量和成员函数分开存储
//在C++中 类内成员变量和成员函数分开存储
//只有非静态成员变量才属于勒的对象上

//class person
//{
//	int a;//非静态成员变量 属于类的对象上
//	static int b;//静态成员变量  不属于类的对象上
//	void fun(){}//非静态成员函数  是独一无二的 也不属于类的对象上
//	static void fun2(){}//静态成员函数 也只有一份 不属于类的对象上
//};
//int person::b;//对静态成员变量进行初始化
//void test01()
//{
//	person p;
//	//空对象占用内存空间为：1 因为C++编译器会给每个空对象也分配一个字节空间 是为了区分空对象占内存的位置
//	//占了空间 这样的话 就能区分每个对象了  每个对象也应该有一个独一无二的内存地址
//	cout << sizeof(p) << endl;
//}
//void test02()
//{
//	person p;
//	cout << sizeof(p) << endl;// 占用的空间是4  不是空对象 是int 所以是4个字节 
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}