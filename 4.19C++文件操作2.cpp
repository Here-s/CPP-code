#include<iostream>
using namespace std;
#include<fstream>
#include<string>


//���ļ�
//���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�
//
//���ļ���������
//1 ����ͷ�ļ�
//#include<fstream>
//2 ����������
//ifstream ifs;
//3 ���ļ����ж��ļ��Ƿ�򿪳ɹ�
//ifs.open("�ļ�·��", �򿪷�ʽ)
//4 ������
//���ַ�ʽ��ȡ
//5 �ر��ļ�
//ifs.close();

void test01()
{
	//����������
	ifstream ifs;
	//���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;//��ʧ�ܿ������ļ������ԣ�·������
		return;
	}
	//������
	//��һ�ֶ�ȡ��ʽ
	//char arr[1024] = { 0 };//���ļ����ݷ����ַ�������
	//while (ifs >> arr)//�������Ʋ����� �����ݷ���arr����
	//{
	//	cout << arr << endl;
	//}

	//�ڶ��ֶ�ȡ��ʽ
	//char arr[1024] = { 0 };
	//while (ifs.getline(arr, sizeof(arr)))//getline �ǻ�ȡһ������ ����arr Ҫ֪��arr�������С
	//{
	//	cout << arr << endl;
	//}
	////�ر��ļ�

	//�����ֶ�ȡ��ʽ
	//string arr;//���������ݷ���C++��
	//while (getline(ifs,arr))//��ε�getline��ȫ�ֺ���  ������������ifs  ����׼���õ�arr
	//{
	//	cout << arr << endl;
	//}

	//�����ֶ�ȡ��ʽ
	char c;//���ļ�������һ��һ����
	while ((c = ifs.get()) != EOF)//���������ļ��ŵ��ַ�c����  !=EOF��˼��:���û�ж����ļ�β
	//EOF ��˼�� end and of file �����ļ�β
	{
		cout << c;//Ч�ʵ�
	}
	ifs.close();
}
int main()
{
	test01();//��Ļ����û��������� ˵���ǳɹ����ļ�
	return 0;
}