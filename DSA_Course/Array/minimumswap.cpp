#include <iostream>
#include <vector>

using namespace std;

int minimunSwap(vector<int> array){
	int n=array.size();

	pair<int,int> a[n];

	for(int i=0;i<n;i++){
		a[i].first=array[i];
		a[i].second=i;
	}

	sort(a,a+n);

	vector<bool> visited(n,false);

	int ans=0;

	for(int i=0;i<n;i++){
		int old_index = a[i].second;

		if(visited[i]==true or old_index==i) continue;

		int node=i;
		int cycle=0;
		while(!visited[node]){
			visited[node]=true;
			int next_node=a[node].second;
			node=next_node;
			cycle+=1;
		}
		ans+=(cycle-1);
	}
	return ans;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>(t);

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for (int i = 0; i<n; i++)
        {
           cin>>arr[i];
        }
        cout <<minimunSwap(arr)<<endl;
    }
    return 0;
}