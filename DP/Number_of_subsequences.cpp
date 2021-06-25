#include <bits/stdc++.h>
using namespace  std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define  rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
	int n=6;
 
	string s="ac?b?c";
	int e=1,a=0,ab=0,abc=0;
	rep(i,0,n){
		if(s[i]=='a'){
			a+=e;
		}
		else if(s[i]=='b'){
			ab+=a;
		}
		else if(s[i]=='c'){
			abc+=ab;
		}
		else if(s[i]=='?'){
			abc=3 * abc+ab;
			ab=3*ab+a;
			a=3 * a+e;
		}
	}

	cout<<abc<<endl;
	return 0;
}