#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


int main()//����� ����ˮ���� 1ƿ��ˮ1Ԫ 2����ƿ���Ի�һƿ��ˮ ��20Ԫ���Ժȶ�����ˮ
//20��20ƿ ��ƿ��10ƿ �ٻ�5ƿ �ٻ���ƿ ������ƿ �ٻ�һƿ �õ�������ƿ �ٻ�һƿ һ��39ƿ   ���Կ��Է�Ϊ������ �򵽵�һ���� ������һ����
{
	int money = 0;
	int total = 0;//total��������
	int empty = 0;//ͳ�ƿ�ƿ
	cin >> money;//����Ǯ��
	total = money;//���������ˮ
	empty = money;//��ƿ������
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//�ܻ�������ˮ �õ��Ŀ�ƿ �ټ��ϻ�֮��ʣ�µĿ�ƿ
	}
	//if (money == 0)//ͨ���ҹ��ɷ��ֻ���������
	//	total = 0;
	//else
	//	total = 2 * money - 1;//ͨ���ҹ��ɷ��ֻ���������
	cout << total << endl;
	return 0;
}