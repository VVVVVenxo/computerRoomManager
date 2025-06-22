#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include "OrderFIle.h"
#include "Identity.h"
#include"globalFile.h"
#include "computerRoom.h"


class Teacher : public Identity
{
public:

	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void openMenu();

	// 查看所有预约
	void showAllOrder();

	// 审核预约
	void validOrder();

	int m_EmpId; // 教师编号
};

