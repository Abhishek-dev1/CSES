#include<bits/stdc++.h>
using namespace std;
bool chkcycl(int v,vector<int>adj[]) 
{
		vector<int>incnt(v+1,0);
	for(int i=1;i<=v;i++){
		for(auto it:adj[i])
		incnt[it]++;
	}
	queue<int>q;
	int cnt=0;  // to maintain the count of total nodes
	for(int i=1;i<=v;i++)
	{
		if(incnt[i]==0)
		q.push(i);
	}
	vector<int>topo;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		topo.push_back(node);
		cnt++;
		for(auto it:adj[node])
		{
			incnt[it]--;
			if(incnt[it]==0){
			q.push(it);
			}	
		}
	}
	if(cnt==v){
	for(auto it:topo)
	cout<<it<<" ";
	return 0;
	} 
	return 1;
}
int main()
{
	int n,m; // n vertices m edges
	cin>>n>>m;
vector<int>adj[n+1];
for(int i=0;i<m;i++)
{
int u,v;
cin>>u>>v;// u,v for adjacent vertex w for weight 
adj[u].push_back(v);
}
if(chkcycl(n,adj))
{
	cout<<"IMPOSSIBLE";
	return 0;
}


return 0;
}
