#include <bits/stdc++.h>
using namespace  std;

const int N=1e5+2;

bool vist[N];
vector<int> adj[N];


void dfs(int node){

	vist[node]=1;
	//preorder
	// cout<<node<<" ";
	for(auto it: adj[node]){
		if(vist[it]);
		else{
			dfs(it);
		}
	}
	//post order
	cout<<node<<" ";
}
int main(){

	int n,m;
	cin>>n>>m;

	for (int i = 0; i <n; ++i)
	{
		vist[i]=false;
	}

	int x,y;
	for (int i = 0; i <m; ++i)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(1);

	return 0;
}