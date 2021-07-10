#include<iostream>
#include<vector>

using namespace std;

int countSubset(vector<int> ar,int n,int i,int x){
    if(i==n){
        if(x==0) return 1;
        return 0;
    }

    int inc = countSubset(ar,n,i+1,x-ar[i]);
    int exc = countSubset(ar,n,i+1,x);

    return inc +exc;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int x = 6;

    cout << countSubset(a, a.size(),0,x)<<endl;
}