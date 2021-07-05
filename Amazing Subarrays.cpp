#include <bits/stdc++.h>
using namespace  std;
const int mod=10003;

 
int AmazingSubarrays(string A){
	int n=A.size(),cnt=0;
	for (int i = 0; i < n; ++i)
	{
if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){            
        cnt+=n-i;
    }
	}
	return cnt%10003;
}


int main(){
	cout<<AmazingSubarrays("ABEC")<<endl;
	return 0;
}