#include<iostream>
#include<vector>
#include <sstream>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	string s;
	getline(cin,s);


	stringstream ss(s);

	string token;
	vector<string> tokens;

	while(getline(ss,token,',')){
		tokens.push_back(token);
	}
	
	for(auto token: tokens){
		cout<<token<<endl;
	}
	
}