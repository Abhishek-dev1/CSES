#include<bits/stdc++.h>
using namespace std;

//bfs
bool bfs(vector<int>&vis,vector<int>adj[],vector<int>&parent,vector<int>&dist,int n)
{
	
	queue<int>q;
	q.push(1);
	vis[1]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		if(x==n)
		return 1;
		for(auto it:adj[x]){
		if(!vis[it]){
		vis[it]=1;
		dist[it]=dist[x]+1;
		parent[it]=x;
		q.push(it);
		}
	}
}
return 0;
}

int main()
{
	int n,m; // n vertices m edges
	cin>>n>>m;
	vector<int>store;
	vector<int>dist(n+1,-1);
	vector<int>parent(n+1,-1);
	vector<int>adj[n+1];
	dist[1]=1;
	parent[1]=-2;
	for(int i=0;i<m;i++)
	{
	int u,v;
	cin>>u>>v;  
	adj[u].push_back(v);
	adj[v].push_back(u);
}
vector<int>vis(n+1,0);
		for(int i=1;i<=n;i++){
		if(!vis[i]){
 		if(!bfs(vis,adj,parent,dist,n))
 			{
 	     		cout<<"IMPOSSIBLE"<<endl;
 				return 0;
			 }
		}	 
	}

	cout<<dist[n]<<endl;
	int k=n;
	while(k>=1)
	{
		store.push_back(k);
		k=parent[k];
	}
	for(int i=store.size()-1;i>=0;i--)
	cout<<store[i]<<" ";
return 0;
}


