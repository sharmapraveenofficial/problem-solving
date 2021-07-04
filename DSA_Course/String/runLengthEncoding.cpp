#include <string>
#include <iostream>

using namespace std;

//str is the input the string
string compressString(const string &str)
{
    //complete the function to return output string
    int count = 1;
    string output;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            output += str[i] + to_string(count);
            count = 1;
        }
    }
    return output.length() < str.length() ? output : str;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;

    cout << compressString(s);
}