#pragma once //����Ϊ�˷�ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//ͷ�ļ�����ֻ��Ҫ���������� ��ʵ�ֶ�ɾ�� ��������ʱ��Ӹ��ֺŲ�ȫ
//����
class point
{
	//����x���� y����
public:
	//����X���� 
	void setx(int ax);

	//��ȡX����
	int getx();

	//����X���� 
	void sety(int ay);

	//��ȡX����
	int gety();

private:
	//�����Ǳ���������
	int x;
	int y;
};
