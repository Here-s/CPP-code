#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>



//�ṹ��ָ�룺ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�����->����ͨ���ṹ�����ָ��ṹ�������
struct Stu
{
	string name;
	int age;
	int score;
};
int main()
{
	//����ѧ���Ľṹ�����
	struct Stu s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	struct Stu* p = &s;//�ṹ����struct Stu ������������ָ�����;Ϳ�����  struct����ʡ��
	cout << p->name << p->age << p->score << endl;
	return 0;
}

//�ṹ������  ���Զ���Ľṹ����������з���ά��
//�﷨��struct �ṹ���� ������[Ԫ�ظ���]={ {}��{}��{}����{} }
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()//�ṹ������ �ȶ���һ���ṹ�� �ٴ����ṹ������ �ٸ��ṹ�������е�Ԫ�ظ�ֵ 
////�������ṹ������
//{
//	struct Stu arr[3] = { {"����",18,100},{"����",19,90},{"����",20,80} };
//	arr[2].name = "�ֽ�";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		cout << arr[i].name   << arr[i].age   << arr[i].score   << endl;
//	}
//	return 0;
//}