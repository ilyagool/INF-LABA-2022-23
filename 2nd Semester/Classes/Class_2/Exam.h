#pragma once
#include <iostream>
#include <string>
using namespace std;

class Exam {
	string fullname;
	string item;
	int grade;

public:
	Exam(); //����������� ��� ����������
	Exam(string, string, int); //����������� � �����������
	Exam(const Exam&); //����������� �����������
	~Exam(); //����������
	string get_fullname();
	void set_fullname(string);
	string get_item();
	void set_item(string);
	int get_grade();
	void set_grade(int);
	void show();
};