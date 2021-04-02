#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define MAX 1000//通过宏定义最大为1000 也就是人数最大存1000
#include<string>


//通过c++写一个通讯录 需要实现的功能如下
//添加联系人  信息包括（姓名 性别 年龄 联系电话 家庭住址） 最多记录1000人
//显示联系人  显示通讯录中所有联系人的信息
//删除联系人  按照姓名删除指定联系人
//查找联系人  按照姓名查看联系人的信息
//修改联系人  按照姓名程序修改指定联系人
//清空联系人  清空通讯录中所有信息
//退出通讯录  退出当前使用的通讯录


//菜单页面
void menu()
{
	cout << "*************************" << endl;
	cout << "****** 1 添加联系人 *****" << endl;
	cout << "****** 2 显示联系人 *****" << endl;
	cout << "****** 3 删除联系人 *****" << endl;
	cout << "****** 4 查找联系人 *****" << endl;
	cout << "****** 5 修改联系人 *****" << endl;
	cout << "****** 6 清空联系人 *****" << endl;
	cout << "****** 0 退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}
struct people//联系人结构体
{
	string name;
	int sex;//性别 1 男   2 女
	int age;//年龄
	string phone;//手机号码
	string home;//家庭住址
};
struct book //通讯录结构体
{
	struct people arr[MAX];//通讯录中的联系人数组
	int count;//通讯录中人员个数
};
void Addpeople(struct book* arr)
{
	if (arr->count == MAX)
	{
		cout << "通讯录已满,无法添加" << endl;
	}
	else
	{
		//添加具体联系人   姓名   性别   年龄   电话   住址
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		arr->arr[arr->count].name = name;
		cout << "请输入性别：" << endl;
		cout << "1 代表男   2 代表女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				arr->arr[arr->count].sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		arr->arr[arr->count].age = age;
		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		arr->arr[arr->count].phone = phone;
		cout << "请输入地址" << endl;
		string home;
		cin >> home;
		arr->arr[arr->count].home = home;
		arr->count++;//因为存完一个人要了 所以人数要++
		cout << "添加成功" << endl;//添加完了要提示一下
		//添加成功之后 应该把屏幕清空 并且返回上一级 不然就会太乱
		system("pause");//这里是暂停  会显示请按任意键继续
		system("cls");//清屏操作
	}
}
//显示所有的联系人
void showpeople(struct book* arr)
{
	//判断当前通讯录当中有没有联系人 没有就提示：联系人为空，有就显示通讯录信息
	if (arr->count == 0)
	{
		cout << "当前的联系人为空" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < arr->count; i++)
		{
			cout << "姓名：" << arr->arr[i].name << "\t";
			cout << "性别：" << (arr->arr[i].sex == 1 ? "男" : "女") << "\t";//通过三目操作符来判定输出的性别 
			//通过括号来确定优先级
			cout << "年龄：" << arr->arr[i].age << "\t";
			cout << "号码：" << arr->arr[i].phone << "\t";
			cout << "地址：" << arr->arr[i].home << endl;
		}
	}
	system("pause");//这里是暂停  会显示请按任意键继续
	system("cls");//清屏操作
}
//删除联系人 ：先检测到联系人是否存在  封装删除联系人函数   测试删除的功能
//删除联系人之前 先判断用户输入的联系人是否存在，存在就删除，不存在就提示没有要删除的联系人 
//所以 可以将不存在返回为-1

//检测联系人是否存在 如果存在，返回联系人所在数组中的具体位置 如果不存在返回-1
int search(struct book* arr, string name)//这里是通讯录和传的姓名
{
	int i = 0;
	for (i = 0; i < arr->count; i++)
	{
		if (arr->arr[i].name == name)//找到用户要找的姓名了
		{
			return i;//返回下标 也就是第几个联系人
		}
	}
	return -1;//意思是全找了一遍 没找到 返回-1
}

