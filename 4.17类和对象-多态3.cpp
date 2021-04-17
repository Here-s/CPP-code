#include<iostream>
using namespace std;
#include<string>


//��̬����3-������װ
//����������
//������Ҫ��ɲ���Ϊcpu���Կ����ڴ���
//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ����� ����Intel���̺�Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ������Ĺ����Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���

//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};
//�����Կ���
class videocard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�����ڴ�����
class memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class computer
{
public:
	computer(CPU* acpu, videocard* avc, memory* ame)
	{
		cpu = acpu;
		vc = avc;
		me = ame;
	}
	void work()//�ṩ��������
	{
		//������������������ýӿ�
		cpu->calculate();
		vc->display();
		me->storage();
	}
	//�ṩ�������� �ͷ�3���������
	~computer()
	{
		//�ͷ�cpu���
		if (cpu != NULL)
		{
			delete cpu;
			cpu = NULL;
		}
		//�ͷ��Կ����
		if (vc != NULL)
		{
			delete cpu;
			vc = NULL;
		}
		//�ͷ��ڴ����
		if (me != NULL)
		{
			delete cpu;
			me = NULL;
		}

	}
private:
	CPU* cpu;//cpu�����ָ��
	videocard* vc;//�Կ����ָ��
	memory* me;//�ڴ��������ָ��
};
//���峧��
//Intel����
class intelcpu :public CPU
{
public:
	virtual void calculate()//����Ҫ��д����Ĵ��麯��
	{
		cout << "intel��cpu��ʼ����" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()//����Ҫ��д����Ĵ��麯��
	{
		cout << "intel���Կ���ʼ����" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void storage()//����Ҫ��д����Ĵ��麯��
	{
		cout << "intel���ڴ�����ʼ�洢" << endl;
	}
};
//Lenovo����
class Lenovocpu :public CPU
{
public:
	virtual void calculate()//����Ҫ��д����Ĵ��麯��
	{
		cout << "Lenovo��cpu��ʼ����" << endl;
	}
};
class Lenovovideocard :public videocard
{
public:
	virtual void display()//����Ҫ��д����Ĵ��麯��
	{
		cout << "Lenovo���Կ���ʼ����" << endl;
	}
};
class Lenovomemory :public memory
{
public:
	virtual void storage()//����Ҫ��д����Ĵ��麯��
	{
		cout << "Lenovo���ڴ�����ʼ�洢" << endl;
	}
};
void test01()
{
	//��һ̨���Ե����
	CPU* intelacpu = new intelcpu;//����ָ�봴����
	videocard* intelcard = new intelvideocard;
	memory* intelme = new intelmemory;
	//��Щ�����û�ͷ� ����ͨ�������ָ��˳���ͷ�
	cout << "��һ̨���Կ�ʼ����" << endl;
	//������һ̨����
	computer* computer1 = new computer(intelacpu, intelcard, intelme);
	computer1->work();
	delete computer1;

	cout << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�ڶ�̨������װ
	computer* computer2 = new computer(new Lenovocpu, new Lenovovideocard, new Lenovomemory);
	//new��ָ��ֱ�Ӵ���ȥ
	computer2->work();
	delete computer2;


	cout << endl;
	cout << "����̨���Կ�ʼ����" << endl;
	//����̨������װ
	computer* computer3 = new computer(new Lenovocpu, new intelvideocard, new Lenovomemory);
	//new��ָ��ֱ�Ӵ���ȥ
	computer3->work();
	delete computer3;

}
int main()
{
	test01();
	return 0;
}




//�������ʹ�������
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//
//�����ʽ���������е�����������Ϊ���������ߴ�������
//
//�������ʹ��������Ĺ��ԣ�
//1 ���Խ������ָ���ͷ��������
//2 ����Ҫ�о���ĺ���ʵ��
//�麯���ʹ�����������
//1 ����Ǵ��麯�����������ڳ����࣬�޷�ʵ��������
//
//�������﷨��
//virtual ~����() {}
//���������﷨��
//virtual ~����() = 0;


//class anima
//{
//public:
//	anima()
//	{
//		cout << "anima���캯������" << endl;
//	}
//
//	//Ҫע����� �������ʹ�����������Ҫ�д���ʵ�� ��Ϊ����Ҳ���ܰ����ݿ��ٵ�����
//
//	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
// //   virtual ~anima()
//	//{
//	//	cout << "anima������������" << endl;
//	//}
//	//���������������� Ҳ���Խ������ָ���ͷ��������ʱ���ɾ������� ��Ҫ���� Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~anima()=0;
//
//	//���麯��
//	virtual void speak() = 0;
//
//};
//anima::~anima()//anima�������µĴ�������ʵ��
//{
//	cout << "anima�Ĵ���������������" << endl;
//}
//class cat :public anima
//{
//public:
//	cat(string aname)
//	{
//		cout << "cat���캯���ĵ���" << endl;
//		name = new string(aname);
//	}
//	virtual void speak()
//	{
//		cout << *name << "è˵��" << endl;
//	}
//	~cat()//����cat���������� ������cat������
//	{
//		if (name != NULL)
//		{
//			cout << "cat��������������" << endl;//���з���û�����д��룬˵�������nameҲû�ͷ�
//			//����ָ��ָ�������������delete����ָ���ʱ�򣬲�������������������� 
//			//���Ծ͵���    ��������ж������ԣ�������ڴ�й¶��� ���Ѹ����������Ϊ��������ʱ��ͺ���
//			delete name;
//		}
//	}
//	string* name;//ͨ��ָ�봴���ڶ���
//};
//void test01()
//{
//	anima* ani = new cat("Tom");//anima�Ǹ���ָ��
//	ani->speak();
//	delete ani;
//}
//int main()
//{
//	test01();
//	return 0;
//}