#include<iostream>
using namespace std;
#include<fstream>
#include<string>


//读文件
//读文件与写文件不走相似，但是读取方式相对于比较多
//
//读文件步骤如下
//1 包含头文件
//#include<fstream>
//2 创建流对象
//ifstream ifs;
//3 打开文件并判断文件是否打开成功
//ifs.open("文件路径", 打开方式)
//4 读数据
//四种方式读取
//5 关闭文件
//ifs.close();

void test01()
{
	//创建流对象
	ifstream ifs;
	//打开文件并判断文件是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;//打开失败可能是文件名不对，路径不对
		return;
	}
	//读数据
	//第一种读取方式
	//char arr[1024] = { 0 };//把文件内容放在字符数组中
	//while (ifs >> arr)//利用右移操作符 把数据放在arr当中
	//{
	//	cout << arr << endl;
	//}

	//第二种读取方式
	//char arr[1024] = { 0 };
	//while (ifs.getline(arr, sizeof(arr)))//getline 是获取一行数据 传入arr 要知道arr的数组大小
	//{
	//	cout << arr << endl;
	//}
	////关闭文件

	//第三种读取方式
	//string arr;//把所有数据放在C++中
	//while (getline(ifs,arr))//这次的getline是全局函数  输入流对象是ifs  还有准备好的arr
	//{
	//	cout << arr << endl;
	//}

	//第四种读取方式
	char c;//把文件的数据一个一个读
	while ((c = ifs.get()) != EOF)//将读到的文件放到字符c当中  !=EOF意思是:如果没有读到文件尾
	//EOF 意思是 end and of file 就是文件尾
	{
		cout << c;//效率低
	}
	ifs.close();
}
int main()
{
	test01();//屏幕上面没有输出东西 说明是成功打开文件
	return 0;
}