#include<bits/stdc++.h>
using namespace std;
//bellman ford algorithm
#define ll long long int
const ll inf = 1e17;
const ll neginf = inf*(-1);
struct node {
    ll u;
    ll v;
    ll wt; 
    node(ll first, ll second, ll weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
	ll n,m; // n vertices m edges
	cin>>n>>m;
	vector<node>adj;
	
	for(ll i=0;i<m;i++)
	{
	ll u,v,w;
	cin>>u>>v>>w;  
	adj.push_back(node(u,v,-w));
	}
vector<ll>dis(n+1,inf);
dis[1]=0;
for(ll i=0;i<n;i++)
{
	for(auto it:adj)
	{
		ll x=it.u,y=it.v,w=it.wt;
		if(dis[x]==inf)
		 continue;
		dis[y]=min(dis[y],dis[x]+w);
		dis[y]=max(dis[y],neginf);
	}
}

for(int i = 0; i < n; i++)
	{
		for(auto it: adj)
		{
			ll x=it.u,y=it.v,w=it.wt;
			if(dis[x] == inf) continue;
			dis[y] = max(dis[y], neginf);
			if(dis[x]+w < dis[y])
			{
				dis[y] = neginf;
			}
		}
	}

	
if(dis[n]==neginf)
	cout<<-1<<"\n";
	else
	cout<<(-1)*dis[n]<<"\n";
return 0;
}


