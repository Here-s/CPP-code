#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<math.h>




//ˮ�ɻ���  �����������nλ�� ����ÿ��λ�ϵ����ֵ�n�η�֮�͵���������  C������Ҳ����
int main()
{
	int a = 0;
	
	for (a = 0; a <= 100000; a++)
	{	int b = 1;//b�Ƕ���λ  ��Ϊÿ������Ҫ�� ����bҲҪÿ�α��1
		int d = a;//��a��ֵ��b ��Ϊ ����ĸı� ��ı�a ����a�������ı�
		int sum = 0;//ͬ�� ����
		//Ҫ�������λ ���Կ�����/10������ ���������1�Ļ���˵������һλ �����������0�Ļ� ��˵��ģ���� ����ʹ��whileѭ��
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