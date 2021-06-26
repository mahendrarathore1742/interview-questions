#include <bits/stdc++.h>
using namespace  std;

int main(){

	int ladder,snakes;

	cin>>ladder;
	map<int, int> lad;
	map<int,int> snak;
	for (int i = 0; i < ladder; ++i)
	{
		int u,v;
		cin>>u>>v;
		lad[u]=v;
	}
	cin>>snakes;
	for (int i = 0; i < snakes; ++i)
	{
			int u,v;
			cin>>u>>v;
			snak[u]=v;
	}
	 
int move=0;
	queue<int> q;
	q.push(1);
	bool found=false;
	vector<int> vist(101,0);
	vist[1]=1;

	while(!q.empty() and !found){

			int sz=q.size();
			while(sz--){
				int t=q.front();
				q.pop();
				for (int die = 1; die <=6; die++)
				{
					if(t+die==100)
						found=true;
					if(t+die<=100 and lad[t+die] and !vist[lad[t+die]]){
						vist[lad[t+die]]=true;
						if(lad[t+die]==100)
							{
								found=true;
							}
							q.push(lad[t+die]);
					}
					else if (t+die <=100 and snak[t+die] and !vist[snak[t+die]])
					{
						vist[snak[t+die]]=true;

						if(snak[t+die]==100){
							found=true;
						}
						q.push(snak[t+ die]);
					}
					else if(t+die <=100 and !vist[t+die] and !snak[t+die] and !lad[t+die]){
						vist[t+die]=true;
						q.push(t+die);
					}
				}
			}
			move++;
	}

	if(found){
		cout<<move<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}