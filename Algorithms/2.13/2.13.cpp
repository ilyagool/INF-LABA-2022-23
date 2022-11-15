#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double a, b, c, d;
    cin >> a >> b >> c;
    d = (b * b - 4 * a * c);
    if (d < 0)
    {
        cout << " Корней нет ";
    }
    else if (d == 0)
    {
        cout << " x = " << (-1 * b + sqrt(d)) / (2 * a);
    }
    else
    {
        cout << " x1 = " << (-1 * b + sqrt(d)) / (2 * a) << endl;
        cout << "x2 = " << (-1 * b - sqrt(d)) / (2 * a);
    }

    return 0;
}