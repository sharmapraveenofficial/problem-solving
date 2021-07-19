#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int testcases;
    cin>>testcases;
    while(testcases--){
        int n,k,d;
        cin>>n;
        cin>>k;
        cin>>d;

        int sum;
        int sums=0;
        for(int i=0;i<n;i++){
            cin>>sum;
            sums+=sum;
        }

        int result=sums/k;
        if(result>0){
            if(result<d){
                cout<<result<<endl;
            }else{
                cout<<d<<endl;
            }
        }else{
            cout<<0<<endl;
        }
    }

}