#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define MAX 1000//ͨ���궨�����Ϊ1000 Ҳ������������1000
#include<string>


//ͨ��c++дһ��ͨѶ¼ ��Ҫʵ�ֵĹ�������
//�����ϵ��  ��Ϣ���������� �Ա� ���� ��ϵ�绰 ��ͥסַ�� ����¼1000��
//��ʾ��ϵ��  ��ʾͨѶ¼��������ϵ�˵���Ϣ
//ɾ����ϵ��  ��������ɾ��ָ����ϵ��
//������ϵ��  ���������鿴��ϵ�˵���Ϣ
//�޸���ϵ��  �������������޸�ָ����ϵ��
//�����ϵ��  ���ͨѶ¼��������Ϣ
//�˳�ͨѶ¼  �˳���ǰʹ�õ�ͨѶ¼


//�˵�ҳ��
void menu()
{
	cout << "*************************" << endl;
	cout << "****** 1 �����ϵ�� *****" << endl;
	cout << "****** 2 ��ʾ��ϵ�� *****" << endl;
	cout << "****** 3 ɾ����ϵ�� *****" << endl;
	cout << "****** 4 ������ϵ�� *****" << endl;
	cout << "****** 5 �޸���ϵ�� *****" << endl;
	cout << "****** 6 �����ϵ�� *****" << endl;
	cout << "****** 0 �˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}
struct people//��ϵ�˽ṹ��
{
	string name;
	int sex;//�Ա� 1 ��   2 Ů
	int age;//����
	string phone;//�ֻ�����
	string home;//��ͥסַ
};
struct book //ͨѶ¼�ṹ��
{
	struct people arr[MAX];//ͨѶ¼�е���ϵ������
	int count;//ͨѶ¼����Ա����
};
void Addpeople(struct book* arr)
{
	if (arr->count == MAX)
	{
		cout << "ͨѶ¼����,�޷����" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��   ����   �Ա�   ����   �绰   סַ
		string name;
		cout << "������������" << endl;
		cin >> name;
		arr->arr[arr->count].name = name;
		cout << "�������Ա�" << endl;
		cout << "1 ������   2 ����Ů" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				arr->arr[arr->count].sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		arr->arr[arr->count].age = age;
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		arr->arr[arr->count].phone = phone;
		cout << "�������ַ" << endl;
		string home;
		cin >> home;
		arr->arr[arr->count].home = home;
		arr->count++;//��Ϊ����һ����Ҫ�� ��������Ҫ++
		cout << "��ӳɹ�" << endl;//�������Ҫ��ʾһ��
		//��ӳɹ�֮�� Ӧ�ð���Ļ��� ���ҷ�����һ�� ��Ȼ�ͻ�̫��
		system("pause");//��������ͣ  ����ʾ�밴���������
		system("cls");//��������
	}
}
//��ʾ���е���ϵ��
void showpeople(struct book* arr)
{
	//�жϵ�ǰͨѶ¼������û����ϵ�� û�о���ʾ����ϵ��Ϊ�գ��о���ʾͨѶ¼��Ϣ
	if (arr->count == 0)
	{
		cout << "��ǰ����ϵ��Ϊ��" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < arr->count; i++)
		{
			cout << "������" << arr->arr[i].name << "\t";
			cout << "�Ա�" << (arr->arr[i].sex == 1 ? "��" : "Ů") << "\t";//ͨ����Ŀ���������ж�������Ա� 
			//ͨ��������ȷ�����ȼ�
			cout << "���䣺" << arr->arr[i].age << "\t";
			cout << "���룺" << arr->arr[i].phone << "\t";
			cout << "��ַ��" << arr->arr[i].home << endl;
		}
	}
	system("pause");//��������ͣ  ����ʾ�밴���������
	system("cls");//��������
}
//ɾ����ϵ�� ���ȼ�⵽��ϵ���Ƿ����  ��װɾ����ϵ�˺���   ����ɾ���Ĺ���
//ɾ����ϵ��֮ǰ ���ж��û��������ϵ���Ƿ���ڣ����ھ�ɾ���������ھ���ʾû��Ҫɾ������ϵ�� 
//���� ���Խ������ڷ���Ϊ-1

//�����ϵ���Ƿ���� ������ڣ�������ϵ�����������еľ���λ�� ��������ڷ���-1
int search(struct book* arr, string name)//������ͨѶ¼�ʹ�������
{
	int i = 0;
	for (i = 0; i < arr->count; i++)
	{
		if (arr->arr[i].name == name)//�ҵ��û�Ҫ�ҵ�������
		{
			return i;//�����±� Ҳ���ǵڼ�����ϵ��
		}
	}
	return -1;//��˼��ȫ����һ�� û�ҵ� ����-1
}

