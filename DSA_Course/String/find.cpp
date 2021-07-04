#include<iostream>
#include<vector>

using namespace std;

vector<int> stringSearch(string big,string small){
    
    vector<int> result;
    int index = big.find(small);
    while(index!=-1){
        result.push_back(index);
        index = big.find(small,index+1);
    }
    
    return result;
}

int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	string big;
	string small;
	getline(cin,big);
	getline(cin,small);
	
	for(auto x: stringSearch(big,small)){
       cout<<x<<endl;
	} 
	
}