#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)

const int N=1e5+2;
int dp[N];

 
int lis(vi &a,int n){
 
	if(dp[n]!=-1)
		return dp[n];

	dp[n]=1;

	rep(i,0,n){
		if(a[n]>a[i])
			dp[n]=max(dp[n],1+lis(a,i));
	}
	return dp[n];
}

int main(){

	rep(i,0,N)
		dp[i]=-1;

	int n =9;
	vi a={10,22,9,33,21,50,52,60,80};

	cout<<lis(a,n-1)<<endl;

	return 0;
}