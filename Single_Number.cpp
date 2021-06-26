#include <bits/stdc++.h>
using namespace  std;

void SingleNumber(vector<int> &A){
	int ans=0;
	for (int i = 0; i <A.size(); ++i)
	{
		ans=ans^A[i];
	}
	cout<<ans<<endl;
}

int main(){

	std::vector<int> v={1, 2, 2, 3, 1};
	SingleNumber(v);
	
	return 0;
} 