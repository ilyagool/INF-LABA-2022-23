#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

//����������� ��� ����������
Exam::Exam() {
	fullname = "";
	item = "";
	grade = 0;
	cout << "����������� ��� ���������� ��� ������� " << this << endl;
}

//����������� � �����������
Exam::Exam(string n, string k, int s) {
	fullname = n;
	item = k;
	grade = s;
	cout << "����������� � ����������� ��� ������� " << this << endl;
}

//����������� �����������
Exam::Exam(const Exam &t) {
	fullname = t.fullname;
	item = t.item;
	grade = t.grade;
	cout << "����������� ����������� ��� ������� " << this << endl;
}

Exam::~Exam() {
	cout << "���������� ��� ������� " << this << endl;
}

//���������
string Exam::get_fullname() {
	return fullname;
}

string Exam::get_item() {
	return item;
}

int Exam::get_grade() {
	return grade;
}

//������������
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
	cout << "��� ��������: " << fullname << endl;
	cout << "�������: " << item << endl;
	cout << "������: " << grade << endl;
}