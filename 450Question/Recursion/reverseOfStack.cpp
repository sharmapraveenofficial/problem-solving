#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int> &s, int top)
{
    if (s.empty())
    {
        s.push(top);
        return;
    }

    int temp = s.top();
    s.pop();
    insert(s, top);
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }

    int top = s.top();
    s.pop();
    reverseStack(s);
    insert(s, top);
}

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << '\n';
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

        cout << "Stack Before Reverse : ";
        printStack(s);

        reverseStack(s);

        cout << "Stack After Reverse : ";
        printStack(s);
    }

    return 0;
}