#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//���ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�istream& read(char* buffer, int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�ȡ���ֽ���

class person
{
public:
	char name;
	int age;
};
void test01()//�����ƶ��ļ�
{
	//����ͷ�ļ� #include<fstream>
	//����������
	ifstream ifs;
	//���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//���ļ�
	person p;
	ifs.read((char*)&p, sizeof(person));
	cout << p.name << p.age << endl;//��Ȼ�ļ��������룬���Ƕ���������������
	//�ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	return 0;
}