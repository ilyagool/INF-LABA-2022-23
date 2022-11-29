#include <iostream>
 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

    int tmp, next;
    bool ordered = true;

    cin >> tmp;

    while (tmp != 0)
    {
        cin >> next;
        if (next != 0 && tmp > next)
        {
            ordered = false;
        }
        tmp = next;
    }

    if (ordered)
    {
        cout << "Последовательность упорядочена по возрастанию." << endl;
    }
    else
    {
        cout << "Последовательность не упорядочена по возрастанию." << endl;
    }

}