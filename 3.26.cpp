#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//�ṹ��  ͬC����
//struct����ṹ�����
//struct Stu//�����ǳ�Ա�б�   �������Զ���ṹ����  ��������
//{
//	string name;
//	int age;
//	int score;
//};
struct Stu//�����ַ�ʽ ˳�㴴����s3�ṹ�����
{
	string name;
	int age;
	int score;

}s3;
int main()//����һ���ṹ������  ��д��ʱ�����ʡ��struct 
{
	struct Stu s1;//ͨ��ѧ�����ʹ�������ѧ��
	//��һ�����ʹ�������ѧ��   ��һ�ֽṹ��
	//s1.name = "����"; //ͨ��һ���������ʽṹ������
	//s1.age = 18;
	//s1.score = 100;
	//cout << "������" << s1.name << s1.age << s1.score << endl;
	//struct Stu s2 = { "����",19,90 };//�ڶ���  ���ڵ�����
	//cout << s2.name << s2.age << s2.score << endl;
	//�����֣��ڴ����ṹ���ʱ��˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 24;
	s3.score = 80;
	cout << s3.name << s3.age << s3.score << endl;
	return 0;
}

//ָ�� ���� ����
//void bubbleSort(int* arr,int sz)//������ĵ�ַ������  ��ָ�봫��
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()//��װһ������ ����ð������ ʵ�ֶ������������������
//{
//	int arr[] = { 1,3,6,2,8,7,4,9,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr,sz);//������  ��ʣ��ӡ
//	print(arr, sz);
//	return 0;
//}