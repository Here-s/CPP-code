#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//成员属性设置为私有
//优点1 将所有成员属性设置为私有 可以自己控制读写权限
//优点2 对于写权限 我们可以检测数据的有效性
//设计人类
class person
{
public://通过public 就使得姓名变得可读可写了
	//设置姓名
	void setname(string aname)
	{
		name = aname;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	int getage()//对年龄改为可读可写的 年龄范围是（0-150）
	{
		age = 10;//对年龄进行初始化
		return age;
	}
	//设置年龄  年龄范围是（0-150）
	void setage(int aage)
	{
		if (aage < 0 || age>150)
		{
			cout << "输入的年龄大小有误" << endl;
			return;
		}
		age = aage;
	}
	//设置爱人 使得只写
	void setlover(string alover)
	{
		lover = alover;
	}
private:
	//对名字进行可读可写
	string name;
	//对年龄进行只读
	int age;
	string lover;
};
int main()
{
	person p;
	//p.name = "张三";//报错是因为 之前是私有权限
	p.setname("张三");//这样就设置号名字了
	cout << p.getname() << endl;//调用函数的时候一定要有括号
	//p.age = 18;//不能修改 因为age是私有权限
	//p.setage(18);//也是不行的 因为没有setage成员 因为上面是只读的 所以补创建这个成员
	cout << p.getage() << endl;
	//设置爱人是byte
	p.setlover("byte");
	//cout << p.lover << endl;//会报错  不能获取 因为是只写的状态
	//cout << p.setlover() << endl;//会报错  因为设置的是只写 所以访问不到 
	p.setage(1000);
	return 0;
}

//在C++中 struct和class的区别
//1 struct默认权限为公共   也可以用来写类
//2 class默认权限为私有
//class C1
//{
//	int a;//什么都没写 默认权限是私有
//};
//struct C2
//{
//	int a;//默认权限是公共
//};
//int main()
//{
//	C1 c1;
//	//c1.a = 100;//会报错 因为class默认是私有的
//	C2 c2;
//	c2.a = 100;//因为struct默认是公共的 所以在类外也可以访问
//	return 0;
//}

//封装意义二：
//类在设计时，可以把属相不和行为放在不同的权限下，加以控制
//访问权限有一下三种
//1 public       公共权限     成员在类内可以访问    类外也可以访问
//2 protected    保护权限     成员在类内可以访问    类外不可以访问   儿子也可以访问父亲的保护内容
//3 private      私有权限     成员在类内可以访问    类外不可以访问   儿子不可以访问父亲的私有内容
//class person//类内的话 三个属性都能访问
//{
//public://公共权限
//	string name;//姓名
//protected://保护权限
//	string car;
//private:
//	int password;
//private:
//	void fun()
//	{
//		name = "张三";
//		car = "宝马";
//		password = 123456;//这都是类内 所以不会报错
//	}
//};
//int main()
//{
//	person p1;
//	p1.name = "李四";
//	//p1.car = "奔驰";//因为car是保护权限 所以在类外不能访问
//	//p1.password = 222222;//因为是私有权限 所以在类外也访问不了
//	//p1.fun();//因为是保护权限 所以也访问不论 把上面改成public就能访问了
//	return 0;
//}

//类中的属性和行为都称为成员 
//类中的属性又被叫做（成员属性，成员变量）
//类中的行为又被叫做（成员函数，成员方法）

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//class stu//设计学生类
//{
//public://公共权限
//	//属性
//	string name;//姓名
//	int id;//学号
//
//	//行为
//	//显示姓名和学号
//	void show()
//	{
//		cout << "姓名：" << name << "学号：" << id << endl;
//	}
//	//通过行为给属性赋值
//	void setname(string aname)
//	{
//		name = aname;
//	}
//	void setid(int aid)
//	{
//		id = aid;
//	}
//};
//int main()
//{
//	//创建一个具体的学生对象  实例化
//	stu s1;
//	//给s1进行赋值操作
//	//s1.name = "张三";
//	s1.setname("张三");//通过调用函数 把name变成张三 也就是属性
//	//s1.id = 1;
//	s1.setid(1);
//	s1.show();
//	stu s2;
//	s2.name = "李四";
//	s2.id = 2;
//	s2.show();
//	return 0;
//}

//C++面向对象的三大特性：封装，继承，多态
//C++认为万物皆为对象 对象上有其属性和行为
//例如 人可以作为对象，属性有姓名，年龄，身高，体重。。。。行为有走，跑，跳，吃饭，唱歌。。。。
//车也可以作为对象，属性有轮胎，方向盘，车灯。。。。行为有载人，放音乐，放空调
//具有相同性质的对象，我们可以抽象称为类，人属于人类，车属于车类

//封装 ：是C++面向对象三大特性之一加以权限控制
//封装的意义：1 将属性和行为作为应该整体，表现生活中的事物   2 将属性和行为加以权限控制
//封装意义一：在设计类的时候，属性和行为写在一起，表现事物  语法：class 类名{ 访问权限：属性 / 行为 };

//示例1：设计一个园类，求圆的周长
//圆求周长的公式：2*Π*半径 （半径就是圆的属性，所以求的时候，半径就是一个属性）
//const double Π = 3.14;//圆周率    类翻译成英文是class
//class circle//写了class就代表要设计类了 类后面跟的就是类的名称 circle表示圆
//	//属性和行为写在一起 才能表现意义 这里就是写在circle里面 所以是写在一起
//{
//	//访问权限public
//	//公共权限
//public:
//
//	//圆的属性  属性通常用变量
//	int r;//代表半径
//
//	//圆的行为：获取圆的周长  行为通常用函数
//	double calculate()//calculate表示周长
//	{
//		return 2 * Π * r;
//	}
//	//现在有类了 但是没具体的对象：圆   有了这个圆类 就能创建具体的圆
//};
//int main()
//{
//	circle c;//通过圆类创建具体的对象 
//	//实例化（通过一个类创建一个对象的过程
//	//给圆对象的属性进行赋值
//	c.r = 10;
//	cout << "周长是  " << c.calculate() << endl;//周长是62.8  当初创建了圆，属性赋值 再通过函数调用 属性赋值 最后返回
//	return 0;
//}