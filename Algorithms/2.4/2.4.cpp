#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    float n;
    int Probels;
    int Stars = 1;
    char probel = ' ';
    char star = '*';
    std::cout << "Введите основание равнобедренного треугольника N (нечетное и больше 3-ёх)" << std::endl;
    std::cin >> n;

    if ((n <= 3) or ((int)n != n) or ((int)n % 2 != 1))
    {
        std::cout << "Неверно!" << std::endl;
        goto start;
    }
    Probels = n / 2;
    std::cout << std::endl;

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= Probels; j++)
        {
            std::cout << probel;
        }

        for (int j = 1; j <= Stars; j++)
        {
            std::cout << star;
        }

        if (Stars != n)
        {
            std::cout << std::endl;
        }

        Probels--;
        Stars += 2;
    }

    std::cout << std::endl;
}