#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//�ṹ�尸��  ���һ��Ӣ�۽ṹ�� �������������䣬�Ա�   �����ṹ������ �����д��5��Ӣ��
//ͨ��ð��������㷨���������е�Ӣ�۰������������������ ���մ�ӡ������Ч��
//Ӣ����Ϣ
//{���� 23 ��}
//{���� 22 ��}
//{�ŷ� 20 ��}
//{���� 21 ��}
//{���� 19 Ů}


struct hero
{
	//����
	string name;
	int age;
	string sex;//sex��ʾ�Ա�
};
void bubbleSort(struct hero arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				int tmp = 0;
				tmp = arr[j + 1].age;
				arr[j + 1].age = arr[j].age;
				arr[j].age = tmp;
			}
		}
	}
}
void print(struct hero arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i].name << arr[i].age << arr[i].sex << endl;
	}
}
int main()
{
	//����������5��Ӣ��
	struct hero arr[5] = { {"����", 23, "��"},{"����" ,22, "��"} ,{"�ŷ�" ,20, "��"}, {"����" ,21, "��"}, {"����" ,19, "Ů"} };
	//���������ð������ �������������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz);
	//���������ӡ���
	print(arr, sz);
	return 0;
}