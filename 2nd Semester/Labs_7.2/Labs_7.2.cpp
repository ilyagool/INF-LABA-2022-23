#include <iostream>
#include <cmath>
#include <stdarg.h>
using namespace std;

int kvadr(int amount, ...)
{
	va_list args;
	va_start(args, amount);
	int count = 0;

	for (int i = 0; i < amount ; i++)
	{
		int num = va_arg(args, int);
		int r = sqrt(num);
		if (r * r == num)
		{
			count++;
		}
	}
	va_end(args);
	return count;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Количество полных квадратов: " << kvadr(3, 2, 9, 64) << endl;

	cout << "Количество полных квадратов: " << kvadr(7, 3, 4, 9, 15, 25, 36, 60) << endl;

	cout << "Количество полных квадратов: " << kvadr(11, 1, 2, 4, 16, 17, 36, 60, 64, 78, 81, 100) << endl;

	return 0;
}