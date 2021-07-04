#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

 
const int N=1e3+2;

int dp[N][N];
int  minDistance(string A, string B) {
    int n=A.length(),m=B.length();
 
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
        if(i==0)
            dp[i][j]=j;
        if(j==0)
            dp[i][j]=i;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
    }
}

return dp[n][m];
}



int main(){

	rep(i,0,N){
		rep(j,0,N){
			dp[i][j]=-1;
		}
	}

	string A = "abad";
    string B = "abac";
	cout<<minDistance(A,B)<<endl;
	return 0;
}