#include <iostream>
#include <string>

using namespace std;

string keypad[]={"","","ABC","DEF" ,"GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void getKeypad(string input,string output,int i=0){
    if(input[i]=='\0'){
        cout<<output<<endl;
        return ;
    }

    int current_digit = input[i] -'0';

    if(current_digit==0 or current_digit==1){
        getKeypad(input,output,i++);
    }

    for(int k=0;k<keypad[current_digit].size();k++){
        getKeypad(input,output+keypad[current_digit][k],i+1);
    }
    
    return;
} 

int main()
{
    string input;
    cin>>input;

    string output;

    getKeypad(input,output);

    return 0;
}