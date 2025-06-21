#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "globalFile.h"
#include "Student.h"
#include "Teacher.h"
#include "computerRoom.h"
#include "Identity.h"

class Manager :public Identity
{
public:
	Manager();

	Manager(string name, string pwd);

	virtual void openMenu();

	// ����˺�
	void addPerson();

	// �鿴�˺�
	void showPerson();

	// �鿴������Ϣ
	void showComputer();

	// ���ԤԼ��¼
	void cleanFile();

	//����ظ� ����:(����id����������) ����ֵ��(true �������ظ���false ����û���ظ�)
	bool checkRepeat(int id, int type);

	// ��ʼ������
	void initVector();

	// ѧ������
	vector<Student> vStu;

	// ��ʦ����
	vector<Teacher> vTea;

	// ��������
	vector<ComputerRoom> vCom;
};

