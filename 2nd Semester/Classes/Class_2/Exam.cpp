#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

//конструктор без параметров
Exam::Exam() {
	fullname = "";
	item = "";
	grade = 0;
	cout << "Конструктор без параметров для объекта " << this << endl;
}

//конструктор с параметрами
Exam::Exam(string n, string k, int s) {
	fullname = n;
	item = k;
	grade = s;
	cout << "Конструктор с параметрами для объекта " << this << endl;
}

//конструктор копирования
Exam::Exam(const Exam &t) {
	fullname = t.fullname;
	item = t.item;
	grade = t.grade;
	cout << "Конструктор копирования для объекта " << this << endl;
}

Exam::~Exam() {
	cout << "Деструктор для объекта " << this << endl;
}

//селекторы
string Exam::get_fullname() {
	return fullname;
}

string Exam::get_item() {
	return item;
}

int Exam::get_grade() {
	return grade;
}

//модификаторы
void Exam::set_fullname(string n) {
	fullname = n;
}

void Exam::set_item(string k) {
	item = k;
}

void Exam::set_grade(int s) {
	grade = s;
}

void Exam::show() {
	cout << "ФИО студента: " << fullname << endl;
	cout << "Предмет: " << item << endl;
	cout << "Оценка: " << grade << endl;
}