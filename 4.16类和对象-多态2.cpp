#include<iostream>
using namespace std;


//����2-������Ʒ
//������Ʒ�Ĵ��������ǣ���ˮ ���� ���뱭�� ���븨��
//���ö�̬ʵ�ְ��� �ṩ����������Ʒ���� �ṩ�����������ȺͲ�Ҷ

class abstractdrinking
{
public:
	//��ˮ
	virtual void boil() = 0;
	//����
	virtual void brew() = 0;
	//���뱭��
	virtual void pourincup() = 0;
	//���븨��
	virtual void putsomething() = 0;
	//������Ʒ
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};
//��������
class coffee :public abstractdrinking
{
public:
	//Ҫ��д �����ٸ�������
		//��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	virtual void brew()
	{
		cout << "����" << endl;
	}
	//���뱭��
	virtual void pourincup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void putsomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};
//������Ҷ
class tea :public abstractdrinking
{
public:
	//Ҫ��д �����ٸ�������
		//��ˮ
	virtual void boil()
	{
		cout << "���Ҷ��ˮ" << endl;
	}
	//����
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void pourincup()
	{
		cout << "��Ҷ���뱭��" << endl;
	}
	//���븨��
	virtual void putsomething()
	{
		cout << "�����Ҷ���Ǻ�ţ��" << endl;
	}

};
//������Ʒ����
void dowork(abstractdrinking* abs)//����һ������ָ�� ���ýӿ�ʵ������ �൱���������β� ����ʵ��coffee
{
	abs->makedrink();//�����൱�ڵ��ø����makedrink Ȼ���ຯ��ȥѰ�������еľ���ʵ��
	//������� ����Ҫ�ͷ�
	delete abs;//�ܰѶ�������������ȫ���ͷ�

}
void test01()
{
	cout << "��������" << endl;
	dowork(new coffee);
	cout << endl;
	cout << "������Ҷ" << endl;
	dowork(new tea);
}
int main()
{
	test01();
	return 0;
}