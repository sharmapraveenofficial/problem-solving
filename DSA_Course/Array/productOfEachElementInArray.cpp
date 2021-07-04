#include<iostream>
#include<vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> a){
    
    //Create an output Array
    int n = a.size();
    vector<int> output(n,1);
    
    vector<int> left(n);
    vector<int> right(n);

    left[0]=a[0];
    right[n-1]=a[n-1];

    for(int i=1;i<n-1;i++){
    	left[i]=left[i-1]*a[i];
    	right[n-1-i]=right[n-i]*a[n-1-i];
    }

    output[0]=right[1];
    output[n-1]=left[n-2];

    for(int i=1;i<n-1;i++){
    	output[i]=left[i-1] * right[i+1];
    }
    
    return output;
}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a={1, 2, 3, 4,5};

    vector<int> output=productArray(a);

    for(auto x: output){
    	cout<<x<<" ";
    }
}