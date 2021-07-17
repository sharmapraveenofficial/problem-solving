#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int kthSmallest(vector<int> ar,int k){
    priority_queue<int,vector<int>> max;

    for(int num:ar){
        max.push(num);

        if(max.size()>k) max.pop();
    }
    return max.top();
}

int kthGreatest(vector<int> nums,int k){
    priority_queue<int, vector<int>,greater<int>> min;

    for(int num:nums){
        min.push(num);

        if(min.size()>k) min.pop();
    }

    return min.top();
}

int main(){
    vector<int> ar = {7 ,10, 4 ,20, 15};
    int k=2;

    cout << kthSmallest(ar, k)<< endl;
    cout << kthGreatest(ar, k) << endl;

    return 0;
}

