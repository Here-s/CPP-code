#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//����ͷ�ļ� ʹ�������ļ��п���ʹ��point ��circle������




//����д�Ļ�������̫���� ���Կ��԰���д�������һ���ļ����� �����������̴�����
//����ͬ������Ϊ��ͬ���ļ� ��ַ�ʽΪ ��ͷ�ļ���д���� ����һ��Դ�ļ���д����

//��ϰ2�����Բ�Ĺ�ϵ
//���һ��Բ�ࣨcircle�� ��һ�����ࣨpoint��������Բ�͵�Ĺ�ϵ��
//�������ֹ�ϵ��԰�� Բ�� ԰��  ͨ���뾶���ж�
//�㵽Բ�ĵľ��룺�������� (x1-x2)^2+(y1-y2)^2  �Ͱ뾶�Ա� ���ж����ַ�ʽ
//Ϊ�˱����鷳 ���Ծ�����ߺ��ұ߶�ȡƽ��������
//ԲҪ���Բ�ĺͰ뾶
//��Ҫ�������

////����
//class point
//{
//	//����x���� y����
//public:
//	//����X���� 
//	void setx(int ax)
//	{
//		x = ax;
//	}
//	//��ȡX����
//	int getx()
//	{
//		return x;
//	}
//	//����X���� 
//	void sety(int ay)
//	{
//		y = ay;
//	}
//	//��ȡX����
//	int gety()
//	{
//		return y;
//	}
//private:
//	int x;
//	int y;
//};
////Բ��
//class circle
//{
//public:
//	//���ð뾶
//	void setr(int ar)
//	{
//		r = ar;
//	}
//	//��ȡ�뾶
//	int getr()
//	{
//		return r;
//	}
//	//����Բ��
//	void setcenter(point acenter)
//	{
//		center = acenter;
//	}
//	//��ȡԲ��
//	point getcenter()
//	{
//		return center;
//	}
//private:
//	int r;//�뾶
//	//��һ������ ��������һ���� ��Ϊ�����еĳ�Ա  point����һ���� ������Ϊ�����еĳ�Ա
//	point center;//����Բ��
//};
//�жϵ��Բ��ϵ
void judgement(circle &c,point &p)
{
	//��������֮������ƽ��
	int distance=
	(c.getcenter().getx() - p.getx())* (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//����뾶��ƽ��
	int rdistance = c.getr() * c.getr();
	//�жϹ�ϵ
	if (distance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()//
{
	//����Բ
	circle c;
	c.setr(10);
	point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);//��center����ȥ ���൱���ǰ�����������괫��ȥ
	//������
	point p;
	p.setx(10);
	p.sety(10);//�ֶ����õ������㶼��Բ��
	//�ж������Ĺ�ϵ
	judgement(c,p);//��Բ�͵㴫��ȥ �����ж�
	return 0;
}

//����������ࣨcube��
//���������������
//���������ı���������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//class cube
//{
//	//��Ϊ  ���û�ȡ�����  ��ȡ����������  ��ȡ����������  �������ڹ���
//public:
//	//���ó�
//	void setl(int al)
//	{
//		l = al;
//	}
//	//��ȡ��
//	int getl()
//	{
//		return l;
//	}
//	//���ÿ�
//	void setw(int aw)
//	{
//		w = aw;
//	}
//	//��ȡ��
//	int getw()
//	{
//		return w;
//	}
//	//���ø�
//	void seth(int ah)
//	{
//		h = ah;
//	}
//	//��ȡ��
//	int geth()
//	{
//		return h;
//	}
//	//��ȡ���������
//	int calculateS()
//	{
//		return 2 * l * w + 2 * w * h + 2 * l * h;
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return l * w * h;
//	}
//	//���ó�Ա���� �ж������������Ƿ����
//bool issamebyclass(cube &c)//class����ľ��ǳ�Ա  ��������Ӧ�ô�һ��  Ӧ������֪�Ķ����������������  Ȼ���ٴ�����һ��δ֪��������
//{
//	if (l == c.getl() && w == c.getw() && h == c.geth())//&&���ҵ���˼
//	{
//		return true;
//	}
//	return false;
//}
//	//����  �����  ��������˽�� 
//private:
//	int l;//��
//	int w;//��
//	int h;//��
//};
////����ȫ�ֺ����ж� �����������Ƿ����
//bool issame(cube &c1,cube &c2)//�ж��Ƿ����
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())//&&���ҵ���˼
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	//������һ��������
//	cube c1;
//	c1.setl(10);
//	c1.seth(20);
//	c1.setw(30);
//	cout << "c1������ǣ�" << c1.calculateS() << endl;
//	cout << "c1������ǣ�" << c1.calculateV() << endl;
//	//�����ڶ���������  ��c1��c2��ȫ��� ����������ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//	cube c2;
//	c2.setl(10);
//	c2.seth(20);
//	c2.setw(30);
//	cout << "c2������ǣ�" << c2.calculateS() << endl;
//	cout << "c2������ǣ�" << c2.calculateV() << endl;
//	//����ȫ�ֺ����ж�
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//	//���ó�Ա�����ж�
//	ret = c1.issamebyclass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����ж�  c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����ж�  c1��c2�ǲ���ȵ�" << endl;
//	}
//	return 0;
//}