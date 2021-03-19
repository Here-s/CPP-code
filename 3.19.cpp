#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<math.h>




//水仙花数  就是这个数是n位数 它的每个位上的数字的n次方之和等于它本身  C语言中也做过
int main()
{
	int a = 0;
	
	for (a = 0; a <= 100000; a++)
	{	int b = 1;//b是多少位  因为每个数都要算 所以b也要每次变成1
		int d = a;//将a赋值给b 因为 下面的改变 会改变a 但是a不能随便改变
		int sum = 0;//同理 所以
		//要求出多少位 所以可以用/10来处理 如果不等于1的话就说明还有一位 所以如果等于0的话 就说明模完了 所以使用while循环
		while (d /= 10)
		{
			b++;
		}
		d = a;
		while (d)
		{
			sum += pow(d % 10, b);
			d /= 10;
		}
		
		if (a == sum)
		{
			cout << a << endl;
		}
	}
	return 0;
}