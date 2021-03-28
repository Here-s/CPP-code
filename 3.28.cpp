#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<ctime>//使用系统时间函数要引的头文件



//结构体案例
//学校正在做毕设项目 每名老师带5个学生 总共有3名老师，需求如下
//设计学生和老师的结构体，在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名，考试分数 创建数组存放3名老师，通过函数给每个老师的学生赋值
//最终打印出老师数据以及老师所带的学生的数据
//实现方法类似于层次结构 老师在上面 下面是五个学生
struct Stu
{
	string name;
	int age;
	int score;
};
struct teach
{
	string tname;//表示teacher name
	struct Stu sarr[5];
};
void allocateSpace(struct teach tarr[5],int len)//开辟空间 给老师和学生赋值操作  因为要对数组操作 所以要知道数组长度
{
	int i = 0;
	//给老师赋值
	string nameSeed = "ABCDE";
	for (i = 0; i < len; i++)
	{
		tarr[i].tname = "teacher_";
		tarr[i].tname += nameSeed[i];//老师姓名的赋值
		//通过循环给每名老师带的学生赋值
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			tarr[i].sarr[j].name = "student_";
			tarr[i].sarr[j].name += nameSeed[j];
			int byte = rand() % 60 + 40;
			tarr[i].sarr[j].score = byte;
		}
	}
}
void print(struct teach tarr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << tarr[i].tname << endl;
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			cout << tarr[i].sarr[j].name << tarr[i].sarr[j].score << endl;
		}
	}
}
int main()
{
	//随机数来源
	srand((unsigned int)time(NULL));//要引头文件 #include<ctime>
	//创建三名老师的数组
	struct teach tarr[3];
	//通过函数给三名老师的信息赋值，并给老师带的学生赋值
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocateSpace(tarr, len);
	//打印所以老师及所带学生的信息
	print(tarr, len);
	return 0;
}

//结构体中const使用场景
//作用 通过const来防止误操作
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(const Stu* s)//值传递  不会修改main中的内容  但是会将数据拷贝 数据内容非常大 所以使用指针
////使用指针只占4个字节  将形参指向指针 就可减少内存空间 而且不会复制新的副本出来
//{
//	//因为是指针传递 所以有隐患 因为这里如果不小心改了值 那么主函数的值也会被修改 所以在接收参数的时候使用const
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct Stu s = { "张三",20,100 };
//	//通过函数打印结构体变量的信息
//	printStu(&s);
//	return 0;
//}

//结构体做函数参数  讲结构体作为参数向函数中传递
//传递方式有两种    1 值传递    2 地址传递
//结构体做函数参数 将学生传入一个参数中 打印学生身上的所有信息
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(struct Stu s)// 1 值传递    
//{
//	cout << s.age << s.name << s.score << endl;
//}
//void printStu1(struct Stu* s)// 2 地址传递
//{
//	s->age = 25;
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct Stu s = { "张三",20,90 };
//	//cout << s.age << s.name << s.score << endl;
//	//printStu(s);//传递方式有两种    1 值传递    2 地址传递
//	printStu1(&s);
//	cout << s.age << s.name << s.score << endl;//通过指针修改参数 主函数中的值也会变
//	return 0;
//}

//结构体嵌套结构体  就是结构体中的成员可以是另外一个结构体
//比如 老师是一个结构体 老师的结构体中记录每个学生 
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Stu s;//这个学生结构体 应该定义在老师前面 这样就不用声明
//};
//int main()
//{
//	teacher t;//代表老师
//	t.id = 12345;
//	t.name = "张三";
//	t.age = 50;
//	t.s.name = "李四";//t.s是定义老师包括的属性 也就是学生
//	t.s.age = 20;
//	t.s.score = 60;
//	cout << t.id << t.name << t.age << endl;
//	cout << t.s.age << t.s.name << t.s.score << endl;
//	return 0;
//}