#include <cmath>
#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	Date a, b, c;
	a.Hipotenuse(6, 2, 20, 5);
	cout << a.Show() << endl;
	b.Hipotenuse(1, 2, 4, 0);
	cout << b.Show() << endl;
	c.Hipotenuse(25, 4, 75, 3);
	cout << c.Show() << endl;

	return 0;
}