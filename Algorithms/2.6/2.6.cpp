#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    int spaces;
    int stars = 1;
    cout << "Введите длину катетов N(натурально и большее 2):" << endl;
    cin >> n;

    if (n <= 2)
    {
        cout << "Неверно!" << endl;
    }

    spaces = 0;
    stars = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        spaces++;
        stars--;

        cout << endl;
    }
}
