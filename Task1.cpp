#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("input.txt");
    ofstream out("output.txt");
    string s;
    string lines[1000];
    int n = 0;

    while (getline(file, s))
    {
        lines[n] = s;
        n++;
    }

    for (int i = 0; i < n - 1; i++)
        out << lines[i] << endl;

    file.close();
    out.close();
}
