#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9+7
#define loop(i,k) for(int i=0;i<k;i++)
#define endl "\n"
 
int main() {
	int n, x; cin >> n >> x;
	int a[n];
	map<int, int> vals;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if(vals.count(x - a[i])){
			cout << i + 1 << " " << vals[x - a[i]] << "\n";
			return 0;
		}
		vals[a[i]] = i + 1;
	}
	cout << "IMPOSSIBLE" << '\n';
}
