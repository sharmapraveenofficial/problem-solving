#include <iostream>
#include <vector>

using namespace std;

int rains(vector<int> heights){
    int n=heights.size();

    if(n<=2){
        return 0;
    }

    vector<int> left(n,0),right(n,0);

    left[0] = heights[0];
    right[n-1]= heights[n - 1];

    for(int i=1;i<n;i++ ){
        left[i]=max(left[i-1],heights[i]);
        right[n-i-1] = max(right[n - i], heights[n-i-1]);
    }

    int water=0;

    for (int i=0; i < n; i++)
    {
        water += min(left[i], right[i]) - heights[i];
    }

    return water;
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

        vector<int> heights(n);
        for (int i = 0; i<n; i++)
        {
            
           cin>>heights[i];
        }
        cout << rains(heights) << endl;
    }
    return 0;
}