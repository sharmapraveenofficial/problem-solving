#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string normalize(const string &sentence)
{
    string copy = sentence;

    bool cOs = true;
    for (int i = 0; i < copy.size(); i++)
    {
        if (cOs)
            copy[i] = toupper(copy[i]);
        else
            copy[i] = tolower(copy[i]);

        if ((int)copy[i] == 32)
            cOs = true;
        else
            cOs = false;
    }

    return copy;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    getline(cin, s);

    cout << normalize(s);
}
