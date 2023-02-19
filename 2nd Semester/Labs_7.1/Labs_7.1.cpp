#include <iostream>
using namespace std;

int  NOD(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return (a + b);
}

void sub1(int A, int B, int C, int D)
{
	int sumN, sumD;
	cout << A << "/" << B << " - " << C << "/" << D << endl;
	sumN = (A * D) - (B * C);
	sumD = (B * D);
	cout << sumN << "/" << sumD << endl;
	int x = NOD(sumN, sumD);
	sumN /= x;
	sumD /= x;
	cout << sumN << "/" << sumD << endl;
}

void sub2(float a, float b)
{
	cout << (a - b) << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int A, B, C, D;
	float a, b;
	cout << "Введите числитель и знаменатель первой дроби:" << endl;
	cin >> A >> B;
	cout << "Введите числитель и знаменатель второй дроби:" << endl;
	cin >> C >> D;
	sub1(A, B, C, D);
	cout << "Введите два вещественных числа:" << endl;
	cin >> a >> b;
	sub2(a, b);

	return 0;
	
}