#include <iostream>
#include <stdlib.h>
using namespace std;

void del(int a[], int t)
{
	int n = 5;
	t = 25;
	for (int i = 0; i < t-2; i++)
	{
		if (i < t - n)
		{
			a[i] = a[i + n];
		}
		else
		{
			a[i] = rand() % 100;
		}
		cout << a[i] << " ";
	}

}

int main()
{
	const int k = 25;
	int m[k];

	srand(time(NULL));

	for (int i = 0; i < k; i++)
	{
		m[i] = rand() % 100;
		cout << m[i] << " ";
	}

	cout << endl;
	del(m, k);
	
	return 0;
}