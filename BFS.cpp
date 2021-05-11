#include <bits/stdc++.h>
using namespace  std;

const int N=1e5+2;

bool vist[N];
vector<int> adj[N];

int main(){

	for (int i = 0; i <N; ++i)
	{
		vist[i]=0;
	}

	int n,m;
	cin>>n>>m;
	int x,y;
	for (int i = 0; i <m ; ++i)
	{
		cin>>x>>y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	queue<int> q;

	q.push(1);
	vist[1]=true;

	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<endl;
		for(auto it: adj[node]){
			if(!vist[it]){
				vist[it]=1;
				q.push(it);

			}
		}
	}
	return 0;
}