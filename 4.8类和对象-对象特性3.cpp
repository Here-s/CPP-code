#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//��̬��Ա
//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
//��̬��Ա��Ϊ
//
//  ��̬��Ա����
//	���Զ�����ͬһ������
//	�ڱ���׶η����ڴ�
//	�������� �����ʼ��

//  ��̬��Ա����
//	���ж�����ͬһ������
//	��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
	//��̬��Ա����
	static void fun()
	{
		a = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//b = 200;//�ᱨ�� ��Ϊ���Ǿ�̬��Ա���� ��̬��Ա���������Է��ʷǾ�̬��Ա����
		//��Ϊ������������� ���ֲ���b�����Ա �޷����ֵ������ĸ������b
		//��̬��Ա�����Ƿ���ȫ������ �Ǿ�̬��Ա�����Ƿ��ڶ����� ���ܷ��ʶ���
		cout << "static void fun �ĵ���" << endl;
	}
	static int a;//��̬��Ա���� �ص㣺�������� �����ʼ��
	int b;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void fun2()
	{
		cout << "static void fun2 �ĵ���" << endl;
	}
};
int person::a = 10;
void test01()
{
	//1 ͨ���������
	person p;
	p.fun();
	//2 ͨ����������
	person::fun();//���е���˼�� person�������µ�fun����
	//person::fun2();//���ܵ���������� ��Ϊ��˽�е�������   ������ʲ���˽�еľ�̬��Ա����
}
int main()
{
	test01();
	return 0;
}


//�������Ϊ���Ա
//C++���г�Ա����������һ����Ķ������ǳƸó�ԱΪ �����Ա
//class A{};
//class B//B���ж���A��Ϊ��Ա��AΪ�����Ա  ������B����ʱ A��B�Ĺ����������˳����  �ȹ���A
//������ �����и첲 ֮��� ����������
//{
//	A a;//A�Ķ���a������B�ĳ�Ա
//};

//�ֻ���
//class Phone
//{
//public:
//	Phone(string apname)
//	{
//		pname = apname;
//		cout << "phone�Ĺ��캯������" << endl;
//	}
//	~Phone()
//	{
//		cout << "phone�����������ĵ���" << endl;
//	}
//	string pname;
//};
////����
//class person
//{
//public:
//	//Phone phone=pname ��ʽת����
//	person(string aname, string pname):name(aname),phone(pname)
//	{
//		cout << "person�Ĺ��캯������" << endl;
//	}
//	~person()
//	{
//		cout << "person�����������ĵ���" << endl;
//	}
//	//����
//	string name;
//	//�ֻ�
//	Phone phone;//���ֻ�Ҳ�����һ����
//	
//};
////�������������Ϊ�����Ա������ʱ���ȹ�������ٹ�������
////����˳���� ���������� ����������  �͹������෴��
//void test01()
//{
//	person p("���� ", "8848�ѽ��ֻ�");
//	cout << p.name << p.phone.pname << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


//��ʼ���б�
//���ã�C++�ṩ�˳�ʼ���б��﷨��������ʼ������
//�﷨�����캯��()������1(ֵ1),����2(ֵ2)��{}

//class person
//{
//public:	
//	//��ͳ�ĳ�ʼ������
//	//person(int aa, int ab, int ac)
//	//{
//	//	a = aa;
//	//	b = ab;
//	//	c = ac;
//	//}
//
//	//��ʼ���б��ʼ������
//	person(int aa,int ab,int ac) :a(aa), b(ab), c(ac)//���� ���ҳ�ʼ��  Ҫע��ð�� ð�ź���д���� ֵ
//	{
//
//	}
//	int a;
//	int b;
//	int c;
//};
//void test01()
//{
//	//person p(10, 20, 30);
//	person p(30, 20, 10);//������������ͬʱ �ͽ��г�ʼ����
//	cout << p.a << p.b << p.c << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}