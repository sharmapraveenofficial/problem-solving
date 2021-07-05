#include <iostream>
#include <vector>

using namespace std;

int rotation_search(int ar[], int n, int key)
{

    int s = 0;
    int e = n - 1;

    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (ar[mid] == key)
        {
            return mid;
        }
        else if (ar[s] <= ar[mid])
        {
            // Left

            if (ar[s] <= key and key <= ar[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            // Right
            if (key >= ar[mid] and key <= ar[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int n = 10;
    int arr[] = {7, 8, 9, 10, 3, 4, 6, 6, 7, 7};

    cout << rotation_search(arr, n, 190) << endl;
    return 0;
}