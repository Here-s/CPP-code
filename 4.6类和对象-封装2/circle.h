#pragma once
#include<iostream>
using namespace std;
#include"point.h"//��Ϊ�����ͷ�ļ���������point�� ��������һ��ͷ�ļ� �����Ͳ���point������
//Բ��
class circle
{
public:
	//���ð뾶
	void setr(int ar);

	//��ȡ�뾶
	int getr();

	//����Բ��
	void setcenter(point acenter);

	//��ȡԲ��
	point getcenter();

private:
	int r;//�뾶
	//��һ������ ��������һ���� ��Ϊ�����еĳ�Ա  point����һ���� ������Ϊ�����еĳ�Ա
	point center;//����Բ��
};

