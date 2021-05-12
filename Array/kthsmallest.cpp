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

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int size;
        cin >> size;
        priority_queue<int, vector<int>, greater<int>> array;

        for (int i = 0; i < size; i++)
        {
            int no;
            cin >> no;
            array.push(no);
        }

        int k;
        cin >> k;

        while (k-- > 1)
        {
            array.pop();
        }

        cout << array.top() << endl;
    }
}