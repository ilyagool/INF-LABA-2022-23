#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int N, S, k;
    bool flag = false;

    cout << "Введите числа N и S" << endl;
    cin >> N >> S;

    while (N > 0 && !flag)
    {
        k = N % 10;
        if (k == S)
        {
            flag = true;
            cout << "Есть" << endl;
        }
        else
        {
            N /= 10;
        }
    }

    if (!flag)
    {
        cout << "Нет" << endl;
    }
}