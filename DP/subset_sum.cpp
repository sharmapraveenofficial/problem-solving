#include <iostream>

using namespace std;
bool subsetSum(int a[],int n,int sum){
    bool t[n+1][sum+1];

    for(int i=0;i<=n;i++)
        t[0][i]=true;

    for(int i=1;i<=sum;i++)
        t[0][i]=false;

      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < a[i - 1])
                t[i][j] = t[i - 1][j];
            if (j >= a[i - 1])
                t[i][j] = t[i - 1][j] || t[i - 1][j - a[i - 1]];
        }
    }   
    return t[n][sum];
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n;
        cin>>k;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<subsetSum(a,n,k);
    }
    return 0;
}
