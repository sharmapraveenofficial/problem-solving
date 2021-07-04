#include <iostream>
#include <vector>

using namespace std;

bool outOforder(vector<int> a,int i){
    int x=a[i];
    if(i==0){
        return x > a[1];
    }

    if(i==a.size()-1){
        return x< a[i-1];
    }

    return x > a[i+1] or x < a[i-1];

}

pair<int, int> subarraySort(vector<int> a){

    int smallest= INT_MAX;
    int largest=INT_MIN;

    for(int i=0;i<a.size();i++){
        int x=a[i];
        if(outOforder(a,i)){
            smallest=min(smallest,x);
            largest=max(largest,x);
        }
    }

    pair<int, int> p;

    if(smallest==INT_MAX) return make_pair(-1,-1);

    int left=0;

    while(smallest>=a[left]) left++;

    int  right=a.size()-1;

    while(largest<=a[right]) right--;

    return make_pair(left,right);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>(t);

    while(t--){
        int n;
        cin>>n;

        vector<int> subarray(n);
        for (int i = 0; i<n; i++)
        {
           cin>>subarray[i];
        }

        pair<int, int> p= subarraySort(subarray);
        cout << p.first <<" "<<p.second<<endl;
    }
    return 0;
}