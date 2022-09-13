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
	int l=0,r=0;
	int sum=0,ans=0;
	for(r=0;r<n;r++)
	{
		sum+=a[r];
		while(sum>x)
		{
			sum-=a[l++];
		}
		if(sum==x)
		ans++;
	}
	cout << ans << '\n';
}
