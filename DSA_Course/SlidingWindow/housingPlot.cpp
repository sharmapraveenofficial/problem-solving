#include <string>
#include <iostream>

using namespace std;

void housingPlot(int a[], int n, int k)
{
    int currentSum = 0;
    int i = 0;
    int j = 0;

    while (j < n)
    {

        if (currentSum == k)
        {
            cout << i << " " << j - 1 << endl;
            currentSum += a[j++];
        }

        if (currentSum < k)
        {
            currentSum += a[j];
            j++;
        }

        else if (currentSum > k)
        {
            currentSum -= a[i];
            i++;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    int k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    housingPlot(a, n, k);
}