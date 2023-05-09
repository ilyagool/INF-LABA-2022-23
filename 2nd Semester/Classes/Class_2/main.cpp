#include "Exam.h"
#include <iostream>
#include <string>
using namespace std;

Exam make_exam() {
	string s1, s2;
	int i;
	cout << "Введите ФИО студента: ";
	cin >> s1;
	cout << "Введите предмет: ";
	cin >> s2;
	cout << "Введите оценку: ";
	cin >> i;
	Exam t(s1, s2, i);
	return t;
}

void print_exam(Exam t) {
	t.show();
}

int main() {
	setlocale(LC_ALL, "RUS");
	Exam t1;
	t1.show();

	Exam t2("ГИЮ", "Инф", 5);
	t2.show();

	Exam t3 = t2;
	t3.set_fullname("АОР");
	t3.set_item("Мат");
	t3.set_grade(5);

	print_exam(t3);

	t1 = make_exam();
	t1.show();

	return 0;
}