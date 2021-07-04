#include<iostream>
#include<vector>

using namespace std;

int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	string s;
	vector<string> sarr;
	int n=5;
	string temp;
	while(n--){
		getline(cin,temp);
		sarr.push_back(temp);
	}

	for(string x: sarr){
		cout<<x <<endl;
	}
}