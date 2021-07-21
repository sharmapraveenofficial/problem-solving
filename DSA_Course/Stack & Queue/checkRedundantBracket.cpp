#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool checkRedundant(string input){
    stack<char> s;

    for(auto ch:input){
        if(ch!=')'){
            s.push(ch);
        }else{
            bool opfound = false;

            while(!s.empty() and s.top() != '('){
                if(s.top()=='+' or s.top()=='-' or s.top()=='*' or s.top()=='/')
                    opfound = true;
                
                s.pop();
            }

            s.pop(); // for top '(' bracket after loop
            
            if(!opfound) return true;
        }
    }
    return false;
}

int main(){
    string s = "((a+(b))+c)";

    bool redundant = checkRedundant(s);

    if(redundant){
        cout<<"Redundant Paranthesis Found"<<endl;
    }
    else
    {
        cout << "No Redundant Paranthesis Found" << endl;
    }
}