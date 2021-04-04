#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//引用做函数返回值
//作用：引用时可以作为函数的返回值存在的
//注意：不要返回局部变量引用
//用法：函数调用作为左值
//引用比指针更方便

//常量引用
//作用：常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参 防止形参修改实参
//打印数据函数
void print(const int& val)//通过引用的方式 把值传进来
{
	//val = 1000;//不加const的话 就把原来的值也修改了 为了避免原来的值被修改 所以在接收参数的时候加const
	//加上const 在函数里面就不能修改了 为了防止误操作
	cout << val << endl;
}
int main()
{
	//常量引用
	//int a = 10;
	//const int& ref = 10;//引用必须引一块合法的内存空间  当加上const之后 这样就不会报错了
	//加上const之后编译器将代码修改为int tmp = 10;  int& ref=tmp;
	//ref = 10;//加上const之后 是一个只读状态 不可以修改
	int a = 100;
	print(a);
	cout << a << endl;//因为是通过引用的方式去修改了a的值 所以原来的a的值也被修改了 因为指向的是同一块内存
	return 0;
}

//引用的本质
//本质：引用的本质在C++内部实现是一个指针常量(指针的指向是不可以修改的 指针的值是可以修改的)
//void fun(int& ref)//引用的本质：就是一个指针常量
//{
//	ref = 100;
//}
//int main()
//{
//	int a = 10;
//	int& ref = a;//别名是ref 编译器认为是 int* const ref = &a; 也说明引用是不可更改的 类似于指针
//	//指针指向不可以更改 引用也类似于这样 但是值可以改
//	ref = 20;//内部发现是引用 这里的操作就类似于 *ref = 20; 
//	cout << a << endl;
//	cout << ref << endl;
//	fun(a);
//	return 0;
//}

// 2 函数的调用作为左值
//int& test2()
//{
//	static int a = 10;//加上static 使得内存不会被清除  就变成静态变量了 就在全局区了
//	return a;//全局区的数据 在程序运行结束时释放
//}
//int main()
//{
//	int& ref = test2();//返回的是a的引用  等于返回的是a
//	cout << ref << endl;//因为由static 使其变为静态变量 所以就不会是非法访问
//	cout << ref << endl;
//	test2() = 1000;//因为返回的是a的引用  所以这里就是对a的引用 所以可以作为左值
//	//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << ref << endl;
//	cout << ref << endl;
//
//	return 0;
//}

//1 不要返回局部变量的引用
//int& test()  //局部变量是放在四区中的栈区
//{
//	int a = 10;
//	return a;
//}
//int main()
//{
//	int& ref = test();//ref是test的别名  test是引用函数 返回a
//	cout << ref << endl;
//	cout << ref << endl;//发现第二次不一样 说明是非法访问 第一次是编译器做了保留
//	//因为是局部变量 所以会清空 所以是非法访问
//	return 0;
//}

//引用做函数参数
//作用：函数传参时，可以利用引用的技术让形参修饰实参  
//优点：可以简化指针修改实参

//void swap(int a,int b)
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	cout << a << endl;
//	cout << b << endl;
//}
//void swap2(int* a,int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void swap3(int &a,int &b)//通过引用来传递值  上面的a通过引用的方式 所以是下面a的别名 只不过起的名字一样
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()//交换值的函数
//{
//	int a = 5;
//	int b = 3;
//	//1 值传递  形参的改变不会影响实参
//	//swap(a, b);
//	//cout << a << endl;
//	//cout << b << endl;
//	//2 地址传递
//	//swap2(&a,&b);
//	//cout << a << endl;
//	//cout << b << endl;
//	//3 引用的方式传递 形参也会修饰实参
//	swap3(a, b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

//引用的注意事项： 1 引用必须初始化  2 引用在初始化后，不可以改变
//int main()
//{
//	//例如：int &b; 这种的是错误的因为没有初始化
//	int a = 10;
//	int& b = a;//初始化的样子
//	//int& b;//err 未初始化
//	//引用一旦初始化 就不能更改了 比如：把a改为b之后，就不能改为c了
//	int c = 20;
//	b = c;//这是赋值操作，而不是更改引用
//	cout << a << endl;//b和a指向的是同一块内存 所以a也是20
//	cout << b << endl;//c的值赋给b 所以b也是20
//	cout << c << endl;
//	return 0;
//}

//引用的基本使用
//作用：给变量起别名
//语法：数据类型&别名=原名
//例如 int a=10; 意思是创建一个整型变量a  值等于10 这是一块内存 占4个字节的大小 通过变量a来操作这块内存
//通过引用 把变量改个名字  比如把a变成b 语法是int & b = a ；把b改成20  再输出a a的值是20
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 100;//操作别名和操作原名3都是操作同一块内存
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}