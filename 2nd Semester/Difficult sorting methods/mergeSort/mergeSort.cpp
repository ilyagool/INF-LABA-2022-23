#include <iostream>
#include <cstdlib>

using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int leftRange = mid - left + 1;
    int rightRange = right - mid;

    int* leftArr = new int[leftRange];
    int* rightArr = new int[rightRange];

    for (int i = 0; i < leftRange; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightRange; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mergeIndex = left;

    while (leftIndex < leftRange && rightIndex < rightRange)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[mergeIndex] = leftArr[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mergeIndex] = rightArr[rightIndex];
            rightIndex++;
        }
        mergeIndex++;
    }

    while (leftIndex < leftRange)
    {
        arr[mergeIndex] = leftArr[leftIndex];
        leftIndex++;
        mergeIndex++;
    }
    while (rightIndex < rightRange)
    {
        arr[mergeIndex] = rightArr[rightIndex];
        rightIndex++;
        mergeIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end) { return; }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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

    mergeSort(arr, 0, row-1);
    cout << endl;

    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}