#include <iostream>
#include <string>

using namespace std;

bool defPal(string s)
{
	int first = 0;
	int last = s.length() - 1;
	while (first < last)
	{
		if (s[first] != s[last]) { return false; }
		first++;
		last--;
	}
	return true;
}

void printPal(string s)
{
	string word = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			if (defPal(word))
			{
				cout << word << " ";
			}
			word = "";
		}
		else
		{
			word += s[i];
		}
	}
	if (defPal(word))
	{
		cout << word << " ";
	}
}

int main()
{
	setlocale(LC_ALL, ("RUS"));

	string s;
	cout << "Введите строку: ";
	getline(cin, s);
	cout << "Слова-палидромы: ";
	printPal(s);

	return 0;
}
