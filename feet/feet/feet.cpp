// feet.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int tf, int ti);
	void display();
	~CFeet();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::CFeet(int tf, int ti)
{
	feet = tf;
	inches = ti;
	cout << "���๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
void CFeet::display()
{
	cout << "Display" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	CMyFeet();
	CMyFeet(int tf, int ti);
	~CMyFeet();
};

CMyFeet::CMyFeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyFeet::CMyFeet(int f, int i) :CFeet(f, i)
{
	cout << "�����๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyFeet::~CMyFeet()
{
	cout << "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}

int main()
{	
	CMyFeet of1(4, 2);
	of1.display();
    return 0;
}