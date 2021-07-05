#include <iostream>

using namespace std;

int lower_bound(int ar[], int n, int k)
{
    int s = 0;
    int e = n - 1;

    int mid;
    int ans = -1;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (ar[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (ar[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return ans;
}

int upper_bound(int ar[], int n, int k)
{
    int s = 0;
    int e = n - 1;

    int mid;
    int ans = -1;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (ar[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (ar[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return ans;
}

int main()
{
    int n = 10;
    int ar[] = {1, 1, 3, 3, 3, 6, 7, 7, 8, 8};

    cout << upper_bound(ar, n, 7) - lower_bound(ar, n, 7) + 1 << endl;
    //cout << upper_bound(ar, n, 3) << endl;
}