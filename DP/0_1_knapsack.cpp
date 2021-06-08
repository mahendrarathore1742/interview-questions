#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

const int N=1e5+2;
int val[N],wt[N];

int knapsack(int n,int w){

	if(w<=0){
		return 0;
	}
	if(n<=0){
		return 0;
	}

	if(wt[n-1]>w)
		return knapsack(n-1,w);

	return max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+val[n-1]);
}

int main(){

	int n;
	cin>>n;


	rep(i,0,n){
		cin>>wt[i];
	}

	rep(i,0,n){
		cin>>val[i];
	}


	int w;
	cin>>w;

	cout<<knapsack(n,w)<<endl;


	return 0;
}


