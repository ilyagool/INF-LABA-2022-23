#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    int s = 0;
    int sum;
    int flag = 1;
    int с = 1;
    float n;

    std::cout << "Введите число N > 0:" << std::endl;
    std::cin >> n;

    if ((n <= 0) or (int(n) != n))
    {
        std::cout << "Неверно" << std::endl;
        goto start; 
    }

    for (int i = 1; i <= n; i++)
    {
        sum = i;
        for (int j = flag; j <= flag + с; j++)
        {
            sum *= j;
        }
        flag = 2;
        s += sum;
        flag += i;
        if (flag >= 4)
        {
            с += 1;
        }
    }

    std::cout << s << std::endl;
}
