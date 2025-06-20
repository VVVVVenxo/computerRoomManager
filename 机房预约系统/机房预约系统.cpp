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

	// 文件不存在情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) // 学生
	{
		cout << "请输入你的学号" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入你的职工号" << endl;
		cin >> id;
	}

	cout << "请输入你的用户名" << endl;
	cin >> name;

	cout << "请输入密码" << endl;
	cin >> pwd;

	if (type == 1)
	{
		// 学生登录验证
	}
	else if (type == 2)
	{
		// 教师登录验证
	}
	else if (type == 3)
	{
		// 管理员登录验证
	}

	cout << "验证登录失败！" << endl;

	system("pause");
	system("cls");
	return;
}

int main() {
	int select = 0;

	while (true) {
		cout << "======================  欢迎来到传智播客机房预约系统  ====================="
			<< endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.学生代表           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.老    师           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.管 理 员           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.退    出           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "输入您的选择: ";

		cin >> select;

		switch (select)
		{
		case 1: // 学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2: // 老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3: // 管理员
			break;
		case 0:
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有错误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}

		system("pause");
	}
	return 0;
}