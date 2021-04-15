#include<iostream>
using namespace std;




//纯虚函数和抽象类
//在多态中 通常父类中虚函数的实现是毫无意义的 主要是调用了子类重写的内容
//因此 可以将虚函数改为纯虚函数
//纯虚函数语法 virtual 返回值类型 函数名 （参数列表） = 0;
//当类中有了纯虚函数 这个类也被成为抽象类
//
//抽象类特点 1 无法实例化对象 2 子类必须重写抽象类中的纯虚函数 否则也属于抽象类

class base
{
public:
	//这个类只要有一个纯虚函数 这个类就被叫做抽象类
	//抽象类特点 1 无法实例化对象(无论栈区还是堆区)  2 子类必须重写抽象类中的纯虚函数 否则也属于抽象类
	virtual void fun() = 0;//写纯虚函数的目的就是让子类重写纯虚函数

};
class son:public base
{
public:
	virtual void fun() //这样下面的son s就不会报错了
	{
		cout << "fun函数的调用" << endl;
	};
};
void test01()
{
	//base b;//报错是因为base类是抽象类 所以不能拿它创建类
	//new base;//报错是因为base类是抽象类 所以不能拿它创建类
	son s;//报错是因为子类没有重写父类中的纯虚函数
	base* bas = new son;//指向子类对象
	bas->fun();//调用的是子类的fun函数
}
int main()
{
	test01();
	return 0;
}



//多态案例-计算器类
//用普通写法和多态写法 设计实现两个操作数进行运算的计算器类

//多态的优点
//1 代码组织结构清晰
//2 可读性强
//3 利于前期和后期的拓展和维护
//用多态写 虽然代码量变大了 但是组织 结构清晰 可读性强 不需要修改源码

//class calculator
//{
//public:
//	int getresult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		//如果要扩展新的功能 就需要修改这里的代码
//		//在真的开发当中 提倡开闭原则
//		//开闭原则 对扩展进行开放 对修改进行关闭
//	}
//	//两个操作数
//	int num1;
//	int num2;
//};
//void test01()
//{
//	calculator c;
//	c.num1 = 10;
//	c.num2 = 20;
//	cout << c.num1 << "+" << c.num2 << "=" << c.getresult("+") << endl;//调用getresult函数的时候顺便就把+传过去了
//	cout << c.num1 << "-" << c.num2 << "=" << c.getresult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getresult("*") << endl;
//}
//
////利用多态实现计算器
////实现计算器的基类（抽象类  什么东西也不写）
//class abstractcalculator
//{
//public:
//	virtual int getresult()//写虚函数 要在子类中重写 在这里加virtual
//	{
//		return 0;
//	}
//	int num1;
//	int num2;
//};
////设置加法计算机类
//class addcalculator :public abstractcalculator
//{
//public:
//	int getresult()
//	{
//		return num1 + num2;
//	}
//};
////减法计算器类
//class subcalculator :public abstractcalculator
//{
//public:
//	int getresult()
//	{
//		return num1 - num2;
//	}
//};
////乘法计算器类
//class mulcalculator :public abstractcalculator
//{
//public:
//	int getresult()
//	{
//		return num1 * num2;
//	}
//};
//void test02()
//{
//	//多态使用条件 父类指针或者引用指向子类的对象
//
//	//实现加法
//	abstractcalculator* abc = new addcalculator;//创建加法对象 由父类指针指向子类对象
//	abc->num1 = 10;
//	abc->num2 = 20;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getresult() << endl;
//	//因为是堆区的数据 所以用完要销毁
//	delete abc;//销毁堆区的数据 指针还没变
//	//减法运算
//	abc = new subcalculator;//重新让指针指向减法运算器
//	abc->num1 = 10;
//	abc->num2 = 20;
//	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getresult() << endl;//通过调用sub函数实现减法运算
//	delete abc;
//	//乘法运算
//	abc = new mulcalculator;
//	abc->num1 = 10;
//	abc->num2 = 20;
//	cout << abc->num1 << "*" << abc->num2 << "=" << abc->getresult() << endl;//通过调用sub函数实现减法运算
//
//}
//
////用多态写 虽然代码量变大了 但是组织 结构清晰 可读性强
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//多态的基本概念
   //多态分为两类
   //1 静态多态：函数重载和运算符重载属于静态多态，复用函数名
   //2 动态多态：派生类和虚函数实现运行时多态
   //静态多态和动态多态的区别
   //1 静态多态的函数地址早绑定-编译阶段确定函数地址
   //2 动态多态的函数地址晚绑定-运行阶段确定函数地址

//动物类
//在speak函数前面加一个关键字 virtual 就能实现地址晚绑定 就是虚函数 就实现地址晚绑定了 就输出是猫了
//class anima
//{
//public:
//	virtual void speak()//赋予动物一个说话的行为
//	{
//		cout << "动物说话行为" << endl;
//	}
//};
////猫类
//class cat :public anima//猫类 就是派生类
//{
//public:
//	void speak()
//	{
//		cout << "猫说话" << endl;
//	}
//};
////狗类
//class dog :public anima
//{
//public:
//	void speak()
//	{
//		cout << "狗在叫" << endl;
//	}
//};
////执行说话的函数
////地址早绑定 在编译阶段就确定了函数地址 
////要执行猫去说话 那这个函数的地址就不能提前绑定 需要在运行阶段进行绑定 地址晚绑定 就执行动态多态 
//void dospeak(anima& ani)//anima的引用 指向子类的cat 父类指针可以直接指向子类对象
//{
//	ani.speak();//anima地址早绑定 所以不管传什么 都会走anima里面的speak函数 
//}
//
////动态多态满足关系
////1 满足动态多态得有继承关系 
////2 子类重写父类的虚函数 就是加virtual的函数 写不写virtual都可以
////重写：函数返回值 函数名 参数列表 完全相同 
//
////动态多态的使用
////父类的指针或者引用 指向子类的对象
//
//void test01()
//{
//	cat c;//本意是想让猫去说话 但是现在是anima在执行 因为anima地址早绑定了
//	dospeak(c);
//	dog d;
//	dospeak(d);//传的对象不同 所以要执行的函数也不一样 运行的时候看传的什么 就执行什么的代码
//}
//
////多态的底层原理
//void test02()
//{
//	cout << sizeof(anima) << endl;//1 因为是空类 只有一个函数 空类是1个字节 用来区分不同的
//	//当加上virtual之后 就变成四个字节了 因为变成了一个指针 是一个虚函数指针 指向虚函数的地址
//	//记录地址的时候要加作用域anima 找到地址的话还要取地址符号& 
//	//当子类重写父类的虚函数时 子类中的虚函数表 内容会替换为子类的虚函数地址
//	//当父类的指针或者引用指向子类对象时候 发生多态 
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}