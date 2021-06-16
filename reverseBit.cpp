#include <bits/stdc++.h>
using namespace  std;

 unsigned int reversBit( unsigned int A){
	int ans=0;
	for (int i = 31; i >=0; i--)
	{
		ans |=(A &1)<<i;
		A>>=1;	
	}
	return ans;
}

int main(){
	cout<<reversBit(3)<<endl;
	return 0;
}