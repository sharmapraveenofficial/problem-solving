#include<iostream>
#include<deque>
#include<vector>

using namespace std;

void subArrayMax(vector<int> ar,int k){
    deque<int> Q(k);
    int i;

    for(i=0;i<k;i++){
        while(!Q.empty() and ar[i] > ar[Q.front()]){
            Q.pop_front();
        }
        Q.push_back(i);
    }

    for(;i<ar.size();i++){
        
        cout<< ar[Q.front()]<<" ";

        while(!Q.empty() and Q.front() <= i-k){
            Q.pop_front();
        }

        while(!Q.empty() and ar[i] >= ar[Q.back()]){
            Q.pop_back();
        }

        Q.push_back(i);
    }

    cout<<ar[Q.front()]<<endl;
}

int main(){

    vector<int> ar = {1,2,3,2,5,4,8,4};
    int k = 3;  

    subArrayMax(ar,k);

    return 0;
}