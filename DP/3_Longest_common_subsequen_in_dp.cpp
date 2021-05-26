#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

const int  N=205;
int dp[N][N][N];

int lcs(string &s1,string &s2,string &s3,int i,int j,int k){

	if(i==0 || j==0 || k==0){
		return 0;
	}

	if(dp[i][j][k]!=-1){
		return dp[i][j][k];
	}

	if(s1[i-1]==s2[j-1] and s2[j-1] == s3[k-1]){
		dp[i][j][k]= 1+lcs(s1,s2,s3,i-1,j-1,k-1);
	}
	else{

	int l=lcs(s1,s2,s3,i-1,j,k);
	int r=lcs(s1,s2,s3,i,j-1,k);
	int p=lcs(s1,s2,s3,i-1,j,k-1);

	dp[i][j][k]= max({l,r,p});

	}

	return dp[i][j][k];
}


int main(){

	rep(i,0,N){
		rep(j,0,N){
			
			rep(k,0,N){
				dp[i][j][k]=-1;
			}
		}
	}


	string s1="mahedm",s2="demam",s3="apmam";
	
	int i=s1.size();
	int j=s2.size();
	int k=s3.size();
	cout<<lcs(s1,s2,s3,i,j,k)<<endl;
	return 0;


	return 0;
}