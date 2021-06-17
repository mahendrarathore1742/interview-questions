#include <bits/stdc++.h>
using namespace  std;

string longestCommonPrefix(vector<string> &A){

	 if(A.size()<=1)
        return A[0];
    
    string res = "";
    sort(A.begin(), A.end());
    int n = A.size()-1, i=0, m = A[0].size();
    
    while(i<m && A[0][i] == A[n][i]){
        res += A[0][i];
        i++;
    }
    return res;
	}

int main(){

	std::vector<string> v={"abcdefgh", "aefghijk", "abcefgh"};
	cout<<longestCommonPrefix(v)<<endl;

}