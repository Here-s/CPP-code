#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//����Ļ������*��ӡ����  ֻ�������в��ܴ�ӡ�����ͼ��  ��Ϊ�ϰ벿��7�� �°벿��6��
//�ϰ벿�ֵĹ�����ÿһ�пո��ڼ�С  *�������� �°벿�ֿո����� *����
int main()
{
	int line = 0;
	cin>>line;//7
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ÿһ�д�ӡ��Ϊ������ �ո��*
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)//��Ϊline��7 ���Ե�һ�д�ӡ6���ո�  i���� �ո�Ҫ���� ������
		{
			cout << " " ;
		}
		for (j = 0; j < 2 * i + 1; j++)//��һ�е�ʱ���ӡ1�� �ڶ��������� ������2*i+1
		{
			cout << "*" ;
		}
		cout << endl;
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)//��ӡ�ո� 
		{
			cout << " " ;
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//���ֹ��� �����ڼ��� * ��������*2-1
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}
