#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isBalanced(string input){

    stack<char> s;

    for(auto ch:input){
        switch (ch)
        {
        case '(':
        case '{':
        case '[': s.push(ch);
                  break;

        case ')': if(!s.empty() and s.top() == '('){
                s.pop();
                break;
        } else return false;

        case '}':
            if (!s.empty() and s.top() == '{')
            {
                s.pop();
                break;
            }
            else
                return false;

        case ']':
            if (!s.empty() and s.top() == '[')
            {
                s.pop();
                break;
            }
            else
                return false;

        default:
            continue;
        }
    }

    if(s.empty()) return true;
    return false;
}

int main(){
    string s = "((a+b)*d+[e)";

    cout<<isBalanced(s)<<endl;

    return 0;
}