#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
ll dp[1000001]={0};
int main() {
	int n;
    cin>>n;
   
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
 
   for(ll i=3;i<=n;i++){
       for(ll j=i-1;j>=i-6 && j>=0 ;j--){
           dp[i]+=(dp[j])%mod;
       }
   }
   cout<<dp[n]%mod<<endl;
 return 0;
}
