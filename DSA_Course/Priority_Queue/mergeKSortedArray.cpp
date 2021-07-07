#include <queue>
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeKArrays(vector<vector<int>> arrays)
{
    int k=arrays.size();
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
    vector<int> result;

    for(int i=0;i<k;i++){
        int element = arrays[i][0];
        q.push({element,i,0});
    }

    while(!q.empty()){
      auto top = q.top();
      q.pop();

      int element = top[0];
      int a_idx = top[1];
      int e_idx = top[2];

      result.push_back(element);

      if(e_idx+1 <arrays[a_idx].size()){
          int element = arrays[a_idx][e_idx+1];
          q.push({element,a_idx,e_idx+1});
      }
    }
    return result;
}

int main()
{
    vector<vector<int>> arr = {{10, 15, 20, 30},
                               {2, 5, 8, 14, 24},
                               {0, 11, 60, 90}};

    vector<int> result = mergeKArrays(arr);

    for(auto x:result){
        cout<<x<<" ";
    }  
                         
    return 0;
}