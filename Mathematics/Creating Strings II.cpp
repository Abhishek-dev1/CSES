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
	string s;
	cin>>s;
	int cnt[26]={0};
	for(int i =0;i<s.size();i++) cnt[s[i]-97]++;
	ll nm = fact[s.size()];
	for(int i =0;i<26;i++) {
			(nm*=inv[cnt[i]])%=mod; 
		}
	cout<<nm%mod<<endl;
 
return 0;
}
