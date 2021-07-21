#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

string simplifyPath(string path){
    // 1. Tokenization and Filtering
    istringstream ss(path);
    vector<string> tokens;

    string token;
    while(getline(ss,token,'/')){
        if(token != "." and token!=""){
            tokens.push_back(token);
        } 
    }

    // 2. Handle
    vector<string> stack;

    if(path[0]=='/'){
        stack.push_back("");
    }

    for(string token : tokens){
        if(token == ".."){
            if(stack.size()==0 or stack[stack.size()-1] == ".."){
                stack.push_back(token);
            }
            else if (stack[stack.size() - 1] != ""){
                stack.pop_back();
            }
        }else{
            stack.push_back(token);
        }
    }

    if (stack.size() == 1 and stack[0] == ""){
        return "/";
    }

    ostringstream oss;
    int i=0;
    for(auto token : stack){
        if(i !=0 ){
            oss << "/";
        }
        oss << token;
        i++;
    }

    return oss.str();
}

int main(){
    string s = "../a/./b////c/../d";

    cout<<simplifyPath(s)<<endl;
    return 0;
}