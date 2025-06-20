#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"
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

	//检测重复 参数:(传入id，传入类型) 返回值：(true 代表有重复，false 代表没有重复)
	bool checkRepeat(int id, int type);

	// 初始化容器
	void initVector();

	// 学生容器
	vector<Student> vStu;

	// 教师容器
	vector<Teacher> vTea;
};

