#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//ָ��ͺ���
//void swap(int a,int b)//�β��е�a,b ���ˣ�����main�����е�û�б�
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	cout << a << endl;
//	cout << b << endl;
//}
void swap1(int* p1, int* p2)//�����ǵ�ַ  ���Զ�main����Ҳ��Ч  ����ԭ�����е�ֵҲ���޸���
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()
{
	int a = 3;
	int b = 5;
	//swap(a,b);
	swap1(&a, &b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}

//ָ�������
//int main()//����ָ�������������е�Ԫ��
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	cout << arr[0] << endl;
//	int* p = arr;//arr�������׵�ַ
//	cout << *p << endl;
//	p++;//ָ��+1 �������ƫ��4���ֽ�
//	cout << *p << endl;
//	int* p2 = arr;
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//	return 0;
//}

//const����ָ�볣�� ͬC����  ����ʹ�ó������ɸı�
//const int* p=&a;  �ص� ָ���ָ����Ա��޸� ����ָ��ָ���ֵ�����Ա��޸�
//int *const p=&a;  ָ���ָ�򲻿ɸ� ָ��ָ���ֵ���Ը�ָ��ָ���ֵ�������Ա��޸�
//const int* const p=&a;//ָ���ָ���
//int main()
//{
//	int a = 10;
//	int b = 10;
//	const int* p = &a;//ָ��ָ���ֵ�����Ը� ָ���ָ����Ը�  const����ָ�� ����ָ��
//	//*p = 20;//�����Ը� ���Իᱨ��
//	p = &b;//ָ���ָ����Ը�
//	int* const p2 = &a;//const���γ��� ָ�볣��   ָ���ָ�򲻿��Ը� ָ���ֵ���Ը�
//	*p2 = 100;
//	//p2 = &b;//ָ���ָ�򲻿��Ը�  ���Իᱨ��
//	const int* const p3 = &a;//const����ָ��ͱ���
////	*p3 = 100;
////	p3 = &b;
//	return 0;
//}


//ָ��
//Ұָ�� �Ƿ������ڴ�ռ�  ͬC����  �Ƿ�����  Խ�����  һ��Ҫע��
//int main()
//{
//	
//	return 0;
//}
