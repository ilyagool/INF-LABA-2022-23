#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float n, a, s;
    bool flag = false;
    cout << "Введите n" << endl; cin >> n; cout << "Введите s" << endl; cin >> s;
    for (int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (s == a)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Есть";
    }
    else
    {
        cout << "Нет";
    }


    return 0;
}