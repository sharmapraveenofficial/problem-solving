#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    int max_end_so_far=INT_MIN;
    int max_sum=0;
    
    for (int i = 0; i < n; i++)
    {
    	max_sum=max_sum+arr[i];

    	if(max_sum>max_end_so_far) max_end_so_far=max_sum;

    	if(max_sum<0)
    		max_sum=0;
    }

    return max_end_so_far;
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

        vector<int> arr(n);
        for (int i = 0; i<n; i++)
        {
           cin>>arr[i];
        }

        cout<<maxSubarraySum(arr)<<endl;
    }
    return 0;
}

