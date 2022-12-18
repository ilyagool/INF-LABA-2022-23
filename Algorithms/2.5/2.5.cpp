#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    int spaces;
    cout << "Введите длину катетов N(натуральное и большее 2):" << endl;
    cin >> n;
    
    if (n <= 2)
    {
        cout << "Неверно!" << endl;
    }

    spaces = n;

    for (int i = 0; i < n; i++)
    {
        spaces--;

        for (int j = 1; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
