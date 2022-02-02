#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
struct Edge {
    ll a, b, wt;
    Edge(ll x,ll y,ll w)
    {
    	a=x,b=y,wt=w;
	}
};

ll n, m;
vector<Edge> adj;
#define INF 1e17

void solve()
{
    vector<ll> d(n+1,INF);
    vector<ll> p(n+1, -1);
    ll x;
    for (ll i = 0; i < n; ++i) {
        x = -1;
        for (Edge e : adj) {
            if (d[e.a] + e.wt < d[e.b]) {
                d[e.b] = d[e.a] + e.wt;
                p[e.b] = e.a;
                x = e.b;
            }
        }
    }
    if(x==-1)
    {
    	cout<<"NO";
    	return;
	}
	else
	{
		for (ll i = 1; i <= n; ++i)
            x = p[x];
	}
	vector<ll>cycle;
    for (ll v = x;; v = p[v]) {
            cycle.push_back(v);
            if (v == x && cycle.size() > 1)
                break;
        }
     reverse(cycle.begin(), cycle.end());

        cout << "YES"<<"\n";
        for (ll v : cycle)
            cout << v << " ";
    return;
	}
int main()
{
	cin>>n>>m;
	for(ll i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		adj.push_back(Edge(u,v,w));
	}
	solve();
	return 0;
}
