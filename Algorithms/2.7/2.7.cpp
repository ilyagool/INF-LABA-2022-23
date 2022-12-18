#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int s;
	cout << "Введите число N(квадрат числа)" << endl;
	cin >> n;
	s = sqrt(n);
	if (s * s != n)
	{
		cout << "Неверно!" << endl;
	}
	else
	{

		for (int i = 1; i <= s; i++) 
		{
			for (int j = 1; j <= s; j++) 
			{
				cout << "* ";
			}
			cout << endl; 
		}
	}
	cout << "Введите число N(длина ребра)" << endl;
	cin >> n;
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			cout << "* ";
		}
		cout << endl; 
	}
	cout << endl;
	cout << "Введите число N(длина ребра)" << endl;
	cin >> n;
	int spaces = n - 2;

	for (int i = 1; i <= n; i++) 
	{
		if ((i == n) || (i == 1))
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}

			cout << endl;

		}
		else
		{
			cout << "* ";
			for (int j = 1; j <= spaces; j++)
			{
				cout << "  ";

			}
			cout << "* " << endl;

		}
	}
}