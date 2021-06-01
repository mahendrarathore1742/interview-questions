
#include <bits/stdc++.h>
using namespace  std;

#define int long long
const int N=1e5+2,MOD=1e9+7;


int power(int a,int n){
	int ans=1;
	a%=MOD;
	while(n>0){
		if(n & 1){
			ans=(ans*a)%MOD;
		}

		a=(a*a)%MOD;
		n=n>>1;
	}

	return ans;
}

signed main(){

	int a=2,n=5;
	
	cout<<power(a,n)<<endl;
	return 0;

}