#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float n, a, max = -1;
    int amount = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
        }
        else if (a == max)
        {
            amount += 1;
        }
    } cout << "Количетво элементов, совпадающих с максимальным" << ' ' << amount;


    return 0;
}