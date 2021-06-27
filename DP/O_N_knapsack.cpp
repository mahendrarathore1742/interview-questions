#include <bits/stdc++.h>
using namespace  std;


int main(){
	int n=5,W=11;
	vector<int> wt={3,2,4,5,1};
	vector<int> val={4,3,5,6,1};
	vector<int> dp(W+1,0);
	for (int i = 0; i <=W; ++i)
	{
		for (int j = 0; j <n; ++j)
		{
			if(i-wt[j]>=0){
				dp[i]=max(dp[i],val[j]+dp[i-wt[j]]);
			}	
	 	}
	}  
	cout<<dp[W]<<endl;
	return 0;
}