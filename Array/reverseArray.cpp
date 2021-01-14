#include <iostream>
using namespace std;

void reverse(int array[],int start,int end){
    if(start >= end){
        return ;
    }

    int temp=array[start];
    array[start]=array[end];
    array[end]=temp;

    reverse(array,start+1,end-1);
 
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif    

    int size;
    cin>>size;

    int array[size];

    for(int i=1;i<=size;i++){
        cin>>array[i];
    }
    
    reverse(array,1,size);
    
     for(int i=1; i<=size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}