#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;





int main()//��ӡ�˷��ھ���
{
	int a = 1;
	int c = 0;
	cin >> c;
	for (a = 1; a <= c; a++)
	{
		int b = 1;
		for (b = 1; b <= a; b++)//��Ϊÿ��ѭ������b�ڱ�� ��for֮����ǻ��� ������b��ǰ��
		{
			cout << b << "*" << a << "=" << a * b << "\t";
		}
		cout << endl;
	}
	return 0;
}

//��ӡ֮ǰɨ�׵����� 10*10
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			cout << "* ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main()//�Ż�֮��� ������� ���Ҳ������ظ���
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 7 || a / 10 == 7 || a % 7 == 0)//||�߼������˼
//		{
//			cout << a << endl;
//		}
//	}
//	return 0;
//}

//forѭ�� ��C����һ��
//int main()//1-100 ���ָ�λ��ʮλ����7 ������7�������� �ʹ�ӡ����
////���������1-100������ Ȼ�����ҳ������
//{
//	int a = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if(a % 10 == 7)//����Ǹ�λ
//		{
//			cout << a << endl;
//		}
//		if (a / 10 == 7)
//		{
//			cout << a << endl;
//		}
//		if (a % 7 == 0)
//		{
//			cout << a << endl;
//		}//�����Ż�  �Ż�����
//	}
//	return 0;
//}