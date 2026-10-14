#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("input.txt");
    string word, s;
    int count = 0;
    cout << "Enter word: ";
    cin >> word;

    while (file >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ',' || s[i] == '.' ||
                s[i] == '!' || s[i] == '?')
                s.erase(i, 1);
        }
        if (s == word)
            count++;
    }
    file.close();
}
