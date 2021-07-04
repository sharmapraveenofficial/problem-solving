#include <string>
#include <iostream>
using namespace std;

string convert_to_digital_time(int minutes)
{
    int hours = minutes / 60;
    int min = minutes - (hours * 60);
    string res;
    res += to_string(hours);
    res += min < 10 ? ":0" + to_string(min) : ":" + to_string(min);
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    cout << convert_to_digital_time(n);
}