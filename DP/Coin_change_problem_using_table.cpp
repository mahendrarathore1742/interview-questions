#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vi>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

const int N=1e3+2;


int main(){


	int n;
	cin>>n;
	vi a(n);
	rep(i,0,n)
		cin>>a[i];
	int x;
	cin>>x;

	vvi dp(n+1,vi(x+1,0));
	dp[0][0]=1;


	rep(i,1,n+1){

		rep(j,0,x+1){

			if(j-a[i-1]>=0)
				dp[i][j]+=dp[i][j-a[i-1]];

			dp[i][j]+=dp[i-1][j];

		}
	}





	cout<<dp[n][x]<<endl;
	




	return 0;
}