#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n, sum = 0;
    cin >> n;
    if (n < 0)
    {
        cout << "Число должно быть > 0";
    }
    else
    {
        while (n)
        {
            sum += n % 10;
            n = n / 10;
        }
    } cout << sum;

    return 0;
}