#include<vector>
#include<algorithm>
#include<climits>
#include <cmath>
#include <iostream>

using namespace std;

pair<int,int> minDifference(vector<int> a,vector<int> b){
    pair<int,int> minPair;
    int n=a.size();
    int m=b.size();


    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int min_so_far=INT_MAX;


    int l=0,r=0;

    while(l<n && r<m){
    	if(abs(a[l]-b[r])<min_so_far){
    		min_so_far=abs(a[l]-b[r]);
 			minPair.first=a[l];
    	    minPair.second=b[r];
    	}

    	if(a[l]<b[r]) l++;
    	else r++;
    }
    
    return minPair;
}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a1={1, 2, 11, 5};
    vector<int> a2={4, 12, 19, 23, 127, 235};

    auto p=minDifference(a1,a2);

    cout <<p.first<<" "<<p.second<<endl;
}