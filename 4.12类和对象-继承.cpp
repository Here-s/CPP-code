#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//�̳з�ʽ
//�̳е��﷨��class ���ࣺ�̳з�ʽ ����

//�̳�һ�������ַ�ʽ�� �����ڼ̳е�ʱ��ķ�ʽ��һ�� 
//1 �����̳�
//2 �����̳�
//3 ˽�м̳�

//�����е�˽�е� ���������ּ̳еķ�ʽ�����ܷ���   �����й����� ����������Ȼ�ǹ�����
//�����б��������� ����������Ȼ�Ǳ���������  ����ķ���Ȩ���������в���

//����Ǳ����̳� �����й���Ȩ���������б���˱���Ȩ�� ����˽�����ݷ��ʲ��� ʣ�µ�ȫ����˱���Ȩ��
//����Ǳ����̳� �����й���Ȩ�޺ͱ���Ȩ���������б����˽��Ȩ�� ����˽�����ݷ��ʲ��� ʣ�µ�ȫ�����˽��Ȩ��
class base1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
//�����̳�
class son1 :public base1
{
	void fun()
	{
		a = 10;//û���� ˵�������еĹ���Ȩ�� ����������Ȼ�ǹ���Ȩ��
		b = 20;//û���� �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//c = 30;//��������Ϊ �����е�˽��Ȩ�� �������Ƿ��ʲ�����
	}
};
void test01()
{
	son1 s;
	s.a = 100;//������  ��Ϊ�����໹�ǹ���Ȩ�� ����Ȩ�޵��ص�����������ⶼ�ܷ��� 
	//s.b = 200;//���� ��Ϊ����̳еı���Ȩ������ ���ڿ��Է��� ���ⲻ�ܷ���
}
//�����̳�
class base2
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class son2 :protected base2
{
public:
	void fun()
	{
		a = 100;//�����еĹ�����Ա �������б�Ϊ����Ȩ��
		b = 100;//�����еı�����Ա �������б�Ϊ����Ȩ��
		//c = 100;//��������Ϊ �����е�˽�г�Ա ������ʲ���
	}
};
void test02()
{
	son2 s1;
	//s1.a = 1000;//��������Ϊ��son2�������Ǳ���Ȩ�� ������ʲ���
	//s1.b = 100;//��������Ϊ��son2������Ҳ�Ǳ���Ȩ�� ������ʲ���
}
//˽�м̳�
class base3
{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class son3 :private base3
{
public:
	void fun()
	{
		a = 100;//�����еĹ�����Ա �������б�Ϊ˽��Ȩ��
		b = 100;//�����еĹ�����Ա �������б�Ϊ˽��Ȩ��
		//c = 100;//������ ��Ϊ������˽�еĳ�Ա ������ʲ���
	}
};
void test03()
{
	son3 s1;
	//s1.a = 1000;//��������Ϊ��son2��������˽��Ȩ�� ��Ϊ˽�г�Ա ������ʲ���
	//s1.b = 1000;//��������Ϊ��son2��������˽��Ȩ�� ��Ϊ˽�г�Ա ������ʲ���
}
class grandson3 :public son3
{
public:
	void fun()
	{
		//a = 1000;//��Ϊ������˽�е�Ȩ�� ��������Ҳ���ʲ���
		//b = 1000;//��Ϊ������˽�е�Ȩ�� ��������Ҳ���ʲ���
	}
};
int main()
{
	return 0;
}



//�̳�
//�̳�������������������֮һ
//��Щ�����ֱ�Ӵ�������Ĺ�ϵ ���� �������è�͹� è�ְ����ܶ����� ��Ҳ�����ܶ�����

//�ڶ�����Щ���ʱ�� �¼���ĳ�Ա����ӵ����һ���Ĺ��� �����Լ�������
//���ʱ�����ǾͿ��Կ��Ǽ̳е����� �����ظ�����

//�̳еĻ����﷨ 
//�ܶ����ҳ���й�ͬ��ͷ�� �ײ� ��������������б� ֻ���������ݲ�һ��
//�������ֱ�����ͨд���ͼ̳�д��ʵ����ҳ�е����� ����̳еĺô�������

//�̳�ʵ��ҳ��  �ô��Ǽ����ظ�������
//�﷨��class ���ࣺ�̳з�ʽ(public:) ����(basepage)
//����Ҳ��Ϊ������  ����Ҳ��Ϊ����
//class basepage//����ҳ���� �ͻ�д������ͷ β ���
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᣬ��������������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�������������ҵ�����������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��c��c++��python�����������������������б�" << endl;
//	}
//};
/////Javaҳ��
//class java :public basepage//��������ù��� �Ϳ���ʹ�ù�ͬ����
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//
//};
////pythonҳ��
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "pythonѧ����Ƶ" << endl;
//	}
//
//};
////C++ҳ��
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//
//};
//void test01()
//{
//	cout << "Javaҳ������" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << endl;
//	cout << "pythonҳ������" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << endl;
//	cout << "C++ҳ������" << endl;
//	cpp c;
//	c.header();
//	c.footer();
//	c.content();
//	c.left();
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}




//��ͨʵ��ҳ��
//Javaҳ��
//class java//���ֺö඼���Ը��� ���������Ļ� �ͻ���� ���Ծ�ʹ�ü̳еķ�ʽȥд
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᣬ��������������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�������������ҵ�����������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��c��c++��python�����������������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ ��MySQL���ݿ�" << endl;
//	}
//};
////pythonҳ�� ��ȫ���Ը������������
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᣬ��������������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�������������ҵ�����������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��c��c++��python�����������������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "pythonѧ����Ƶ " << endl;
//	}
//};
////C++ҳ�� Ҳ���Ը���
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᣬ��������������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�������������ҵ�����������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��c��c++��python�����������������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ " << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Javaҳ������" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << endl;
//	cout << "pythonҳ������" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << endl;
//	cout << "C++ҳ������" << endl;
//	cpp c;
//	c.header();
//	c.footer();
//	c.content();
//	c.left();
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}