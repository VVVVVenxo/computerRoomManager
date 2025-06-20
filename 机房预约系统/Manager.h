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

	// 添加账号
	void addPerson();

	// 查看账号
	void showPerson();

	// 查看机房信息
	void showComputer();

	// 清空预约记录
	void cleanFile();
};

