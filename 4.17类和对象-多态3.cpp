#include<iostream>
using namespace std;
#include<string>


//多态案例3-电脑组装
//案例描述：
//电脑主要组成部件为cpu，显卡，内存条
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件 例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件的工作的接口
//测试时组装三台不同的电脑进行工作

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
//抽象显卡类
class videocard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//抽象内存条类
class memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
class computer
{
public:
	computer(CPU* acpu, videocard* avc, memory* ame)
	{
		cpu = acpu;
		vc = avc;
		me = ame;
	}
	void work()//提供工作函数
	{
		//让零件工作起来，调用接口
		cpu->calculate();
		vc->display();
		me->storage();
	}
	//提供析构函数 释放3个电脑零件
	~computer()
	{
		//释放cpu零件
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//释放显卡零件
		if (vc != NULL)
		{
			delete cpu;
			vc = NULL;
		}
		//释放内存零件
		if (me != NULL)
		{
			delete cpu;
			me = NULL;
		}

	}
private:
	CPU* cpu;//cpu的零件指针
	videocard* vc;//显卡零件指针
	memory* me;//内存条的零件指针
};
//具体厂商
//Intel厂商
class intelcpu :public CPU
{
public:
	virtual void calculate()//子类要重写父类的纯虚函数
	{
		cout << "intel的cpu开始计算" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()//子类要重写父类的纯虚函数
	{
		cout << "intel的显卡开始工作" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void storage()//子类要重写父类的纯虚函数
	{
		cout << "intel的内存条开始存储" << endl;
	}
};
//Lenovo厂商
class Lenovocpu :public CPU
{
public:
	virtual void calculate()//子类要重写父类的纯虚函数
	{
		cout << "Lenovo的cpu开始计算" << endl;
	}
};
class Lenovovideocard :public videocard
{
public:
	virtual void display()//子类要重写父类的纯虚函数
	{
		cout << "Lenovo的显卡开始工作" << endl;
	}
};
class Lenovomemory :public memory
{
public:
	virtual void storage()//子类要重写父类的纯虚函数
	{
		cout << "Lenovo的内存条开始存储" << endl;
	}
};
void test01()
{
	//第一台电脑的零件
	CPU* intelacpu = new intelcpu;//父类指针创建的
	videocard* intelcard = new intelvideocard;
	memory* intelme = new intelmemory;
	//这些零件还没释放 可以通过下面的指针顺便释放
	cout << "第一台电脑开始工作" << endl;
	//创建第一台电脑
	computer* computer1 = new computer(intelacpu, intelcard, intelme);
	computer1->work();
	delete computer1;

	cout << endl;
	cout << "第二台电脑开始工作" << endl;
	//第二台电脑组装
	computer* computer2 = new computer(new Lenovocpu, new Lenovovideocard, new Lenovomemory);
	//new的指针直接传进去
	computer2->work();
	delete computer2;


	cout << endl;
	cout << "第三台电脑开始工作" << endl;
	//第三台电脑组装
	computer* computer3 = new computer(new Lenovocpu, new intelvideocard, new Lenovomemory);
	//new的指针直接传进去
	computer3->work();
	delete computer3;

}
int main()
{
	test01();
	return 0;
}




//虚析构和纯虚析构
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构
//
//虚析构和纯虚析构的共性：
//1 可以解决父类指针释放子类对象
//2 都需要有具体的函数实现
//虚函数和纯虚析构区别：
//1 如果是纯虚函数，该类属于抽象类，无法实例化对象
//
//虚析构语法：
//virtual ~类名() {}
//纯虚析构语法：
//virtual ~类名() = 0;


//class anima
//{
//public:
//	anima()
//	{
//		cout << "anima构造函数调用" << endl;
//	}
//
//	//要注意的是 虚析构和纯虚析构必须要有代码实现 因为父类也可能把数据开辟到堆区
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
// //   virtual ~anima()
//	//{
//	//	cout << "anima析构函数调用" << endl;
//	//}
//	//纯虚析构就是这样 也可以解决父类指针释放子类对象时不干净的问题 需要声明 也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
//	virtual ~anima()=0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//
//};
//anima::~anima()//anima作用域下的纯虚析构实现
//{
//	cout << "anima的纯虚析构函数调用" << endl;
//}
//class cat :public anima
//{
//public:
//	cat(string aname)
//	{
//		cout << "cat构造函数的调用" << endl;
//		name = new string(aname);
//	}
//	virtual void speak()
//	{
//		cout << *name << "猫说话" << endl;
//	}
//	~cat()//创建cat的析构函数 来消除cat的名字
//	{
//		if (name != NULL)
//		{
//			cout << "cat的析构函数调用" << endl;//运行发现没走这行代码，说明下面的name也没释放
//			//父类指针指向子类对象，所以delete父类指针的时候，并不会走子类的析构代码 
//			//所以就导致    子类如果有堆区属性，会出现内存泄露情况 当把父类的析构改为虚析构的时候就好了
//			delete name;
//		}
//	}
//	string* name;//通过指针创建在堆区
//};
//void test01()
//{
//	anima* ani = new cat("Tom");//anima是父类指针
//	ani->speak();
//	delete ani;
//}
//int main()
//{
//	test01();
//	return 0;
//}