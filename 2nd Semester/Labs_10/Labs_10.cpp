#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int row, col, r, c;
    cout << "Введите количество строк: ";
    cin >> row;
    cout << "Введите количество столбцов: ";
    cin >> col;
    int** arr = new int*[row];
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 100 - 5;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Введите номер строки которую хотите удалить: ";
    cin >> r;
    
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < r - 1)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i + 1][j];
            }
        }
    }
    
    cout << "Введите номер столбца который хотите удалить: ";
    cin >> c;

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            if (j < c - 1)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j + 1];
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
}