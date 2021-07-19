#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    int testcases;
    cin>>testcases;
    char arrayOfValue[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

    while(testcases--){
        int n;
        cin>>n;
        int preIndex=0;
        string s;
        cin>>s;
        int totalLoopCout=n/4;
        while(totalLoopCout>0){
            string substring=s.substr(preIndex, 4);  
            int number =0;
            number = stoi(substring, 0, 2);
            if(number>=0&&number<=15){
                cout<<arrayOfValue[number]; 
            }
            preIndex=preIndex+4;
            totalLoopCout--;
        }
    }
}