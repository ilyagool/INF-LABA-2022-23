#include <iostream>
using namespace std;

int main()
{
	int tmp;
	int SIZE = 5;
	int m[] = { 13, 7, -9, 1, 76 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << m[i] << " ";
	}
	
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (m[j] > m[j + 1])
			{
				tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << m[i] << " ";
	}
	return 0;
}