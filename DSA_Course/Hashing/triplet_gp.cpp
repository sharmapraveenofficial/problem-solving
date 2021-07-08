#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int triplet_gp(vector<int> ar,int r){

    unordered_map<long,long> left,right;

    for(auto x:ar){
        left[x]=0;
        right[x]++;
    }

    int res;
    for(int i=0;i<ar.size();i++){

        right[ar[i]]--;

        if(ar[i]%r==0){
            long b=ar[i];
            long a=ar[i]/r;
            long c=ar[i]*r;

            res+=left[a]*right[c];
        }

        left[ar[i]]++;
    }

    return res;

}

int main(){

    int r=4;

    vector<int> ar={1,16,4,16,64,16};

    cout<<triplet_gp(ar,r)<<endl;

    return 0;
}