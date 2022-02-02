#include<bits/stdc++.h>
using namespace std;
//lflloyd warshall 
#define ll long long 
ll dis[502][502];
int main()
{
	ll n,m,q; // n vertices m edges
	cin>>n>>m>>q;
	
	 ll maxx = 1000000000000;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=n;j++)
		dis[i][j]=maxx;
	}
	for(ll i=0;i<m;i++)
	{
	ll u,v,w;
	cin>>u>>v>>w;  
	dis[u][u]=0, dis[v][v]=0;
    dis[u][v]=min(dis[u][v],w);
	dis[v][u]=min(dis[v][u],w);
	}
	for(ll k=1;k<=n;k++)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
		}
	}
	int x,y;
for(int i=0;i<q;i++){
cin>>x>>y;
if(dis[x][y]<maxx)
cout<<dis[x][y]<<endl;
else
cout<<-1<<endl;
}
return 0;
}


