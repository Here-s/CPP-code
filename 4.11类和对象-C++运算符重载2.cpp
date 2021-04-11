#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//递增运算符重载  ++
//作用：通过重载递增运算符，实现自己的整型数据

//自定义整型
class integer
{
	friend ostream& operator<<(ostream& cout, integer aint);
public:
	integer()
	{
		a = 10;
	}
	//重载前置++运算符
	integer& operator++()//返回引用 因为如果是返回值的话 只能做一次++运算  返回引用就能一直对一个数据进行操作
	{
		a++;//通过重载运算符实现++的操作 所以应该返回自身
		return*this;
	}
	//重载后置++运算符
	integer operator++(int)//报错是因为和上面的函数发生了重定义的现象 因为返回值不能作为重载条件 所以会报错 在后面加一个int
	//int代表占位参数 用来区别前置和后置递增
	{
		//先 记录当时结果 因为不能直接写return 所以应该先记录当时的结果
		integer tmp = *this;
		//后 递增运算
		a++;
		//最后将记录结果做返回操作
		return tmp;
	}
private:
	int a;

};
//重载左移运算符
ostream& operator<<(ostream& cout, integer aint)
{
	cout << aint.a;
	return cout;
}
void test01()
{
	integer aint;
	cout << ++aint << endl;//报错是因为输出的是自定义的整型 编译器不知道怎么输出 所以重载左移运算符让编译器知道
	//但是不能弄成前置 后置++  所以 继续重载++运算符
}
void test02()
{
	integer aint;
	cout << aint++ << endl;
	cout << aint << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}


//左移运算符重载
//作用：可以输出自定义数据类型
//cout << a << endl;
//class person
//{
//	person p;
//	p.a = 10;
//	p.b = 20;
//	cout << p << endl;//不能这样把a  b的值全部输出 所以重载
//};
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//public:
//	person(int aa, int ab)
//	{
//		a = aa;
//		b = ab;
//	}
//private://一般建议调成私有的
//	//利用成员函数重载左移操作符  一般不使用 因为无法实现cout在左侧 只能利用全局函数重载左移操作符
//	//void operator<<(person& p)
//	//{
//
//	//}
//	int a;
//	int b;
//};
//
////只能利用全局函数重载左移操作符
//ostream& operator<<(ostream& cout,person p)//本质 operator<<(cout,p) 简化为 cout<<p   cout本质是ostream 输出流对象 全局只能有一个 所以用引用的方式
//{
//	cout << p.a << p.b << endl;
//	return cout;//返回 方便链式访问 也可以使用别名 
//}
//void test01()
//{
//	person p(10,20);
//	//p.a = 20;
//	//p.b = 10;
//
//	cout << p << endl;//通过p输出a和b的值，所以需要重载  通过成员函数或者全局函数   通过上面返回cout 就可以一直这样链式了 后面还可以加别的东西
//}
//int main()
//{
//	test01();
//	return 0;
//}