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
 
ll inv[1000001];
ll fact[1000001];
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
	for(int i =1;i<=1000000;i++) {fact[i] = fact[i-1]*i%mod;
        inv[i]=binpow(fact[i],mod-2);}
}
int main()
{
    fastio;
	fac_inv();
	ll n;cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        ll nm = fact[a];
        (nm*=inv[b])%=mod;
        (nm*=inv[a-b])%=mod;
        cout<<nm<<endl;
    }
	
return 0;
}
