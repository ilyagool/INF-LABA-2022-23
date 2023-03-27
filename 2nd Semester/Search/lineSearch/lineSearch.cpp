#include <iostream>

using namespace std;

int lineSearch(int arr[], int key, const int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key) { cnt += 1; }
	}
	return cnt;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int key, n, arr[1000];
	srand(time(NULL));
	cout << "Размер массива > "; 
	cin >> n;
	cout << "Искомый элемент > "; 
	cin >> key;
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Ответ: " << lineSearch(arr, key, n);

	return 0;
}