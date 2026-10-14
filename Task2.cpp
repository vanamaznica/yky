#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("input.txt");
    string s;
    int max = 0;

    while (getline(file, s))
    {
        if (s.length() > max)
            max = s.length();
    }

    file.close();
}