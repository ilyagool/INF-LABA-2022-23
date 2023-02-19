#include <iostream>
#include <cstdlib>
using namespace std;

bool searchNeg(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			return true;
		}
	}
	return false;
}

void moveNeg(int arr[][100], int r, int c)
{
	int newArr[100][100];
	int p = 0, n = r - 1;
	for (int i = 0; i < r; i++)
	{
		if (searchNeg(arr[i], c))
		{
			for (int j = 0; j < c; j++)
			{
				newArr[p][j] = arr[i][j];
				newArr[n][j] = 0;
				
			}
			n--;
		}
		else
		{
			for (int j = 0; j < c; j++)
			{
				newArr[p][j] = arr[i][j];
			}
			p++;
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = newArr[i][j];
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int col, row, n;
	cout << "Введите количество строк:";
	cin >> row;
	cout << "Введите количество столбцов:";
	cin >> col;

	int arr[100][100];
	cout << "Исходный массив:" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100 - 5;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Введите номер строки, которую хотите проверить:";
	cin >> n;
	if (searchNeg(arr[n-1], col))
	{
		cout << "Строка " << n << " содержит отрицательные элементы." << endl;
	}
	else
	{
		cout << "Строка " << n << " не содержит отрицательных элементов." << endl;
	}

	moveNeg(arr, row, col);
	cout << "Новый массив:" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
	


