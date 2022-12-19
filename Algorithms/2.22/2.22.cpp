#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float n, a, pos, max = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
            pos = i;
        }
    } cout << "Максимальное элемент" << max << endl << "Его значение" << pos;


    return 0;
}