//删除指定联系人
void del(struct book* arr)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = search(arr, name);//两种结果 不等于1  -1   -1代表没找到  不等于-1表示找到了
	if (ret != -1)
	{
		//找到这个人了  要进行删除
		//删除方式为：把这个人后面的数据向前移动 并且让通讯录中的人员数量-1就行了
		//移动应该在这个人后面一个一个移动
		int i = ret;
		for (i = ret; i < arr->count; i++)
		{
			//数据前移： 就是i数组中的数据 等于i+1数组中的数据
			arr->arr[i] = arr->arr[i + 1];
		}
		arr->count--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "没有找到这个人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人：按照姓名查看指定联系人的信息  如果联系人存在 就显示联系人信息 不存在就显示找不到此人
void find(struct book* arr)
{
	cout << "请输入要查找的联系人姓名" << endl;
	string name;
	cin >> name;
	//查找指定联系人是否存在通讯录中
	int ret = search(arr, name);
	if (ret != -1)//找到联系人
	{
		cout << "姓名：" << arr->arr[ret].name << "\t";
		cout << "性别：" << arr->arr[ret].sex << "\t";
		cout << "年龄：" << arr->arr[ret].age << "\t";
		cout << "号码：" << arr->arr[ret].phone << "\t";
		cout << "住址：" << arr->arr[ret].home << "\t";
	}
	else//没找到联系人
	{
		cout << "没找到这个人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人信息:查找用户输入的联系人 找到就执行修改操作  找不到就显示：未找到此联系人
void modify(struct book* arr)
{
	cout << "下面进行修改" << endl;
	cout << "请输入您要修改的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = search(arr, name);
	if (ret != -1)//找到的话   每个信息都可能修改
	{
		//姓名
		string name;
		cout << "请输入要更改的姓名：" << endl;
		cin >> name;
		arr->arr[ret].name = name;
		//性别
		cout << "请输入要更改性别" << endl;
		cout << " 1 代表男    2 代表女 " << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				arr->arr[ret].sex = sex;
				break;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		arr->arr[ret].age = age;
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		arr->arr[ret].phone = phone;
		//住址
		cout << "请输入住址" << endl;
		string home;
		cin >> home;
		arr->arr[ret].home = home;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "未找到此联系人" << endl;
	}
	system("pause");
	system("cls");
}

//清空联系人:将联系人数量变为0就行了 进行逻辑清空 因为这样的话访问不到联系人的信息，相当于清空
void empty(struct book* arr)
{
	arr->count = 0;//将记录的联系人数量置为0，进行逻辑上的清空操作
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//创建联系人信息
	struct book arr;//创建的通讯录结构体变量
	arr.count = 0;//把人员初始化为0
	int input = 0;
	do {
		menu();//创建目录
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "添加联系人" << endl;//添加的时候 要设置结构体 添加一个通讯录函数 测试功能
			Addpeople(&arr);//利用地址传递  这样就能修改实参
			break;
		case 2:
			cout << "显示联系人" << endl;//测试发现联系人信息显示在一行上面比较好 不然人多的话就很麻烦
			showpeople(&arr);
			break;
		case 3://当一个case语句中代码很长时 可以使用{}使其变成一个代码块 这样可以避免报错
		//{
			cout << "删除联系人" << endl;
			//	cout << "请输入删除联系人的姓名" << endl;
			//	string name;
			//	cin >> name;
			//	if (search(&arr, name) == -1)
			//	{
			//		cout << "没找到此联系人" << endl;
			//	}
			//	else
			//	{
			//		cout << "找到此人：" << endl;
			//	}
			//}通过代码发现查找没问题

				//删除联系人 查找到并删除联系人 提示删除成功   查不到提示：找不到这个人
			del(&arr);
			break;
		case 4:
			cout << "查找联系人" << endl;
			find(&arr);
			break;
		case 5:
			cout << "修改联系人" << endl;
			modify(&arr);
			break;
		case 6:
			cout << "清空联系人" << endl;
			empty(&arr);
			break;
		case 0:
			cout << "退出程序" << endl;
			break;
		default:
			cout << "选择错误，重新选择" << endl;
			break;
		}
	} while (input);
	return 0;
}