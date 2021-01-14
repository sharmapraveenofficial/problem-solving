#include <iostream>

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
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        string s = "abcdefghijklmnop";
        int m = s.size();
        int i = 0;
        string t = "";

        while (i <= n)
        {
            int j = i, k = m - 1, mi = 0;
            while (j <= k)
            {
                int mid = j + (k - j) / 2;
                if (a[i] == 0)
                    k = mid - 1;
                else if (a[i] == 1)
                    j = mid + 1;
                mi = mid;
                cout << j << k << endl;
            }
            t += s[mi];
            i += 4;
        }
        cout << t << endl;
    }
    return 0;
}