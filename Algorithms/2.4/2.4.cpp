#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    cout << "Введите основание равнобедренного треугольника N (нечетное и больше 3-ёх)" << endl;
    cin >> n;
    int spaces = n / 2;
    int stars = 1;
    
    
    if ((n <= 3) or ((int)n != n) or ((int)n % 2 != 1))
    {
        cout << "Неверно!" << endl;
    }
    
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        cout << endl;

        stars += 2;
        spaces--;
    }
}
