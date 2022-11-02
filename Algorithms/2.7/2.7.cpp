#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    float n;
    int Stars;
    int r;
    char star = '*';
    char probel = ' ';

    std::cout << "Введите число N:" << std::endl;
    std::cin >> n;

    if ((n <= 0) or ((int)n != n))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; 
    }

    std::cout << "Что тебе нужно?\n"
        "1) Квадрат в котором ВСЕГО N звездочек.(если введено нечетное N, то округление будет в меньшую сторону\n"
        "2) Заполненный квадрат со стороной N.\n"
        "3) Пустой квадрат со стороной N." << std::endl;
    std::cin >> r;

    if ((r < 1) and (r > 3))
    {
        std::cout << "Неверно!" << std::endl;
        goto start;
    }

    switch (r)
    {
    case 1:
        Stars = n / 3;
        for (int i = 0; i < Stars; i++)
        {
            for (int j = 0; j < Stars; j++)
            {
                std::cout << star;
            }
            std::cout << std::endl;
        }
        break;
    case 2:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << star;
            }
            std::cout << std::endl;
        }
        break;
    case 3:
        for (int i = 0; i < n; i++)
        {
            std::cout << star;
        }
        std::cout << std::endl;
        for (int i = 0; i < n - 2; i++)
        {
            std::cout << star;
            for (int j = 0; j < n - 2; j++)
            {
                std::cout << probel;
            }
            std::cout << star;
            std::cout << std::endl;
        }
        for (int i = 0; i < n; i++)
        {
            std::cout << star;
        }
        std::cout << std::endl;
        break;
    default:
        break;
    }
}