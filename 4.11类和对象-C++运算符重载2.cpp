#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//�������������  ++
//���ã�ͨ�����ص����������ʵ���Լ�����������

//�Զ�������
class integer
{
	friend ostream& operator<<(ostream& cout, integer aint);
public:
	integer()
	{
		a = 10;
	}
	//����ǰ��++�����
	integer& operator++()//�������� ��Ϊ����Ƿ���ֵ�Ļ� ֻ����һ��++����  �������þ���һֱ��һ�����ݽ��в���
	{
		a++;//ͨ�����������ʵ��++�Ĳ��� ����Ӧ�÷�������
		return*this;
	}
	//���غ���++�����
	integer operator++(int)//��������Ϊ������ĺ����������ض�������� ��Ϊ����ֵ������Ϊ�������� ���Իᱨ�� �ں����һ��int
	//int����ռλ���� ��������ǰ�úͺ��õ���
	{
		//�� ��¼��ʱ��� ��Ϊ����ֱ��дreturn ����Ӧ���ȼ�¼��ʱ�Ľ��
		integer tmp = *this;
		//�� ��������
		a++;
		//��󽫼�¼��������ز���
		return tmp;
	}
private:
	int a;

};
//�������������
ostream& operator<<(ostream& cout, integer aint)
{
	cout << aint.a;
	return cout;
}
void test01()
{
	integer aint;
	cout << ++aint << endl;//��������Ϊ��������Զ�������� ��������֪����ô��� ������������������ñ�����֪��
	//���ǲ���Ū��ǰ�� ����++  ���� ��������++�����
}
void test02()
{
	integer aint;
	cout << aint++ << endl;
	cout << aint << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}


//�������������
//���ã���������Զ�����������
//cout << a << endl;
//class person
//{
//	person p;
//	p.a = 10;
//	p.b = 20;
//	cout << p << endl;//����������a  b��ֵȫ����� ��������
//};
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//public:
//	person(int aa, int ab)
//	{
//		a = aa;
//		b = ab;
//	}
//private://һ�㽨�����˽�е�
//	//���ó�Ա�����������Ʋ�����  һ�㲻ʹ�� ��Ϊ�޷�ʵ��cout����� ֻ������ȫ�ֺ����������Ʋ�����
//	//void operator<<(person& p)
//	//{
//
//	//}
//	int a;
//	int b;
//};
//
////ֻ������ȫ�ֺ����������Ʋ�����
//ostream& operator<<(ostream& cout,person p)//���� operator<<(cout,p) ��Ϊ cout<<p   cout������ostream ��������� ȫ��ֻ����һ�� ���������õķ�ʽ
//{
//	cout << p.a << p.b << endl;
//	return cout;//���� ������ʽ���� Ҳ����ʹ�ñ��� 
//}
//void test01()
//{
//	person p(10,20);
//	//p.a = 20;
//	//p.b = 10;
//
//	cout << p << endl;//ͨ��p���a��b��ֵ��������Ҫ����  ͨ����Ա��������ȫ�ֺ���   ͨ�����淵��cout �Ϳ���һֱ������ʽ�� ���滹���Լӱ�Ķ���
//}
//int main()
//{
//	test01();
//	return 0;
//}