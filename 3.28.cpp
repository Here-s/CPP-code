#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<ctime>//ʹ��ϵͳʱ�亯��Ҫ����ͷ�ļ�



//�ṹ�尸��
//ѧУ������������Ŀ ÿ����ʦ��5��ѧ�� �ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬����ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է��� ����������3����ʦ��ͨ��������ÿ����ʦ��ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ��������
//ʵ�ַ��������ڲ�νṹ ��ʦ������ ���������ѧ��
struct Stu
{
	string name;
	int age;
	int score;
};
struct teach
{
	string tname;//��ʾteacher name
	struct Stu sarr[5];
};
void allocateSpace(struct teach tarr[5],int len)//���ٿռ� ����ʦ��ѧ����ֵ����  ��ΪҪ��������� ����Ҫ֪�����鳤��
{
	int i = 0;
	//����ʦ��ֵ
	string nameSeed = "ABCDE";
	for (i = 0; i < len; i++)
	{
		tarr[i].tname = "teacher_";
		tarr[i].tname += nameSeed[i];//��ʦ�����ĸ�ֵ
		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			tarr[i].sarr[j].name = "student_";
			tarr[i].sarr[j].name += nameSeed[j];
			int byte = rand() % 60 + 40;
			tarr[i].sarr[j].score = byte;
		}
	}
}
void print(struct teach tarr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << tarr[i].tname << endl;
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			cout << tarr[i].sarr[j].name << tarr[i].sarr[j].score << endl;
		}
	}
}
int main()
{
	//�������Դ
	srand((unsigned int)time(NULL));//Ҫ��ͷ�ļ� #include<ctime>
	//����������ʦ������
	struct teach tarr[3];
	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocateSpace(tarr, len);
	//��ӡ������ʦ������ѧ������Ϣ
	print(tarr, len);
	return 0;
}

//�ṹ����constʹ�ó���
//���� ͨ��const����ֹ�����
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(const Stu* s)//ֵ����  �����޸�main�е�����  ���ǻὫ���ݿ��� �������ݷǳ��� ����ʹ��ָ��
////ʹ��ָ��ֻռ4���ֽ�  ���β�ָ��ָ�� �Ϳɼ����ڴ�ռ� ���Ҳ��Ḵ���µĸ�������
//{
//	//��Ϊ��ָ�봫�� ���������� ��Ϊ���������С�ĸ���ֵ ��ô��������ֵҲ�ᱻ�޸� �����ڽ��ղ�����ʱ��ʹ��const
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct Stu s = { "����",20,100 };
//	//ͨ��������ӡ�ṹ���������Ϣ
//	printStu(&s);
//	return 0;
//}

//�ṹ������������  ���ṹ����Ϊ���������д���
//���ݷ�ʽ������    1 ֵ����    2 ��ַ����
//�ṹ������������ ��ѧ������һ�������� ��ӡѧ�����ϵ�������Ϣ
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//void printStu(struct Stu s)// 1 ֵ����    
//{
//	cout << s.age << s.name << s.score << endl;
//}
//void printStu1(struct Stu* s)// 2 ��ַ����
//{
//	s->age = 25;
//	cout << s->age << s->name << s->score << endl;
//}
//int main()
//{
//	struct Stu s = { "����",20,90 };
//	//cout << s.age << s.name << s.score << endl;
//	//printStu(s);//���ݷ�ʽ������    1 ֵ����    2 ��ַ����
//	printStu1(&s);
//	cout << s.age << s.name << s.score << endl;//ͨ��ָ���޸Ĳ��� �������е�ֵҲ���
//	return 0;
//}

//�ṹ��Ƕ�׽ṹ��  ���ǽṹ���еĳ�Ա����������һ���ṹ��
//���� ��ʦ��һ���ṹ�� ��ʦ�Ľṹ���м�¼ÿ��ѧ�� 
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Stu s;//���ѧ���ṹ�� Ӧ�ö�������ʦǰ�� �����Ͳ�������
//};
//int main()
//{
//	teacher t;//������ʦ
//	t.id = 12345;
//	t.name = "����";
//	t.age = 50;
//	t.s.name = "����";//t.s�Ƕ�����ʦ���������� Ҳ����ѧ��
//	t.s.age = 20;
//	t.s.score = 60;
//	cout << t.id << t.name << t.age << endl;
//	cout << t.s.age << t.s.name << t.s.score << endl;
//	return 0;
//}