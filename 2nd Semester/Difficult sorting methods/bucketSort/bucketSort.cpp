#include <iostream>
#include <cstdlib>

using namespace std;

void bucketSort(int arr[], int n)
{
	const int NUM_BUCKETS = 10;
	const int ARRAY_SIZE = 10;

	int buckets[NUM_BUCKETS][ARRAY_SIZE];

	int bucketSizes[NUM_BUCKETS] = { 0 };

	for (int i = 0; i < n; i++)
	{
		int bucketIndex = arr[i] / NUM_BUCKETS;
		buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
		bucketSizes[bucketIndex]++;
	}

	for (int i = 0; i < NUM_BUCKETS; i++)
	{
		for (int j = 1; j < bucketSizes[i]; j++)
		{
			int temp = buckets[i][j];
			int k = j - 1;
			while (k >= 0 && buckets[i][k] > temp)
			{
				buckets[i][k + 1] = buckets[i][k];
				k--;
			}
			buckets[i][k + 1] = temp;
		}
	}

	int index = 0;
	for (int i = 0; i < NUM_BUCKETS; i++)
	{
		for (int j = 0; j < bucketSizes[i]; j++)
		{
			arr[index++] = buckets[i][j];
		}
	}
}

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int row;
    cout << "Введите длину массива:";
    cin >> row;
    int arr[100];
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < row; i++)
    {
        arr[i] = rand() % 100 - 5;
        cout << arr[i] << " ";
    }
    bucketSort(arr, row);
    cout << endl;
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}