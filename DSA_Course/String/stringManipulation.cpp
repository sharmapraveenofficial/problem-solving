#include<iostream>
#include<vector>

using namespace std;

void stringManupulation(char *s){
	int count;

	for(int i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			count+=1;
		}
	}


    int idx = strlen(s) +  2 * count;
    s[idx] = '\0';

    for(int i=strlen(s)-1;i>=0;i--){
    	if(s[i]==' '){
    		s[idx-1]='0';
    		s[idx-2]='2';
    		s[idx-3]='%';

    		idx=idx-3;
    	}else{
    		s[idx-1]=s[i];
    		idx--;
    	}
    }
}

int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	char s[1000];
	cin.getline(s,1000);
	// char s[]={"hey hii heloo hu"};
	
	stringManupulation(s);
	cout<<s<<endl;
}