#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dijshort(ll source,ll v,vector<pair<ll,ll>>g[])
 {
 	priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll>>> pq;
	vector<ll> dist(v+1,LLONG_MAX);
	dist[source] = 0;
	pq.push(make_pair(0,source));	
	while( !pq.empty() ){
		ll dis = pq.top().first;
		ll u = pq.top().second;
		pq.pop();
		if(dist[u]<dis)continue;
		for( auto it:g[u]){
			ll next = it.first;//node
			ll nextDis = it.second;//wt
			if(dist[next]<=nextDis + dis) continue;
			else
			{
				dist[next]=nextDis + dis;
				pq.push({dist[next],next});
			}
		}
	}
	for(int i = 1 ; i<=v ; i++)	
	cout << dist[i] << " ";
	cout << "\n";
 }
 int main()
{
	int n,m,q; // n vertices m edges
	cin>>n>>m;
	
vector<pair<ll,ll>>adj[n+1];
for(int i=0;i<m;i++)
{
ll u,v,wt;
cin>>u>>v>>wt;// u,v for adjacent vertex w for weight 
adj[u].push_back({v,wt});

}
dijshort(1,n,adj);
return 0;
}
 
