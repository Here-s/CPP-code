#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//�������� ���齫����д��ǰ�� �����Ͳ���������

//�����ĳ�����ʽ  1 �в��޷�(�ᴫ���������ǲ���Ҫ����)  2 �в��޷�  3 �޲��з�  4 �в��з�
int test4(int x)
{
	return 167;
}
int test3()
{
	return 100;
}
void test2(int a)
{
	a++;
	cout << a << endl;
}
void test()
{
	cout << "��ʽһ" << endl;
}
int main()
{
	test();//��ʽ1 
	int a = 0;
	test2(a);
	int b = 0;
	b=test3();
	cout << b << endl;
	int c = 134;
	int d = 0;
	d=test4(c);
	cout << d << endl;
	return 0;
}

//����   1 ���� 2 ������ 3 ����ֵ 4 ��������� 5 return���ʽ
//int Add(int x, int y)//�����x y���β� ����ʽ�ϵ�һ������  ���õ�ʱ��ʵ�ε�ֵ�ᴫ���β�
////�βθı��ʱ��Ӱ��ʵ������ֵ  Ҳ�����β���ʵ�λ���Ӱ�� 
//{
//	return x + y;
//}
//int main()//ʵ��һ���ӷ� ������������ ����� Ȼ�󷵻�
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	cin >> a;
//	cin >> b;
//	sum=Add(a, b);//�������� ������ֵ����sum
//	cout << sum << endl;
//	return 0;
//}

//��ά�����Ӧ�� 
//int main()//��λͬѧ   ���� ����100 ��ѧ100 Ӣ��100   ���� ����90 ��ѧ50 Ӣ��100
////���� ���� 60 ��ѧ70 Ӣ��80   �����λͬѧ���ܳɼ�
//{
//	int arr[3][3] = { 100,100,100,90,50,100,60,70,80 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{	
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}