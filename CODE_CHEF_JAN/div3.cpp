#include <iostream>
#include <algorithm>

using namespace std;
int so(int n,int m,int a[],int b[],int s,int t)
{   
        int min= n>=m ? m :n;
        int count=0;
        for(int i=0;i<min;i++){
            s= s - a[i] + b[i];
            t= t -b[i] + a[i];

            count=count+1;

            if(s>t){
                return count;
            }
        }
        if(s>t){
               return count;
        }else{
             return -1;
        }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sumN=0,sumM=0;
        cin>>n>>m;

        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sumN+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sumM+=b[i];
        }

        if(sumN>sumM){
            cout<<0<<endl;
            continue;
        }   
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        cout<<so(n,m,a,b,sumN,sumM)<<endl;
    }
return 0;
   }