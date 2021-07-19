#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        cout << "YES" << endl;
    }
    else if (a == c)
    {
        cout << "YES" << endl;
    }
    else if (b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}