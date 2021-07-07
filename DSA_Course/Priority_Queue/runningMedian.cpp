#include <queue>
#include <iostream>

using namespace std;


int main(){

    priority_queue<int> left_heap;
    priority_queue<int,vector<int>,greater<int>> right_heap;

    int d;
    cin>>d;

    left_heap.push(d);

    float mid=d;
    cout<<mid<<" ";

    cin>>d;

    while(d!=-1){

        if(left_heap.size()>right_heap.size()){
            if(d<mid){
                right_heap.push(left_heap.top());
                left_heap.pop();
                left_heap.push(d);
            }else{
                right_heap.push(d);
            }

            mid=(left_heap.top()+right_heap.top())/2;
        }else if(left_heap.size()==right_heap.size()){
            if(d<mid){
                left_heap.push(d);
                mid=left_heap.top();
            }else{
                right_heap.push(d);
                mid=right_heap.top();
            }
        }else{
            if(d<mid){
                left_heap.push(d);
            }else{
                left_heap.push(right_heap.top());
                right_heap.pop();
                right_heap.push(d);
            }

            mid = (left_heap.top() + right_heap.top()) / 2;
        }
        cout<< mid <<" ";

        cin>>d;
    }

   return 0; 
}