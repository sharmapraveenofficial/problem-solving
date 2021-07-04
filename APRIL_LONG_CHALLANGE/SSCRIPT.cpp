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
        int n, k;
        string s;
        cin >> n >> k >> s;
        int current_cout = 0, max_count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                current_cout++;
                max_count = max(max_count, current_cout);
            }
            else
            {
                current_cout = 0;
            }
        }

        if (max_count >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}