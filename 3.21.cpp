#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//һά����������  ͬC����
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	sizeof(arr);//ͳ������ĳ���  ������������� ���arr������Ϸ����� �����������±� ������ĳ��Ԫ�صĴ�С
	cout << sizeof(arr) << endl;
	cout << arr << endl;//�����Ǵ�ӡ��ַ 16����
	return 0;
}

//����  ����һ���������ڴ�ռ���  ͬC����  �������±�
//int main()
//{
//	//int arr[5] = { 0 };
//	//arr[0] = 1;
//	int a = 0;
//	int arr[3] = { 1,2,3 };//Ҳ�����ڷ���������ɶҲ��д
//	for (a = 0; a < 3; a++)
//	{
//		cout << arr[a] << endl;
//	}
//	return 0;
//}

//goto ���  ��������ת���  ��C���Ե��еĹػ�����
//int main()
//{
//	cout << "a" << endl;
//	cout << "b" << endl;
//	goto object;
//	cout << "c" << endl;
//	cout << "d" << endl;
//	cout << "e" << endl;
//	object:
//	cout << "f" << endl;
//	return 0;
//}

// continue ���  ��������ѭ����δִ�е���� ����ִ����һ��ѭ��
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 10; a++)
//	{
//		cout <<a;
//		if (a == 5)
//		{
//			continue;//���������һ�д��� ���ǲ�������ѭ��
//		}
//		cout << a << endl;
//	}
//	return 0;
//}

//break ����ѡ�����ѭ���ṹ
//1 ��switch�� ��ֹcase ����switch 
//2 ����ѭ��
//3 Ƕ����� ����������ڲ�ѭ��
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 10; a++)
//	{
//		int b = 0;
//		for (b = 0; b <= 10; b++)
//		{	
//			if (b == 5)
//			{
//				break;
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100; a++)
//	{
//		cout << a << endl;
//		if (a == 50)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int main()//switch
//{
//	int a = 0;
//	cin >> a;
//	switch (a)
//	{
//	case 0:
//		cout << "�˳�" << endl;
//		break;
//	case 1:
//		cout << "1" << endl;
//		break;
//	case 2:
//		cout << "2" << endl;
//		break;
//	default:
//		cout << "����" << endl;
//		break;
//	}
//	return 0;
//}