#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int j=0;
    for(int i=0;i<n;i++){
        
        if(a[i]<0){

            if(i!=j){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}