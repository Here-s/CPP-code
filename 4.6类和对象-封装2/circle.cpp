#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
//Բ��
//���ð뾶
void circle:: setr(int ar)//��circle::��˵������������circle�������µĳ�Ա����
{
	r = ar;
}
//��ȡ�뾶
int circle:: getr()
{
	return r;
}
//����Բ��
void circle:: setcenter(point acenter)
{
	center = acenter;
}
//��ȡԲ��
point circle:: getcenter()
{
	return center;
}
