#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f(i,k) for(int (i)=0;(i)<(k);i++)
#define ll long long 
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
void setIO(string name) { 
    if(name.size()){
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
 
ll inv[2000001];
ll fact[2000001];
ll binpow(ll x, unsigned int y){
    ll res=1; x=x%mod;
    while(y>0){
        if (y&1) 
        	res= (res*x)%mod; 
        y=y>>1; 
        x=(x*x)%mod;
    }
    return res;
}
void fac_inv()
{
	fact[0]=1;
	inv[0]=1;
	for(int i =1;i<=2000000;i++) {fact[i] = fact[i-1]*i%mod;
        inv[i]=binpow(fact[i],mod-2);}
}
int main()
{
    fastio;
	fac_inv();
	ll n,m;cin>>n>>m;
	
	ll nm = fact[m+n-1];
 
	(nm*=inv[n-1])%=mod;
    (nm*=inv[m])%=mod;
		
	cout<<nm%mod<<endl;
 
return 0;
}
