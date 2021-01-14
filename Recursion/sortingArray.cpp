#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
    return;
}
void sort(vector<int> &v)
{
    if (v.size() == 1)
        return;

    int temp = v[v.size() - 1];
    v.pop_back();

    sort(v);
    insert(v, temp);
    return;
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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v);

        for (int i = 0; i < n; i++)
        {
            cout << v.at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}