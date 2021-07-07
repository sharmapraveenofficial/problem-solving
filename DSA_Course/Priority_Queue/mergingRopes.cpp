#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int mergeRopes(int ropes[],int n){
    priority_queue<int, vector<int>, greater<int>> pq(ropes, ropes + n);

    int cost = 0;
    while(pq.size()>1){
        int A=pq.top();
        pq.pop();

        int B=pq.top();
        pq.pop();

        int new_rope=A+B;
        cost+=new_rope;

        pq.push(new_rope);
    }

    return cost;
}

int main()
{
    int n=4;

    int ar[]={4,3,2,6};

    cout<<mergeRopes(ar,n)<<endl;

    return 0;
}