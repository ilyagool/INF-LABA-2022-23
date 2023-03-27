#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    ifstream fin("F1.txt");
    ofstream fout("F2.txt");
    string line;
    string longestWord;

    while (getline(fin, line)) {
        bool containsOneWord = true;

        for (char c : line) {
            if (isspace(c)) {
                containsOneWord = false;
                break;
            }
        }

        if (containsOneWord) {
            fout << line << endl;
            if (line.length() > longestWord.length()) {
                longestWord = line;
            }
        }
    }

    fin.close();
    fout.close();

    cout << "Самое длинное слово в файле F2: " << longestWord << endl;

    return 0;
}