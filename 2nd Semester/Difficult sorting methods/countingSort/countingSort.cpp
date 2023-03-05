#include <iostream>
#include <cstdlib>

using namespace std;

void countSort(int arr[], int size)
{
    int* output = new int[size];
    int* count;
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max) { max = arr[i]; }
    }

    count = new int[max + 1];
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i]; //in-place сортировку делаем
    }
    delete[] count;
    delete[] output;
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
    countSort(arr, row);
    cout << endl;
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}