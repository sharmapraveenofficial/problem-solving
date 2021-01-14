#include <bits/stdc++.h>

using namespace std;

vector<string> vec;

int n = 0;

string ast;

unordered_map<string, set<pair<int, string>>> adjList;

unordered_map<string, int> marker;

unordered_map<string, int> visited;

void bfs(string src)
{

    queue<pair<string, int>> q;

    q.push({src, 1});

    int put = 0;

    while (!q.empty())
    {

        auto next = q.front();

        if (put)
            cout << "=";

        put = 1;

        cout << next.second << next.first;

        q.pop();

        for (auto x : adjList[next.first])
        {

            q.push({x.second, next.second * x.first});
        }
    }
}

void Muneer()
{

    getline(cin, ast);

    int n = ast.size();

    char ast2[n];

    for (int i = 0; i < n; i++)
    {

        ast2[i] = ast[i];
    }

    char *token = strtok(ast2, ",");

    while (token != NULL)

    {

        vec.push_back(token);

        token = strtok(NULL, ",");
    }

    n = vec.size();

    string right, left, temp;

    int j;

    int dist;

    while (cin >> left)
    {

        for (j = 0; j < left.size(); j++)
        {

            if (left[j] == '=')
                break;
        }

        dist = stoi(left.substr(j + 1));

        left = left.substr(0, j);

        cin >> right;

        adjList[left].insert(make_pair(dist, right));

        marker[right] = 1;
    }

    for (int i = 0; i < n; i++)
    {

        if (marker[vec[i]] == 0)
        {

            bfs(vec[i]);

            return;
        }
    }
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while (t--)
        Muneer();

    return 0;
}