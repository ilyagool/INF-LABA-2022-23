#include "Hipotenuse.h"
#include <cmath>
#include <iostream>
using namespace std;

void Hipotenuse::Read(int a, int b, int c, int d) {
	if (b != 0 && d != 0) {
		this->first = a / b;
		this->second = c / d;
		this->h = sqrt(pow(first, 2) + pow(second, 2));

	}
	else
		cout << "����������� �� ����� ���� ����� ����!" << endl;
}

int Hipotenuse::Show() {
	return h;
}