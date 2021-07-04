#include <iostream>
#include <cmath>

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
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;

        float sum = k1 * k2 * k3 * v;
        float finalSum = 100 / sum;

        finalSum = round(finalSum * 100) / 100;
        if ((float)finalSum >= (float)9.58)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}