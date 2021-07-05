#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vi>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)

const int N=1e5+2,MOD=1e9+7;
vi adja[N];
 
int main(){
	int n,m;
	cin>>n>>m;
	vvi adj(n+1,vi(n+1,0));
	rep(i,0,m){
		int x,y;
		cin>>x>>y;
		adj[x][y]=1;
		adj[y][x]=1;
	} 
	rep(i,1,n+1){
		rep(j,1,n+1){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	cin>>n>>m;
	rep(i,0,m){
		int x,y;
		cin>>x>>y;
		adja[x].push_back(y);
		adja[y].push_back(x);
	}

	rep(i,1,n+1){
		cout<<i<<"->";
		for(int x:adja[i])
			cout<<x<<" ";
		cout<<endl;

	}
	return 0;
}