#include<bits/stdc++.h>
using namespace std;


//dfs
void dfsr(int node,vector<int>&vis,vector<int>adj[])
{
	vis[node]=1;
	for(auto it:adj[node])
	{
		if(!vis[it]){
		dfsr(it,vis,adj); //recursive calls for other connected nodes form the node
		}
	}

}

int main()
{
	int n,m; // n vertices m edges
	cin>>n>>m;
	vector<int>store;
	vector<int>adj[n+1];
	for(int i=0;i<m;i++)
	{
	int u,v;
	cin>>u>>v;  
	adj[u].push_back(v);
	adj[v].push_back(u);
}
vector<int>vis(n+1,0);
for(int i=1;i<=n;i++)
 	{
 		if(!vis[i])
 		{
 			dfsr(i,vis,adj);
 			store.push_back(i);
		}
	 }
	 cout<<store.size()-1<<endl;
	for(int i=1;i<store.size();i++)
	cout<<store[i-1]<<" "<<store[i]<<endl;
return 0;
}


