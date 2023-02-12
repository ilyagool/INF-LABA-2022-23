#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char tmp)
{
    setlocale(LC_ALL, "RUS");
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from, tmp, to);
    cout << "Переместить кольцо " << n << " из " << from << " в " << to << endl;
    towerOfHanoi(n - 1, tmp, to, from);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;

    cout << "Введите количество колец: ";
    cin >> n;
    cout << endl;

    towerOfHanoi(n, '1', '3', '2');
    return 0;
}
