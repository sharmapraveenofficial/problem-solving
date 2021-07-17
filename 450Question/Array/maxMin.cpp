#include <limits.h>
#include<iostream>

using namespace std;

void minMax(int ar[],int n){

    int min = INT_MAX ;
    int max INT_MIN ; 

    for(int i=0;i<n;i++){
        if(ar[i] > max) max=ar[i];
        if(ar[i] < min) min=ar[i];
    }

    cout << max << " " << min << endl;
}

int main(){
    int ar[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(ar) / sizeof(ar[0]);

    minMax(ar,n);
    return 0;
}