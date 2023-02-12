#include <iostream>
using namespace std;

int main()
{
	int tmp;
	int SIZE = 5;
	int a[] = {4, 78, -8, 900,467};
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			tmp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = tmp;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}