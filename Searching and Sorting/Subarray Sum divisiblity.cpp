#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f(i,k) for(int (i)=0;(i)<(k);i++)
#define ll long long 
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n,0);
	vector<ll>md(n,0);
	f(i,n) cin>>arr[i];
	
	ll curr=0;
	f(i,n)
	{
		curr+=arr[i];
		md[((curr%n + n)%n)]++;
	}
	ll ans=0;
	for(auto it:md) if(it>1)ans+= ((it)*(it-1))/2;
		ans+=md[0]; // whose sum is 0 
	cout<<ans<<endl;
return 0;
}
