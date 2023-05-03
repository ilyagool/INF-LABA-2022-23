#include "Header.h"
#include <cmath>
#include <iostream>
using namespace std;

void Date::Hipotenuse(int a, int b, int c, int d) {
	if (b != 0 && d != 0) {
		this->first = a / b;
		this->second = c / d;
		this->h = sqrt(pow(first, 2) + pow(second, 2));

	}
	else
		cout << "Знаменатель не может быть равен нулю!" << endl;
}

int Date::Show() {
	return h;
}