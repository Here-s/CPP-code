#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<iostream>


//��Ա��������Ԫ
class building;//��Ϊ��˳����õķ�ʽ ����Ҫ����������һ��class building ��Ȼ��ⲻ���ᱨ��
class good
{
public:
	good();
	void visit();//��visit�������Է���building�е�˽�г�Ա
	void visit2();//��visit2���������Է���building�е�˽�г�Ա
	building* build;
};
class building
{
	//���߱����� good���µ�visit��Ա���� ��Ϊ����ĺ����� ���Է���˽�г�Ա
public:
	friend void good::visit();
public:
	building();
public:
	string sittingroom;//����
private:
	string bedroom;//����
};

//����ʵ�ֳ�Ա����
building::building()//building�������µĺ���
{
	sittingroom = "����";
	bedroom="����";
}
good::good()
{
	build = new building;
}
void good::visit()
{
	cout << build->sittingroom << endl;
	cout << build->bedroom << endl;
}
void good::visit2()
{
	cout << build->sittingroom << endl;
}
void test01()
{
	good g;
	g.visit();
	g.visit2();
}
int main()
{
	test01();
	return 0;
}


//������Ԫ
//class building
//{
//public:
//	friend class good;
//public:
//	building();
//public:
//	string sittingroom;//����
//private:
//	string bedroom;//����
//};
//
//class good
//{
//public:
//	good();
//	void visit();//�ιۺ�������building�е�����
//	building* build;//��ǰ�洴��һ����building
//};
////����д��Ա����
//building::building()//building �������µĺ���
//{
//	sittingroom = "����";
//	bedroom = "����";
//}
//good::good()//good�������µĺ���
//{
//	build = new building;
//}
//void good::visit()
//{
//	cout << "���ڷ���" << build->sittingroom << endl;
//	cout << "���ڷ���" << build->bedroom << endl;//��class building�����һ�� friend class good; �Ϳ��Է���˽�г�Ա��
//
//}
//void test01()
//{
//	good g;
//	g.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//��������ļ����п�����public�� ��������ң�private)
//���������еĿ��˶����Խ�ȥ�������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
//����������������������ĺù��۽�ȥ

//�ڳ����� ��Щ˽������Ҳ�������������һЩ������������з��� ����Ҫ�õ���Ԫ�ļ���

//��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա

//��Ԫ�Ĺؼ����� friend

//��Ԫ������ʵ��
//1 ȫ�ֺ�������Ԫ
//2 �����Ԫ
//3 ��Ա��������Ԫ

//ȫ�ֺ�������Ԫ
//class building//��������
//{
//	//good��building�ĺ����� ���Է���building�е�˽������
//	friend void good(building* build);
//public:
//	building()
//	{
//		sittingroom = "����";
//		bedroom = "����";
//	}
//public:
//	string sittingroom;//����
//
//private:
//	string bedroom;//����
//
//
//};
////ȫ�ֺ��������Է���˽�е�
//void good(building* build)
//{
//	cout << build->sittingroom << endl;//�����ǹ������� ������Ҳ���Է��ʵ�
//	cout << build->bedroom << endl;//���� ��Ϊ˽������ �ǲ�����������ʵ�
//}
//void test01()
//{
//	building build;
//	good( &build);
//}
//int main()
//{
//	test01();
//	return 0;
//}