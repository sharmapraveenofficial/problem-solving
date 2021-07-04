#include <iostream>
#include <string>
#include <queue>

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
        int n, m, k;
        cin >> n >> m >> k;

        int mat[n][m];
        int count = 0;
        int round = 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] >= k)
                    count++
            }
        }
        int nm = n > m ? n : m;
        int i = 0, j = nm - 1,
    }
}