#pragma once
using namespace std;
#include<iostream>
#include <map>
#include <fstream>
#include "globalFile.h"

class OrderFIle
{
public:

	// 构造函数
	OrderFIle();

	// 更新预约记录
	void updateOrder();

	// 记录的容器 key -- 记录的条数 value -- 具体记录的键值对信息
	map<int, map<string, string>> m_orderData;

	// 记录的条数
	int m_Size;
};

