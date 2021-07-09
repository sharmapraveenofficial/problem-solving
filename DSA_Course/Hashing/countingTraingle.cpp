#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int countRectangle(vector<pair<int,int>> & points){

    unordered_map<int,int> freq_x;
    unordered_map<int,int> freq_y;

    for(auto p:points){
        int x=p.first;
        int y=p.second;

        freq_x[x]++;
        freq_y[y]++;
    }

    int count=0;

    for(auto p:points){
        int x=p.first;
        int y=p.second;

        count+=(freq_x[x]-1)*(freq_y[y]-1);
    }

  return count;
}

int main(){

    int n;
    cin>>n;

    vector<pair<int,int>> points;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        points.push_back({x,y});
    }

    cout<<countRectangle(points)<<endl;
    return 0;
}