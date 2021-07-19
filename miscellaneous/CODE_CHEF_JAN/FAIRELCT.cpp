#include <iostream>
#include <algorithm>
using namespace std;

int result(int arrayN[],int arrayM[],int sumN,int sumM,int sizeN,int sizeM){
        sort(arrayN, arrayN + sizeN);
        sort(arrayM, arrayM + sizeM,greater<int>());

        int min= sizeN>=sizeM ? sizeM :sizeN;
        
        int count=0;
        for(int i=0;i<min;i++){
            sumN= sumN - arrayN[i] + arrayM[i];
            sumM= sumM -arrayM[i] + arrayN[i];

            count=count+1;

            if(sumN>sumM){
                return count;
            }
        }
        if(sumN>sumM){
               return count;
        }else{
             return -1;
        }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int testcases;
    cin>>testcases;

    while(testcases--){
        int n,m;
        int sumN=0,sumM=0;
        cin>>n;
        cin>>m;
        
        int arrayN[n];
        int arrayM[m];

        for(int i=0;i<n;i++){
            cin>>arrayN[i];
            sumN+=arrayN[i];
        }

        for(int i=0;i<m;i++){
            cin>>arrayM[i];
            sumM+=arrayM[i];
        }

        if(sumN>sumM){
            cout<<0<<endl;
            continue;
        }
       int sizeN = sizeof(arrayN) / sizeof(arrayN[0]);       
       int sizeM = sizeof(arrayM) / sizeof(arrayM[0]);
       int r=result(arrayN,arrayM,sumN,sumM,sizeN,sizeM);
       cout<<r<<endl;
    }
    return 0;
}