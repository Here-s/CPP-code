#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型：istream& read(char* buffer, int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读取的字节数

class person
{
public:
	char name;
	int age;
};
void test01()//二进制读文件
{
	//包含头文件 #include<fstream>
	//创建流对象
	ifstream ifs;
	//打开文件 判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	//读文件
	person p;
	ifs.read((char*)&p, sizeof(person));
	cout << p.name << p.age << endl;//虽然文件中有乱码，但是读出来还是正常的
	//关闭文件
	ifs.close();
}
int main()
{
	test01();
	return 0;
}