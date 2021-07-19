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

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        int resArray[] = {20, 36, 51, 60, 76, 88, 99, 104};

        if (n <= 8)
        {
            cout << resArray[n - 1] << endl;
        }
        else
        {
            if (n % 4 == 0)
            {
                long long int down = (n / 4) - 1;
                long long int res = 60 + down * 44;
                cout << res << endl;
            }
            else
            {
                long long int down = (n / 4) - 1;
                int up = (n % 4);

                long long int res = 44 * (down);
                if (up == 1)
                {
                    res = res + 11 + 20 + 45;
                }
                else if (up == 2)
                {
                    res = res + 22 + 30 + 36;
                }
                else if (up == 3)
                {
                    res = res + 51 + 33 + 15;
                }

                cout << res << endl;
            }
        }
    }
}