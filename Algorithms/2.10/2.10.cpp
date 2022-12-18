#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, max, tpm;
	cout << "Введите длину последовательности:" << endl;
	cin >> n;
	cout << "Введите первое число:" << endl;
	cin >> max;

	for (int i = 2; i <= n; i++)
	{
		cout << "Введите следующее число:" << endl;
		cin >> tpm;

		if (tpm > max)
		{
			max = tpm;
		}
	}

	cout << "Максимальный элемент: " << max << endl;
}