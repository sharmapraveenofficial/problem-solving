#include <iostream>
#include <vector> 
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int testcases;
    cin>>testcases;

    while(testcases--){
        int n,x;
        cin>>n;
        cin>>x;
        int sum=0;
        vector<int> array; 
        for (int i = 0; i <n; i++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
            array.push_back(temp); 
        }
        
        int index=0;
        while(array.at(index)%x==0){
            
            sum+=x*(array.at(index)/x);
            // for(int i=0;i<x;i++)
            // array.push_back(array.at(index)/x); 

            index++;
        }

        // cout<<sum<<endl;
        // for(int i=0;i<array.size();i++)
        //     cout<<array.at(i)<<" " ;
        //     cout<<endl;
    }
    return 0;
}