//ɾ��ָ����ϵ��
void del(struct book* arr)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret = search(arr, name);//���ֽ�� ������1  -1   -1����û�ҵ�  ������-1��ʾ�ҵ���
	if (ret != -1)
	{
		//�ҵ��������  Ҫ����ɾ��
		//ɾ����ʽΪ��������˺����������ǰ�ƶ� ������ͨѶ¼�е���Ա����-1������
		//�ƶ�Ӧ��������˺���һ��һ���ƶ�
		int i = ret;
		for (i = ret; i < arr->count; i++)
		{
			//����ǰ�ƣ� ����i�����е����� ����i+1�����е�����
			arr->arr[i] = arr->arr[i + 1];
		}
		arr->count--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "û���ҵ������" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ�ˣ����������鿴ָ����ϵ�˵���Ϣ  �����ϵ�˴��� ����ʾ��ϵ����Ϣ �����ھ���ʾ�Ҳ�������
void find(struct book* arr)
{
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	string name;
	cin >> name;
	//����ָ����ϵ���Ƿ����ͨѶ¼��
	int ret = search(arr, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << arr->arr[ret].name << "\t";
		cout << "�Ա�" << arr->arr[ret].sex << "\t";
		cout << "���䣺" << arr->arr[ret].age << "\t";
		cout << "���룺" << arr->arr[ret].phone << "\t";
		cout << "סַ��" << arr->arr[ret].home << "\t";
	}
	else//û�ҵ���ϵ��
	{
		cout << "û�ҵ������" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ����Ϣ:�����û��������ϵ�� �ҵ���ִ���޸Ĳ���  �Ҳ�������ʾ��δ�ҵ�����ϵ��
void modify(struct book* arr)
{
	cout << "��������޸�" << endl;
	cout << "��������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = search(arr, name);
	if (ret != -1)//�ҵ��Ļ�   ÿ����Ϣ�������޸�
	{
		//����
		string name;
		cout << "������Ҫ���ĵ�������" << endl;
		cin >> name;
		arr->arr[ret].name = name;
		//�Ա�
		cout << "������Ҫ�����Ա�" << endl;
		cout << " 1 ������    2 ����Ů " << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				arr->arr[ret].sex = sex;
				break;
			}
			else
			{
				cout << "�����������������" << endl;
			}
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		arr->arr[ret].age = age;
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		arr->arr[ret].phone = phone;
		//סַ
		cout << "������סַ" << endl;
		string home;
		cin >> home;
		arr->arr[ret].home = home;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��:����ϵ��������Ϊ0������ �����߼���� ��Ϊ�����Ļ����ʲ�����ϵ�˵���Ϣ���൱�����
void empty(struct book* arr)
{
	arr->count = 0;//����¼����ϵ��������Ϊ0�������߼��ϵ���ղ���
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//������ϵ����Ϣ
	struct book arr;//������ͨѶ¼�ṹ�����
	arr.count = 0;//����Ա��ʼ��Ϊ0
	int input = 0;
	do {
		menu();//����Ŀ¼
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "�����ϵ��" << endl;//��ӵ�ʱ�� Ҫ���ýṹ�� ���һ��ͨѶ¼���� ���Թ���
			Addpeople(&arr);//���õ�ַ����  ���������޸�ʵ��
			break;
		case 2:
			cout << "��ʾ��ϵ��" << endl;//���Է�����ϵ����Ϣ��ʾ��һ������ȽϺ� ��Ȼ�˶�Ļ��ͺ��鷳
			showpeople(&arr);
			break;
		case 3://��һ��case����д���ܳ�ʱ ����ʹ��{}ʹ����һ������� �������Ա��ⱨ��
		//{
			cout << "ɾ����ϵ��" << endl;
			//	cout << "������ɾ����ϵ�˵�����" << endl;
			//	string name;
			//	cin >> name;
			//	if (search(&arr, name) == -1)
			//	{
			//		cout << "û�ҵ�����ϵ��" << endl;
			//	}
			//	else
			//	{
			//		cout << "�ҵ����ˣ�" << endl;
			//	}
			//}ͨ�����뷢�ֲ���û����

				//ɾ����ϵ�� ���ҵ���ɾ����ϵ�� ��ʾɾ���ɹ�   �鲻����ʾ���Ҳ��������
			del(&arr);
			break;
		case 4:
			cout << "������ϵ��" << endl;
			find(&arr);
			break;
		case 5:
			cout << "�޸���ϵ��" << endl;
			modify(&arr);
			break;
		case 6:
			cout << "�����ϵ��" << endl;
			empty(&arr);
			break;
		case 0:
			cout << "�˳�����" << endl;
			break;
		default:
			cout << "ѡ���������ѡ��" << endl;
			break;
		}
	} while (input);
	return 0;
}