#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;




//�Ӻ����������
class person
{
public:
	//��Ա��������+��
	//person operator+(person& p)
	//{
	//	person tmp;
	//	tmp.a = this->a + p.a;
	//	tmp.b = this->b + p.b;
	//	return tmp;
	//}
	int a;
	int b;
};

//ȫ�ֺ�������+��
person operator+(person& p1, person& p2)
{
	person tmp;
	tmp.a = p1.a + p2.a;
	tmp.b = p1.b + p2.b;
	return tmp;
}

//�������صİ汾
person operator+(person& p1, int num)
{
	person tmp;
	tmp.a = p1.a + num;
	tmp.b = p1.b + num;
	return tmp;
}
void test01()
{
	person p1;
	person p2;
	p1.a = 10;
	p1.b = 20;
	p2.a = 10;
	p2.b = 20;
	//��Ա�������ر��ʵ��ã�person p3=p1.operator+(p2); ��Ϊ person p3 = p1 + p2;
	person p3 = p1 + p2; 
	//ȫ�ֺ������ر��ʵ���
	//person p3 = operator+(p1, p2) ��Ϊ person p3 = p1 + p2;

	//��������� Ҳ���Է�����������
	person p4 = p1 + 100;//�൱��person+int ������Ҳ��֪����ô��
	cout << p3.a << endl;
	cout << p3.b << endl;
	cout << p4.a << endl;
	cout << p4.b << endl;
}
int main()
{
	test01();
	return 0;
}


//���������
//��������ظ�������е���������½��ж��� ����������һ�ֹ��� ����Ӧ��ͬ����������

//�Ӻ����������
//���ã�ʵ�������Զ�������������ӵ�����

//�������õ��������� ������֪����ν������� 
//int a = 10;  int b = 10;  int c = a + b;  c = 20;
//class person
//{
//public:
//	int a;
//	int b;
//};

//void test01()
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 20;
//	person p2;
//	p2.a = 10;
//	p2.b = 20;
//	person p3 = p1 + p2;//��������Ϊ��������֪����ô��������
//}

//ͨ���Լ�д��Ա������ʵ����������������Ժ󷵻��µĶ���
//person addperson(person& p)
//{
//	person tmp;
//	tmp.a = this->a + p.a;
//	tmp.b = this->b + p.b;
//	return tmp;
//}

//ͨ��ȫ�ֺ�������+   
//person operator+(person& p1, person& p2)
//{
//	person tmp;
//	tmp.a = p1.a + p2.a;
//	tmp.b = p1.a + p2.b;
//	return tmp;
//}
//person p3 = operator+(p1, p2) ��Ϊ person p3 = p1 + p2;

//������������һ��ͨ�����ƣ�operator+    person p3=p1.operator+(p2). ��Ϊ: person p3=p1+p2;
//ͨ����Ա��������+��
//person operator+(person& p)
//{
//	person tmp;
//	tmp.a = this->a + p.a;
//	tmp.b = this->b + p.b;
//	return tmp;
//}
//int main()
//{
//	return 0;
//}