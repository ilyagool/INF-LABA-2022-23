#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n, s, a;
    cin >> n >> s;
    if (n < 0)
    {
        cout << "Число должно быть > 0";
    }
    else
    {
        while (n)
        {
            a = n % 10;
            if (s == a)
            {
                cout << "Есть"; break;
            }
            else
            {
                n = n / 10;
            }
        }
        if (s = !n)
        {
            cout << "Нет";
        }
    }

    return 0;
}