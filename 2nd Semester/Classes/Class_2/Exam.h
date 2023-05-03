#pragma once
#include <iostream>
#include <string>
using namespace std;

class Exam {
	string fullname;
	string item;
	int grade;

public:
	Exam(); //конструктор без параметров
	Exam(string, string, int); //конструктор с параметрами
	Exam(const Exam&); //конструктор копирования
	~Exam(); //деструктор
	string get_fullname();
	void set_fullname(string);
	string get_item();
	void set_item(string);
	int get_grade();
	void set_grade(int);
	void show();
};