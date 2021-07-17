#include <iostream>
#include<vector>

using namespace std;

void permuteHelper(vector<int> str, int i,int n, vector<vector<int>> & result)
{

    if (i == n-1)
    {
      result.push_back(str);
      return;
    }

    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]);

        permuteHelper(str, i + 1, n,result);

        swap(str[i], str[j]);
    }
}

vector<vector<int>> permute(vector<int> & str)
{
    vector<vector<int>> result;

    permuteHelper(str,0,str.size(),result);

    return result;
}

int main(){
    vector<int> ar = {1, 2,3};

    vector<vector<int>> n = permute(ar);

    for(int i=0;i<n.size();i++){
        for(int j=0;j<n[i].size();j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}