#pragma once
#include <iostream>
using namespace std;
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
};

