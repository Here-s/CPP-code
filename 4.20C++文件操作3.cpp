#include<iostream>
using namespace std;
#include<fstream>



//�������ļ�
//�Զ����Ƶķ�ʽ���ļ����ж�д����
//�򿪷�ʽҪָ��Ϊ ios::binary
//
//д�ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�� : ostream & write(const char* buffer, int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���

class person
{
public:
	char name[52];
	int age;
};
void test01()
{
	//����ͷ�ļ�  #include<fstream>
	//����������
	ofstream ofs("person.txt", ios::out | ios::binary);//Ҳ�����ڴ�����ʱ�� ȷ��������ʽ
	//���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);//�ö����Ƶķ�ʽȥд�ļ�
	//д�ļ�
	person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(person));
	//�ر��ļ�
	ofs.close();
}
int main()
{
	test01();//�����txt�ļ�������������Ŀ¼����  ������������  ���ǿ����ö����Ʒ�ʽ������
	return 0;
}