#include <iostream>
#include <stack>

using namespace std;
void deleteMid(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int top = s.top();
    s.pop();
    deleteMid(s, k - 1);
    s.push(top);
}

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

        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.push(val);
        }

        int k = (n / 2) + 1;

        deleteMid(s, k);

        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << '\n';
    }

    return 0;
}