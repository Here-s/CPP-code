#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//��ά����������  ͬC����  ͨ�����������Բ鿴ռ���ڴ�ռ�  ��ȡ��Ԫ�صĵ�ַ
int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	cout << "��ά������ռ�Ŀռ��СΪ " << sizeof(arr) << endl;
	&arr;//�����ǵ�һ�� ��һ��Ԫ�صĵ�ַ
	arr[1][0];//�����ǵڶ��е�һ��Ԫ�صĵ�ַ
	cout << "���� " << sizeof(arr) / sizeof(arr[0]) << endl;//��ȡ����
	cout << "���� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//��ȡ����
	return 0;
}

//��ά���� ͬC����  ������[����][����]  ��������ʡ�� ����������
//int main()
//{
//	int arr[2][3];//�������е�����1
//	arr[0][0] = 1;//��ֵ���� Ҳ��������ֵ int arr[2][3]={{1,2,3},{4,5,6}};
//	arr[0][1] = 2; 
//	arr[0][2] = 3;
//	arr[1][0] = 4;  
//	arr[1][1] = 5;
//	arr[1][2] = 6;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//ð������  
//int main()//�������� ʹ����С��������
//{
//	int arr[] = { 2, 5, 9, 8, 1, 6, 3, 7, 4, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)//������sz-1��
//	{
//		int j = 0;
//		for (j = 0; j < sz - i -1; j++)//�ڲ�����
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

//������Ԫ������  ����ǰ�󽻻�  12345  ���54321
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//	for (a = 0; a < 5; a++)
//	{
//		cout << arr[a] << endl;
//	}
//	return 0;
//}

//int main()//����ֻС�������  ��ӡ���ص�һֻ����Ļ����
//{
//	int arr[5] = { 110,123,46,234,575 };//����������
//	int max = 0;//�Ȱ����ֵ��Ϊ0��Ȼ����һ��һ������
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{	
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}