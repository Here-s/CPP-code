#include<iostream>
using namespace std;


//�̳��еĶ���ģ��

class base
{
public:
	int a;
protected:
	int b;
private:
	int c;//˽�г�Աֻ�Ǳ������� ���ǻ��ǻ�̳���ȥ
};

//�����̳�
class son:public base
{
public:
	int d;
};

void test01()
{
	//���������ԷǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//�����е�˽�г�Ա���� �Ǳ��������������� ����Ƿ��ʲ����� ����ȷʵ�Ǽ̳���ȥ��
	// 
	//ͨ��������Ա������ʾ���Ϳ�֪������ģ����
	//������ת�ļ����õ���
	//Ȼ����ת�ļ�·�� cd.....����·����
	//�鿴���� cl  /dl  reportSingleClassLayout���� �ļ���
	cout << sizeof(son) << endl;//16 ����Ϊ�����̳� ��a b c d �ĸ� ���Լ�����16
}
int main()
{
	test01();
	return 0;
}