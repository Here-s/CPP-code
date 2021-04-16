#include<iostream>
using namespace std;


//案例2-制作饮品
//制作饮品的大致流程是：煮水 冲泡 导入杯中 加入辅料
//利用多态实现案例 提供抽象制作饮品基类 提供子类制作咖啡和茶叶

class abstractdrinking
{
public:
	//煮水
	virtual void boil() = 0;
	//冲泡
	virtual void brew() = 0;
	//倒入杯中
	virtual void pourincup() = 0;
	//加入辅料
	virtual void putsomething() = 0;
	//制作饮品
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};
//制作咖啡
class coffee :public abstractdrinking
{
public:
	//要重写 所以再复制下来
		//煮水
	virtual void boil()
	{
		cout << "煮水" << endl;
	}
	//冲泡
	virtual void brew()
	{
		cout << "冲泡" << endl;
	}
	//倒入杯中
	virtual void pourincup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void putsomething()
	{
		cout << "加入糖和牛奶" << endl;
	}

};
//制作茶叶
class tea :public abstractdrinking
{
public:
	//要重写 所以再复制下来
		//煮水
	virtual void boil()
	{
		cout << "煮茶叶的水" << endl;
	}
	//冲泡
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void pourincup()
	{
		cout << "茶叶倒入杯中" << endl;
	}
	//加入辅料
	virtual void putsomething()
	{
		cout << "加入茶叶的糖和牛奶" << endl;
	}

};
//制作饮品函数
void dowork(abstractdrinking* abs)//这是一个父类指针 调用接口实现内容 相当于这里是形参 接收实参coffee
{
	abs->makedrink();//这里相当于调用父类的makedrink 然后父类函数去寻找子类中的具体实现
	//制作完后 数据要释放
	delete abs;//能把堆区的所有数据全部释放

}
void test01()
{
	cout << "制作咖啡" << endl;
	dowork(new coffee);
	cout << endl;
	cout << "制作茶叶" << endl;
	dowork(new tea);
}
int main()
{
	test01();
	return 0;
}