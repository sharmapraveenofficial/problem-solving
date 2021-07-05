#include <iostream>

using namespace std;

int binary_search(int ar[], int n, int k)
{
    int s = 0;
    int e = n - 1;

    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (ar[mid] == k)
            return mid;
        else if (ar[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 8;
    int k = 0;

    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << binary_search(ar, n, k) << endl;
}