#include <iostream>
using namespace std;
string reverse(string a)
{
    if (a.size() == 0)
    {
        return "";
    }
    return reverse(a.substr(1));
}
int main()
{
    string a = "narendra";
    cout << reverse(a) << endl;
    return 0;
}