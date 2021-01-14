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
        int n,k,x,y;
        cin>>n;
        cin>>k;
        cin>>x;
        cin>>y;

        if(x==y){
            cout<<n<<" "<<n<<endl; 
            continue;
        }
        // if(y>x){
        //     int newPoint=n-(y-x);
        //     cout<<newPoint<<" "<<n<<endl; 
        //     continue;
        // }

        // if(x==n){
        //     cout<<x<<" "<<y<<endl; 
        //     continue;
        // }

        if(x>y){
            int cases=k%4;
            switch(cases) {
                case 1:
                    cout<<n<<" "<<y+n-x<<endl; 
                    break;
                case 2:
                   cout<<y+n-x<<" "<<n<<endl; 
                    break;
                case 3:
                    cout<<0<<" "<<x-y<<endl; 
                    break;
                case 0:
                    cout<<x-y<<" "<<0<<endl; 
                    break;         
            }  
        }else{
            int cases=k%4;
            switch(cases) {
                case 1:
                    cout<<x+n-y<<" "<<n<<endl; 
                    break;
                case 2:
                   cout<<n<<" "<<x+n-y<<endl; 
                    break;
                case 3:
                    cout<<y-x<<" "<<0<<endl; 
                    break;
                case 0:
                    cout<<0<<" "<<y-x<<endl; 
                    break;         
            }  
        }
    }
    return 0;
}