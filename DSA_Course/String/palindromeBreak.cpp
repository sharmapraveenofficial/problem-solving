#include <string>
#include <iostream>

using namespace std;

string breakPalindrome(string p)
{
    int size = p.length();

    if (size == 1)
        return "";

    for (int i = 0; i < size / 2; i++)
    {
        if (p[i] != 'a')
        {
            p[i] = 'a';
            return p;
        }
    }

    p[size - 1] = 'b';
    return p;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    getline(cin, s);

    cout << breakPalindrome(s);
}