#include<iostream>
using namespace std;


//继承中的对象模型

class base
{
public:
	int a;
protected:
	int b;
private:
	int c;//私有成员只是被隐藏了 但是还是会继承下去
};

//公共继承
class son:public base
{
public:
	int d;
};

void test01()
{
	//父类中所以非静态成员属性都会被子类继承下去
	//父类中的私有成员属性 是被编译器给隐藏了 因此是访问不到的 但是确实是继承下去了
	// 
	//通过开发人员命令提示符就可知道对象模型了
	//首先跳转文件放置的盘
	//然后跳转文件路径 cd.....具体路径下
	//查看命令 cl  /dl  reportSingleClassLayout类名 文件名
	cout << sizeof(son) << endl;//16 是因为公共继承 有a b c d 四个 所以加上是16
}
int main()
{
	test01();
	return 0;
}