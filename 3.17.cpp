#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//��Ŀ������  ���ʽ1�����ʽ2�����ʽ3  ������ʽ1��ֵΪ�� ��ִ�б����2 ����ִ�б��ʽ3 ��������صĽ��     ͬC����
int main()
{
	int a = 0;
	int b = 0;
	cin >> a;
	cin >> b;
	a > b ? cout << "as" << endl: cout << "aa" << endl;
	(a > b ? a : b) = 100;//��ֵ���� ��������ִ�еı��ʽ
	cout << "a=" << a << endl;
	return 0;
}

//����ֻС������� ����������ص�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "���ص���a" << endl;
//		}
//		else
//		{
//			cout << "���ص���c" << endl;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			cout << "���ص���b" << endl;
//		}
//		else
//		{
//			cout << "���ص���c" << endl;
//		}
//	}
//	return 0;
//}

//int main()//ifǶ��
//{
//	int line = 0;
//	cout << "�������õĴ�������" << endl;
//	cin >> line;
//	if (line >= 30000)
//	{
//		cout << "���ڼ����ܽ���Ĺ�˾" << endl;
//		if (line >= 80000)
//		{
//			cout << "byte dance" << endl;
//		}
//		else if (line >= 50000)
//		{
//			cout << "bat offer" << endl;
//		}
//		else
//			cout << "��offer" << endl;
//	}
//	else if(line>20000)
//	{
//		cout << "��������" << endl;
//	}
//	else
//	{
//		printf("�����");
//	}
//	return 0;
//}

//����ṹ��˳��ṹ ��˳��ִ��   2 if�ж����   3 ѭ�����      ͬC����
//int main()//if���
//{//�����û�����һ���������� ����30000  ��offer  ����  ��������
//	int line = 0;
//	cout << "�������������:" << endl;
//	cin >> line;
//	cout << "����������ǣ�" << line << endl;
//	if (line >= 30000)
//	{
//		cout << "��offer" << endl;
//	}
//	else if(line>20000)
//	{
//		cout << "��������" << endl;
//	}
//	else
//	{
//		printf("�����");
//	}
//	return 0;
//}