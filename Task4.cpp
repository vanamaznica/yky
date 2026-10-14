#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("input.txt");
    ofstream out("output.txt");
    string s, word, replace;
    string text = "";

    cout << "Enter word to find: ";
    cin >> word;
    cout << "Enter replacement: ";
    cin >> replace;

    while (getline(file, s))
    {
        text += s + "\n";
    }

    int pos = 0;

    while ((pos = text.find(word, pos)) != string::npos)
    {
        text.replace(pos, word.length(), replace);
        pos += replace.length();
    }
    out << text;
    file.close();
    out.close();
}