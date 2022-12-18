#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число N(натуральное)" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int tmp = 1;
        for (int j = i; j <= 2 * i; j++)
        {
            tmp *= j;
        }
        sum += tmp;
    }
    cout << sum << endl;
}

