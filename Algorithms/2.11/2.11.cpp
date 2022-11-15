#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, num, m;
	cin >> n >> num;
	m = num;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		if (m == 0)
		{
			m = num;
		}
	}
	if (m > 0)
	{
		cout << "Первое число является положительным";
	}
	else if (m < 0)
	{
		cout << "Первое число является отрицательным";
	}
	else if (m == 0)
	{
		cout << "Все числа нули";
	}

	return 0;
}