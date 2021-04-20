#include<iostream>
using namespace std;
#include<fstream>



//二进制文件
//以二进制的方式对文件进行读写操作
//打开方式要指定为 ios::binary
//
//写文件
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型 : ostream & write(const char* buffer, int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数

class person
{
public:
	char name[52];
	int age;
};
void test01()
{
	//包含头文件  #include<fstream>
	//创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);//也可以在创建的时候 确定操作方式
	//打开文件
	//ofs.open("person.txt", ios::out | ios::binary);//用二进制的方式去写文件
	//写文件
	person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(person));
	//关闭文件
	ofs.close();
}
int main()
{
	test01();//输出的txt文件在这个解决方案目录下面  但年龄是乱码  但是可以用二进制方式读回来
	return 0;
}