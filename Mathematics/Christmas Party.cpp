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
ll arr[1000001];
void dearaangemnt()
{
  //Dearrangement recursive relation is D(n)=(n-1)(D(n-1) + D(n-2))
    arr[0]=1;
    for(int i=2;i<=1000000;i++)
    {
        arr[i] = ((i-1)%mod*(arr[i-2] + arr[i-1])%mod)%mod;
    }
}
int main()
{
 
    ll n ; cin>>n;
    dearaangemnt();
    cout<<arr[n]<<endl;


return 0;
}
