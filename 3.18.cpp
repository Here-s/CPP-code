#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<ctime>
using namespace std;




//��������Ϸ ͨ��cppʵ��
void menu()
{
	cout << "��������Ϸ����ʼ��ѡ��1���˳���ѡ��0"<<endl;
}

void game()
{
	int d = 0;
	d = rand() % 100;
	int b = 0;
		cout << "��Ϸ��ʼ���������" << endl;
	while (1)
	{

		scanf("%d", &b);
		if (d == b)
		{
			cout << "��ϲ�㣬�¶���" << endl;
			break;
		}
		else if (d > b)
		{
			cout << "��С��" << endl;
		}
		else
		{
			cout << "�´���" << endl;
		}
	}
}
int main()
{//������ ����ÿ�����������һģһ��  ����Ӧ���޸� ʹÿ�ζ���һ�� ����ʹ��ʱ������������� 
	srand((unsigned int)time(NULL));//��ͷ�ļ�#include<ctime>
	int a = 0;
	do
	{
		menu();
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			cout << "��Ϸ��ʼ" << endl;
			game();
			break;
		case 0:
			cout << "�˳���Ϸ" << endl;
			break;
		default:
			cout << "ѡ���������ѡ��" << endl;
			break;
		}
	} while (a);//��Ϊ��0�Ļ� Ϊ�� ���˳�ѭ��
	return 0;
}

//do while��� ��ִ��һ��ѭ����� ���ж�ѭ������ Ҫ������ͼ���ѭ���������˳�ѭ��
//int main()
//{
//	int a = 0;
//	do
//	{
//		cout << a << endl;
//		a++;
//	} while (a < 1000);
	//do
	//{
	//	cin >> a;
	//	cout << a << endl;
	//} while (a);//������0��ʱ����Ϊ�� ����ѭ��
//	return 0;
//}

//while ѭ�� ֻҪ�ж�Ϊ�� �ͻ�һֱִ�� Ϊ�� ������ѭ��
//int main()//����Ļ�ϴ�ӡ0-9������
//{
//	int a = 0;
//	while (a <= 8)//��Ϊ���±� ������<=8
//	{
//		a++;
//		cout << a << endl;
//	}
//	return 0;
//}

//switch��� ͬC����   ֻ�������ͻ��ַ� ����������
//switch(���ʽ)�õ��Ľ��Ϊ1 ��ִ��case1  Ϊ2 ��ִ��case2  ����default ����֮ǰ�İ�����û���� ��ִ�����  break �������
//int main()
//{
//	int a = 0;
//	cout << "�����Ӱ����" << endl;
//	cin >> a;
//	switch (a)
//	{
//	case 10:
//		cout << "���Դ˵�Ӱ����������" << endl;
//		break;//�������
//	case 9:
//		cout << "���Դ˵�Ӱ����������" << endl;
//		break;
//	default:
//		cout << "��л����" << endl;
//		break;
//	}
//	return 0;
//}
