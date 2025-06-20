#include "globalFile.h"
#include "Identity.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void LoginIn(string fileName, int type) {
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	// �ļ����������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) // ѧ��
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "���������ְ����" << endl;
		cin >> id;
	}

	cout << "����������û���" << endl;
	cin >> name;

	cout << "����������" << endl;
	cin >> pwd;

	if (type == 1)
	{
		// ѧ����¼��֤
	}
	else if (type == 2)
	{
		// ��ʦ��¼��֤
	}
	else if (type == 3)
	{
		// ����Ա��¼��֤
	}

	cout << "��֤��¼ʧ�ܣ�" << endl;

	system("pause");
	system("cls");
	return;
}

int main() {
	int select = 0;

	while (true) {
		cout << "======================  ��ӭ�������ǲ��ͻ���ԤԼϵͳ  ====================="
			<< endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ������           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.��    ʦ           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "��������ѡ��: ";

		cin >> select;

		switch (select)
		{
		case 1: // ѧ��
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2: // ��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3: // ����Ա
			break;
		case 0:
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����д������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}

		system("pause");
	}
	return 0;
}