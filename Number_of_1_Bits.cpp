#include <bits/stdc++.h>
using namespace  std;

int Number_of_1_Bits(int A){

	int count=0; 

	while(A>0){
		A=A&(A-1);
		count++;
	}
	return count;
}

int main(){
	cout<<Number_of_1_Bits(00000000000000000000000000001011)<<endl;
	return 0;
} 