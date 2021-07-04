#include<iostream>
#include<vector>
#include <cstring>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	char s[1000];
	cin.getline(s,1000);

	char *token=strtok(s, " ");

	while(token != NULL){
		cout<<token<<endl;
		token=strtok(NULL, " ");
	}
}