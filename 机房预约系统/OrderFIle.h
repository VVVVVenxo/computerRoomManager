#pragma once
using namespace std;
#include<iostream>
#include <map>
#include <fstream>
#include "globalFile.h"

class OrderFIle
{
public:

	// ���캯��
	OrderFIle();

	// ����ԤԼ��¼
	void updateOrder();

	// ��¼������ key -- ��¼������ value -- �����¼�ļ�ֵ����Ϣ
	map<int, map<string, string>> m_orderData;

	// ��¼������
	int m_Size;
};

