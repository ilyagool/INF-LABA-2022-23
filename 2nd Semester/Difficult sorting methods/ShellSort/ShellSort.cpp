#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int row, d, tpm, j;
    cout << "Введите длину массива:";
    cin >> row;
    int arr[100];
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < row; i++)
    {
        arr[i] = rand() % 100 - 5;
        cout << arr[i] << " ";
    }
    
    d = row / 2;
    while (d > 0)
    {
        for (int i = 0; i < row - d; i++)
        {
            j = i;
            while (j >= 0 and arr[j] > arr[j + d])
            {
                tpm = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = tpm;
                j -= d;
            }
        }
        d = d / 2;
    }

    cout << endl;
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}