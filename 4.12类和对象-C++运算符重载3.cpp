#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//�����������������
//1 �������������()Ҳ��������
//2 �������غ�ʹ�õķ�ʽ�ǳ������ĵ��� ��˳�Ϊ�º���
//3 �º���û�й̶�д�����ǳ����

//��ӡ�����
class Print
{
public:
	//���غ������ò�����
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void Print02(string test)
{
	cout << test << endl;
}
void test01()
{
	Print print;
	print("byte");//����ʹ�÷ǳ������ں������� ��˳�Ϊ�º���
	Print02("dance");
}
//�º����ǳ���� û�й̶���д��
//�ӷ���
class Add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	Add add;
	int ret = add(2, 3);
	cout << ret << endl;

	//������������
	cout << Add()(3, 5) << endl;//���ʽǰһ�������ڴ����������� ������������������ ��������û��������
}
int main()
{
	//test01();
	test02();
	return 0;
}


//��ϵ���������
//���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���  ��Ϊ����������Ա�p1��p2������������ ��������
//class person
//{
//public:
//	person(string aname, int aage)
//	{
//		name = aname;
//		age = aage;
//	}
//	//���� == ��
//	int operator==(person &p)//��ΪҪ����p1��p2 ���Դ��ν���
//	{
//		if (this->name == p.name && this->age == p.age)//&&���ҵ���˼
//		{
//			return 1;
//		}
//		return 0;
//	}
//	int operator!=(person& p)
//	{
//		if (this->name == p.name && this->age == p.age)//&&���ҵ���˼
//		{
//			return 0;
//		}
//		return 1;
//
//	}
//	string name;
//	int age;
//};
//void test01()
//{
//	person p1("Tom", 18);
//	person p2("Jerry", 18);
//	//����==��
//	if (p1 == p2)
//	{
//		cout << "p1����p2" << endl;
//	}
//	else
//	{
//		cout << "p1������p2" << endl;
//	}
//	//����!=��
//	if (p1 != p2)
//	{
//		cout << "p1��  ����p2" << endl;
//	}
//	else
//	{
//		cout << "p1  ����p2" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}


//��ֵ���������
//C++���������ٸ�һ�������4������
//1 Ĭ�Ϲ��캯�����޲� ������Ϊ�գ�
//2 Ĭ�������������޲� ������Ϊ�գ�
//3 Ĭ�Ͽ������캯�� �����Խ���ֵ����
//4 ��ֵ����� operator=�������Խ��п���
//
//�������������ָ����� ����ֵ������ʱҲ�������ǳ��������

//class person
//{
//public:
//	person(int aage)
//	{
//		age = new int(aage);//ʹ��ָ��age��ά������ ���ݴ����ڶ��� Ҳ��Ҫ�ɳ���Ա�ֶ��ͷ� �������������ͷ�
//	}
//	//p1��p2������ռ� ����18�ĵ�ַ��0x0001 ����p1ָ��ľ���0x0001 ����ֵ��ʱ����ǽ���һ�ο��� ���ֽڿ��� �ѵ�ַ0x0001Ҳ������
//	//����p2ָ���Ҳ������ڴ� ��������ʱ���Ȱ�p2�ͷ� �ͷŵ�ʱ��Ͱ�p2���Ƶ�0x0001���ͷ��� ���ж�p1��ʱ�����ͷ���һ��
//	//�����͵��¶����ڴ��ظ��ͷ� ������� ��������ǣ�������� ���ǳ�������������� ������һ����ַ0x0002�����18 
//	//�����Լ�дһ���ȺŸ�ֵ����
//	~person()
//	{
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//	//���ظ�ֵ�����
//	person& operator=(person& p)
//	{
//		//�������ṩ����ǳ���� 
//		//age = p.age;
//		//Ӧ�����ж��Ƿ��������ڶ��� ����� ���ͷŸɾ���Ȼ�������
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//		//���ڽ������
//		age = new int(*p.age);//������ָ��ȥָ���µ��ڴ�ռ�  ���������Ĳ���
//		//���ض�����
//		return* this;//��Ϊָ�������ָ����thisָ�� ���Է��ؽ����þ��Ƿ���������
//	}
//	int* age;//ͨ��ָ�� ����ʵ�����ݿ��ٵ�����
//};
//void test01()
//{
//	person p1(18);
//	person p2(20);
//	person p3(30);
//	p3 = p2 = p1;//��ֵ���� ���ȱ�������Ϊ֮ǰ�ķ���ֵ��b ����ʹ����ʽ���˼�� ��ֵ��ֵ ���Ե����꺯��֮�� �ٷ�������
//	cout << *p1.age << endl;
//	cout << *p2.age << endl;
//	cout << *p3.age << endl;
//}
//int main()
//{
//	test01();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;//ȫ��10 
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;
//	return 0;
//}