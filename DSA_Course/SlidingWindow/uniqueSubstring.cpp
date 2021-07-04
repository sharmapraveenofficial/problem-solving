#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

string unique_substring(string s)
{
    int i = 0;
    int j = 0;

    unordered_map<char, int> map;

    while (j < s.length())
    {
        }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string input;
    cin >> input;

    cout << unique_substring(input);
}