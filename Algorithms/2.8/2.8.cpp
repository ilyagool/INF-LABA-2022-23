#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, stars;

	cout << "Введите число N(натуральное и большее 2)" << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "Неверно!" << endl;
	}

	stars = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= stars; j++)
		{
			cout << "* ";
		}

		stars++;

		cout << endl;

	}
}