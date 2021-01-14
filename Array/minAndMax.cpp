#include <iostream>
using namespace std;


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
    
    int min=array[1];
    int max=array[1];

    if(size==1){
       cout<<array[1]<<" "<<array[1]<<endl;   
    }else if(size==2){
        if(array[1]>array[2]){
            cout<<array[2]<<" "<<array[1]<<endl;   
        }else{
            cout<<array[1]<<" "<<array[2]<<endl; 
        }
    }else{
        for(int i=1;i<=size;i++){
            if(array[i]<=min){
                min=array[i];
            }

            if(array[i]>=max){
                max=array[i];
            }
        }

        cout<<min<<" "<<max<<endl;
    }  
    return 0;
}