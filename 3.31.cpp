#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


int num(int a)
{
	int count = 0;//利用按位与 例如13 1101  12 1100 按位一次 得到1100 少了一个1 
	//11  1011再按位与1100 变成1000 发现按位两次少了两个1  再-1变成0111 继续按位与
	//发现变成0了 按位与了三次 变成了0000 少了三个1 所以可得 按位几次 就会有几个1
	while (a)
	{
		a&= (a - 1);
		count++;
	}
	return count;
}
//int num(int a)//可以考虑按位与  两个数相同时 结果为1 不相同则为0  所以按位与1 有几个1 二进制中就有几个1
////因为要一个一个位的按位与 所以是从1开始按位 所以重新定义一个变量i来按位与
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a>>i) & 1) == 1)//每次a向右移动一个二进制位 所以就可以一直按位与 负数也可以
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int num(unsigned int a)//因为会是负数 所以变成无符号数
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)//因为模2的话 结果只能是0 1  且内存中存的是补码 所以直接模就行了  
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
int main()//统计二进制数字中1的个数   以前谷歌的笔试题
{
	int a = 0;
	int count = 0;
	cin >> a;
	count = num(a);
	cout << count << endl;
	return 0;
}
