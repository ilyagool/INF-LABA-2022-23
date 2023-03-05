#include <iostream>
#include <cstdlib>

using namespace std;

void quickSort(int arr[], int left, int right)
{
    if (left > right) { return; }
    int pivot = arr[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j)
    {
        while (arr[i] < pivot) { i++; }
        while (arr[j] > pivot) { j--; }
        if (i <= j)
        {
            int tpm = arr[i];
            arr[i] = arr[j];
            arr[j] = tpm;
            i++;
            j--;
        }
    }
    quickSort(arr, left, j);
    quickSort(arr, i, right);
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
    quickSort(arr, 0, row - 1);
    cout << endl;
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}