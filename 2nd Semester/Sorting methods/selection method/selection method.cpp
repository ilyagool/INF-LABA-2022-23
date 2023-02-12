#include <iostream>
using namespace std;

int main()
{
	int tmp;
	int SIZE = 5;
	int a[] = {50, 6, 80, -10, 777};
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	
	for (int i = 0; i < SIZE - 1; i++)
	{
		int min = i;
		for (int j = i; j < SIZE; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}