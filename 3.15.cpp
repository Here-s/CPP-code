#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;



//���ݵ�����  ���뺯����cin>>  ������C���Ե��е�scanf
int main()
{
	int a = 0;
	cout << "��a��ֵ" << endl;
	cin >> a;//������scanf����
	printf("%d\n", a);
	return 0;
}

//�������� bool  ֻ������ֵ true-��(1)  false-��(0)  ռ��1���ֽ�
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(bool) << endl;
//	return 0;
//}

//�ַ������� 
//1 ����C���Ե�char����  ���磺char arr[256] = { 0 };
//2 C++���  ���磺string
//int main()
//{
//	//C���Է��
//	char arr[] = "byte dance";
//	cout << arr << endl;
//	//C++���
//	string arr2 = "byte dance";
//	cout << arr2 << endl;//ʹ�õ�ʱ��Ҫ��ͷ�ļ�#include<string>
//	return 0;
//}

//���õ�ת���ַ�
//1 \n ���� ������C���Ե���
//2 \t ˮƽ�Ʊ�
//3 \\ ����һ����б���ַ�
//int main()
//{
//	cout<<"\\"<<endl;
//	//2 \t ˮƽ�Ʊ��   ����������ж���Ч��
//	cout << "aa\tbyte dance" << endl;//\tռ�˸�λ�� ���ǰ��������a ��ô�ͻ�������ո�
//	cout << "aaaaa\tbyte dance" << endl;
//	cout << "aaa\tbyte dance" << endl;
//	cout << "aaaa\tbyte dance" << endl;
//	return 0;
//}

//�ַ� char ���� һ���ֽ� ���磺char ch='a'; ֻ���õ����� ������ֻ��дһ����ĸ ��Ϊֻ��ȡһ��  �ڴ��зŵ���ASCII��ֵ a��ASCII��ֵ��97

//дС��Ҳ��ʹ��float double ǰ����4���ֽ� 7λ��Ч���� ������8���ֽ� 15-16λ��Ч����
//Ĭ������� ���һ��С��������ʾ6Ϊ��Ч����
//int main()
//{
//	float f1 = 3.1415926f;//����f�Ļ� ��Ĭ����double���� ����ת��Ϊfloat���� ��f�Ļ� Ĭ����f���� ����
//	cout << "f1=" << f1 << endl;
//	double d1 = 3.1415926;
//	cout << "d1=" << d1 << endl;
//	cout << "double��ռ�Ŀռ�Ϊ��" << sizeof(d1) << endl;
//	//��ѧ������
//	float f2 = 3e2;//e���������� �����������˼��  f2=3*10^2;
//	cout << "f2=" << f2 << endl;
//	float f3 = 3e-2;//e�����Ǹ��� ��ʾ3*0.1^2
//	cout << "f3=" << f3 << endl;
//	return 0;
//}

//ͨ��sizeof ��ͳ������������ռ�ڴ�Ĵ�С 
//int main()
//{
//	short num1 = 10;
//	cout << "short��ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;//�����num1Ҳ����ͳ�Ƴ�short����ռ�ռ䣬��Ϊ����num1������ʱ�򣬾��Ѿ�ָ����Ӧ�����������ˣ�����Ҳ����short
//	return 0;
//}

//��ʶ���������� 
//1 ��ʶ�������ǹؼ��� ���磺int int =10�� ������Ϊint�ǹؼ��� �����﷨����
//2 ��ʶ��ֻ������ĸ ���� �»������
//3 ��һ���ַ�����Ϊ��ĸ���»��� ���������� ���磺int a=10;  int asd=20;  int 123=10;(����)�﷨���� ��������������
//4 ��ʶ������ĸ���ִ�Сд  �����Ĵ�д��Сд��������� ����ᱨ��
