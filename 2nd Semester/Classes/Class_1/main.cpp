#include <cmath>
#include "Hipotenuse.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	Hipotenuse a, b, c;
	a.Read(6, 2, 20, 5);
	cout << a.Show() << endl;
	b.Read(1, 2, 4, 0);
	cout << b.Show() << endl;
	c.Read(25, 4, 75, 3);
	cout << c.Show() << endl;

	return 0;
}