#include <iostream>
#include <stack>

using namespace std;
void insert(stack<int> &s, int temp)
{
    if (s.empty() || temp >= s.top())
    {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void sort(stack<int> &s)
{
    // Base case: stack is empty
    if (s.empty())
    {
        return;
    }

    // remove the top element
    int top = s.top();
    s.pop();

    // recur for the remaining elements in the stack
    sort(s);

    // insert the popped element back in the sorted stack
    insert(s, top);
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

        sort(s);

        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << '\n';
    }

    return 0;
}