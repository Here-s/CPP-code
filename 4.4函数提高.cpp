#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//函数重载的注意事项
//1 引用作为重载条件
//2 函数重载碰到函数默认函数
void fun(int a)
{
	cout << "byte dance" << endl;
}
void fun(int a,int b=10)//会报错 因为编译器不知道调用哪个函数 因为main函数的fun对这两个都能用 
//因为都能用 所以编译器不知道调用哪一个函数 所以要尽量避免这种情况 传两个数就没问题了
{
	cout << "字节跳动" << endl;
}

int main()//函数重载碰到默认参数
{
	//fun(10);
	return 0;
}
//void fun(int& a)//引用作为函数重载条件
//{
//	cout << "byte dance" << endl;
//}
//void fun(const int& a)
//{
//	cout << "字节跳动" << endl;
//}
//int main()
//{
//	int a = 10;
//	fun(a);//调用的是没加const的 因为变量a 本来就是可读 可写  所以调用的是没加的
//	fun(10);//这样调用的就是下面那个 因为如果是上面的话就是int& a=10; 这种引用是有问题的
//	//加了const 编译器做优化 所以是第二个
//	return 0;
//}

//函数重载(chong)
//函数名可以相同  提高复用性
//函数重载满足条件
//1 同一个作用域下
//2 函数名称相同
//3 函数参数类型不同 或者 个数不同 或者 顺序不同
//注意：函数参数的返回值不可以作为函数重载的条件
//void fun()
//{
//	cout << "byte dance"<<endl;
//}
//void fun(int a)//不能写两个相同的，不然会显示函数已有主体，会报错
//{
//	cout << "byte dance (int a)" << endl;
//}
//void fun(double a)
//{
//	cout << "byte dance (3.14)" << endl;
//}
//void fun(int a,double b)
//{
//	cout << "byte dance" << endl;
//}
//void fun(double a,int b)//和上一个顺序不同 所以也可以
//{
//	cout << "byte dance" << endl;
//}
////函数的返回值不可以作为函数重载的条件
////int fun()//报错 因为不能有返回值 编译器不知道调用哪个
////{
////	cout << "byte dance" << endl;
////}
//
//int main()
//{
//	fun();//调用的是第一个函数
//	fun(10);//调用的是第二个函数 因为有占位符 
//	fun(3.14);
//	fun(10, 3.14);
//	fun(3.14, 10);
//	return 0;
//}

//函数占位参数
//C++中函数的形参列表里可以有占位参数，用来做占位 调用函数时必须填补该位置
//语法：返回值类型 函数名 （数据类型）{}
//占位参数还可以有默认参数  就是把后面的int 变成int=10 
//void fun(int a,int)//括号里面是数据类型+变量名 第二个int 就是占位用的
//{
//	cout << "byte dance" << endl;
//}
//int main()
//{
//	fun(10, 20);//传的时候传个整型  后面的20 是对应的占位参数int 第二个传的10 在函数中是不能用的
//	return 0;
//}

//函数默认参数
//在C++中 函数的形参列表中的形参是可以有默认值的
//语法：返回值类型 函数名 （参数等于默认值） {}

//int fun(int a,int b = 20,int c = 30)
//{
//	return a + b + c;
//}
////如果某个位置已经有了默认参数 那么从这个位置往后，从左到右都必须有默认值
//
//int fun2(int a, int b, int c, int d = 10)
//{
//
//}
////如果函数的声明有了默认参数，函数的实现就不能有默认参数
//int fun3(int a = 10, int b = 10);
//
//int fun3(int a = 20, int b = 20)//虽然没报错 但是编译器不知道按照哪个值来算 当把声明删了就行了
//{
//	return a + b;
//}
//int main()
//{
//	cout<<fun(10,30)<<endl;//这里是把三个数的值传过去  也可以只传一个值 另外两个在函数那里赋值
//	//传了30 所以b的值还是30 如果没传 就是默认值 像c就是默认值
//	fun3(10, 10);
//	return 0;
//}