#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//在屏幕上面用*打印菱形  只有奇数行才能打印出这个图案  分为上半部分7行 下半部分6行
//上半部分的规律是每一行空格都在减小  *都在增加 下半部分空格增加 *减少
int main()
{
	int line = 0;
	cin>>line;//7
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//将每一行打印分为两部分 空格和*
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)//因为line是7 所以第一行打印6个空格  i增加 空格要减少 所以是
		{
			cout << " " ;
		}
		for (j = 0; j < 2 * i + 1; j++)//第一行的时候打印1个 第二行是三个 所以是2*i+1
		{
			cout << "*" ;
		}
		cout << endl;
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)//打印空格 
		{
			cout << " " ;
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//发现规律 倒数第几行 * 就是行数*2-1
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
