#include<bits/stdc++.h>

using namespace std;

#define ll long long int

void dijshort(ll source, ll v, vector < pair < ll, ll >> g[], vector < ll > &dist) {
  priority_queue < pair < ll, ll > , vector < pair < ll, ll > > , greater < pair < ll, ll >>> pq;

  dist[source] = 0;
  pq.push(make_pair(0, source));
  while (!pq.empty()) {
    ll dis = pq.top().first;
    ll u = pq.top().second;
    pq.pop();
    if (dist[u] < dis) continue;
    for (auto it: g[u]) {
      ll next = it.first; //node
      ll nextDist = it.second; //wt
      		if( dist[next] > dist[u] + nextDist){
				dist[next] = dist[u] + nextDist;
				pq.push(make_pair(dist[next], next));
			}
      }
    }
  }

int main() {
  ll n, m; // n vertices m edges
  cin >> n >> m;
  vector < pair < ll, ll >> adj1[n + 1];
  vector < pair < ll, ll >> adj2[n + 1];
  for (ll i = 0; i < m; i++) {
    ll u, v, w;
    cin >> u >> v >> w;
    adj1[u].push_back({v,w});
    adj2[v].push_back({u,w});
  }
  vector < ll > dis1(n + 1, LLONG_MAX);
  vector < ll > dis2(n + 1, LLONG_MAX);
  dijshort(1, n, adj1, dis1);
  dijshort(n, n, adj2, dis2);
   ll ans = LLONG_MAX;
  for (ll i = 1; i <= n; i++) 
      for (auto it: adj1[i]){
      	if (dis1[i] == LLONG_MAX || dis2[it.first] == LLONG_MAX) 
				continue;
        ans = min(ans, it.second / 2 + dis1[i] + dis2[it.first]);
    }
    cout <<ans << endl;
    return 0;
  }
