﻿#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    float n;
    char star = '*';
    char probel = ' ';
    int Probels;
    int Stars = 1;

    std::cout << "Введите длину катетов N:" << std::endl;
    std::cin >> n;

    if ((n <= 2) or ((int)n != n))
    {
        std::cout << "Неверно!" << std::endl;
        goto start;
    }

    Probels = 0;
    Stars = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= Stars; j++)
        {
            std::cout << star;
        }

        if (Probels >= 1)
        {
            for (int j = 1; j <= Probels; j++)
            {
                std::cout << probel;
            }
        }

        Stars--;
        Probels++;

        if (Stars < n)
        {
            std::cout << std::endl;
        }

        if (Stars == n)
        {
            break;
        }
    }
}