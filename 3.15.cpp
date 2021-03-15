#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;



//数据的输入  输入函数是cin>>  类似于C语言当中的scanf
int main()
{
	int a = 0;
	cout << "对a赋值" << endl;
	cin >> a;//类似于scanf作用
	printf("%d\n", a);
	return 0;
}

//布尔类型 bool  只有两种值 true-真(1)  false-假(0)  占用1个字节
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(bool) << endl;
//	return 0;
//}

//字符串类型 
//1 沿用C语言的char类型  例如：char arr[256] = { 0 };
//2 C++风格  例如：string
//int main()
//{
//	//C语言风格
//	char arr[] = "byte dance";
//	cout << arr << endl;
//	//C++风格
//	string arr2 = "byte dance";
//	cout << arr2 << endl;//使用的时候要引头文件#include<string>
//	return 0;
//}

//常用的转义字符
//1 \n 换行 常用于C语言当中
//2 \t 水平制表
//3 \\ 代表一个反斜线字符
//int main()
//{
//	cout<<"\\"<<endl;
//	//2 \t 水平制表符   在输出窗口有对齐效果
//	cout << "aa\tbyte dance" << endl;//\t占八个位置 如何前面有三个a 那么就还有五个空格
//	cout << "aaaaa\tbyte dance" << endl;
//	cout << "aaa\tbyte dance" << endl;
//	cout << "aaaa\tbyte dance" << endl;
//	return 0;
//}

//字符 char 类型 一个字节 例如：char ch='a'; 只能用单引号 单引号只能写一个字母 因为只读取一个  内存中放的是ASCII码值 a的ASCII码值是97

//写小数也是使用float double 前者是4个字节 7位有效数字 后者是8个字节 15-16位有效数字
//默认情况下 输出一个小数，会显示6为有效数字
//int main()
//{
//	float f1 = 3.1415926f;//不加f的话 会默认是double类型 还得转换为float类型 加f的话 默认是f类型 所以
//	cout << "f1=" << f1 << endl;
//	double d1 = 3.1415926;
//	cout << "d1=" << d1 << endl;
//	cout << "double所占的空间为：" << sizeof(d1) << endl;
//	//科学计数法
//	float f2 = 3e2;//e后面是正数 所以这里的意思是  f2=3*10^2;
//	cout << "f2=" << f2 << endl;
//	float f3 = 3e-2;//e后面是负数 表示3*0.1^2
//	cout << "f3=" << f3 << endl;
//	return 0;
//}

//通过sizeof 来统计数据类型所占内存的大小 
//int main()
//{
//	short num1 = 10;
//	cout << "short所占的内存空间为：" << sizeof(num1) << endl;//这里放num1也可以统计出short的所占空间，因为创建num1变量的时候，就已经指定相应的数据类型了，所以也能求short
//	return 0;
//}

//标识符命名规则 
//1 标识符不能是关键字 例如：int int =10； 错误，因为int是关键字 所以语法错误
//2 标识符只能由字母 数字 下划线组成
//3 第一个字符必须为字母或下划线 不能是数字 例如：int a=10;  int asd=20;  int 123=10;(错误)语法错误 不符合命名规则
//4 标识符中字母区分大小写  变量的大写和小写是有区别的 否则会报错
