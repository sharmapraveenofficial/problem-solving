#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockSpan(vector<int> stocks)
{
    stack<int> s;
    vector<int> res(stocks.size(),0);

    s.push(0);
    res[0] = 1;

    for(int i=1; i < stocks.size();i++){
        while (!s.empty() && stocks[s.top()] <= stocks[i])
        {
            s.pop();
        }

        if(!s.empty()) {
            int previous_high = s.top();
            res[i] = i - previous_high;
        }else{
            res[i] = i+1;
        } 

        s.push(i);
    }
    return res;
}

int main(){
    vector<int> v = { 100, 80, 60, 70, 60, 75, 85};

    vector<int> stocks = stockSpan(v);

    for(auto stock : stocks){
        cout<<stock<<" ";
    }
    cout<<endl;

    return 0;
}