#include <iostream>
using namespace std;

int devision(int n)
{
    if (n >= 0 && n <= 10)
        return n;

    for (int i = 10; i > 0; i--)
    {
        if ((n % i) == 0)
        {
            return i;
        }
    }

    return 0;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << devision(n) << endl;
}