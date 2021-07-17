#include <iostream>
#include <vector>

using namespace std;

// Recursive way
void reverse(int ar[],int s,int e){
    // Base Case
    if(s>=e) return;

    int temp = ar[s];
    ar[s]=ar[e];
    ar[e]=temp;

    reverse(ar,s+1,e-1);
}

int main(){
    int ar[]={1,2,3,4,5,6};
    int n = sizeof(ar) / sizeof(ar[0]);

    // Simple Iterative Way
    // for(int i=0;i<n/2;i++){
    //     swap(ar[i],ar[n-i-1]);
    // }

    reverse(ar,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }

    cout<<endl;

    return 0;
}