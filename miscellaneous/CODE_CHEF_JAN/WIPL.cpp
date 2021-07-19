#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int count1 = INT_MAX;

int t[4001][4001];

int cpl(int arr[], int i, long sum1, long sum2, int count, int k)
{

    if ((sum1 >= k) && (sum2 >= k))
    {
        if ((count < count1) || (count1 < 0))
        {
            count1 = count;
        }
        return count1;
    }
    if (i < 0)
    {
        if (count1 == 0)
            count1 = -1;
        return count1;
    }

    if (t[i][sum1] != -1)
        return t[i][sum1];
    else if (t[i][sum1] != -1)
        return t[i][sum1];

    if (sum1 < k)
        t[i][sum1] = cpl(arr, i - 1, sum1 + arr[i], sum2, count + 1, k);
    if (sum2 < k)
        t[i][sum2] = cpl(arr, i - 1, sum1, sum2 + arr[i], count + 1, k);

    return count1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n, k;
        cin >> n;
        cin >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 4001; i++)
            for (int j = 0; j < 4001; j++)
                t[i][j] = -1;
        sort(a, a + n);
        count1 = INT_MAX;
        cpl(a, n - 1, 0, 0, 0, k);
        if (count1 == INT_MAX)
            cout << -1 << endl;
        else
            cout << count1 << endl;
    }
    return 0;
}