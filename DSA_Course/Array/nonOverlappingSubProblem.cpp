#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countActivites(vector<pair<int,int> > activities){
    int n=activities.size(); 

    sort(activities.begin(), activities.end());

    int count=0;
    
    int current_time =activities[0].first;

    for (int i=1; i<n; i++)
    {
       if(activities[i].first >= current_time){
        count+=1;
        current_time=activities[i].second;
       }
    }
return count;
}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<pair<int,int>> a={{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};
    cout<<countActivites(a);
}




//  {7,9},{0,10},{4,5},{8,9},{4,10},{5,7}

// {0,10}, {4,5}, {4,10}, {5,7}, {7,9} ,{8,9}



