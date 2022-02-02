#include<bits/stdc++.h>
using namespace std;
bool chkbi(int s,vector<int>&color,vector<int>adj[])
{
	color[s]=1;
	queue<int>q;
	q.push(s);
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(auto it:adj[node])
		{
			if(color[it]==-1)
			{
				color[it]=1-color[node];
				q.push(it);
			}
			else if(color[it]==color[node])
			return false;
		}
	}
	return true;
}
bool bipbfs(int n ,vector<int>adj[],vector<int>&color)
{

	for(int i=1;i<=n;i++)
	{
		if(color[i]==-1)
		{
			if(!chkbi(i,color,adj))
			return 0;
		}
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
	cin>>u>>v;  
	adj[u].push_back(v);
	adj[v].push_back(u);
	}	
		vector<int>color(n+1,-1);
		if(bipbfs(n,adj,color))
		for(int i=1;i<n+1;i++)
		{
			if(color[i]==0)
			cout<<2<<" ";
			else
			cout<<1<<" ";
		}
		else
		cout<<"IMPOSSIBLE"<<endl;
	
	return 0;
		 
}
