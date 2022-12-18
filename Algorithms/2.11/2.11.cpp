﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int n, tpm;
    bool plusFirst = false;
    bool minusFirst = false;

    cout << "Введите длину последовательности:" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> tpm;
        if (!plusFirst && !minusFirst)
        {
            if (tpm > 0)
            {
                plusFirst = true;
            }
            else if (tpm < 0)
            {
                minusFirst = true;
            }
        }
    }

    if (plusFirst)
    {
        cout << "Сначала ввели положительное число";
    }
    else if (minusFirst)
    {
        cout << "Сначала ввели отрицательное число";
    }
    else
    {
        cout << "Все были нулевыми";
    }
    cout << endl;
}