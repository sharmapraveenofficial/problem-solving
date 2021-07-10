#include<map>
#include<vector>
#include<iostream>

using namespace std;

vector<int> getHash(string s,int i,int j){
    vector<int> v(26,0);

    for(int k=i;k<=j;k++){
        char c=s[k];
        v[c-'a']++; 
    }

    return v;
}

int anagram_substring(string s){

    int n=s.size();
    int ans=0;

    map<vector<int>,int> m;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int> h= getHash(s,i,j);
            m[h]++;
        }
    }

     for(auto a:m){
        int freq=a.second;
        if(freq>=2){
            ans+= (freq)*(freq-1)/2;
        }
    }

    return ans;
}

int main(){

    string s;
    cin>>s;

    cout<<anagram_substring(s)<<endl;

    return 0;
}