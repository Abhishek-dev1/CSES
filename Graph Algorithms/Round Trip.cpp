#include<bits/stdc++.h>
using namespace std;

bool checkcycledfs(int node,int par,vector<int>&vis,vector<int> adj[],vector<int>&store)
{
	vis[node]=1;
	store.push_back(node);
	for(auto it:adj[node]){
		if(!vis[it]){
		if(checkcycledfs(it,node,vis,adj,store))return true;
		}
		else if(it!=par)
		{
			store.push_back(it);
			return 1;
		}
	}
	store.pop_back();
		return false;

}
bool cdfs(int v,vector<int> adj[],vector<int>&store)
{
	vector<int>vis(v+1,0);
	for(int i=1;i<=v;i++)
	{
		if(!vis[i])
		{
			if(checkcycledfs(i,-1,vis,adj,store))
			return 1;
		}
	}
return 0;	
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
if(!cdfs(n,adj,store)){
cout<<"IMPOSSIBLE"<<endl;
return 0;
}
int sz=store.size();
int cnt=1;
for(int i=sz-2;i>=0;i--)
{
	if(store[i]==store[sz-1])
	break;
	cnt++;
}
cout<<cnt+1<<endl;
for(int i=sz-cnt;i<sz;i++)
cout<<store[i]<<" ";
cout<<store[sz-cnt];

return 0;
}


