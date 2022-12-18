#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, tpm, max, min;

    cout << "Введите длину последовательности:" << endl;
    cin >> n;

    cout << "Введите первое число:" << endl;
    cin >> tpm;
    max = tpm;
    min = tpm;

    for (int i = 2; i <= n; i++)
    {
        cout << "Введите следующее число:" << endl;
        cin >> tpm;
        if (tpm > max)
        {
            max = tpm;
        }
        else if (tpm < min)
        {
            min = tpm;
        }
    }
    cout << "Сумма максимального и минимального элементов: " << (max + min) << endl;
}