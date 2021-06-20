#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


const int N=1e5+2;


int main(){
	int n;
	cin>>n;
	vi a(n);
	rep(i,0,n)
		cin>>a[i];

	int curr=0,Max=0;
	rep(i,0,n){
		curr+=a[i];

		Max=max(Max,curr);
		if(curr<0)
			curr=0;
	}

	cout<<Max<<endl;

	return 0;
}