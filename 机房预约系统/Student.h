#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include "OrderFIle.h"
#include "Identity.h"
#include"globalFile.h"
#include "computerRoom.h"

class Student : public Identity
{
public:
	// Ĭ�Ϲ���
	Student();

	// �вι��죨ѧ�š����������룩
	Student(int id, string name, string pwd);

	// �˵�����
	virtual void openMenu();

	// ����ԤԼ
	void applyOrder();

	// �鿴�ҵ�ԤԼ
	void showMyOrder();

	// �鿴����ԤԼ
	void showAllOrder();

	// ȡ��ԤԼ
	void cancelOrder();

	// ѧ��ѧ��
	int m_Id;

	// ��������
	vector<ComputerRoom> vCom;
};

