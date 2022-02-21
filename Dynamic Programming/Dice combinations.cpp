#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int dp[1000001]={0};
int main() {
	int n;
    cin>>n;
  
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
 
   for(int i=3;i<=n;i++){
       for(int j=i-1;j>=i-6 && j>=0 ;j--){
           dp[i]=(dp[i]+dp[j])%mod;
       }
   }
   cout<<dp[n]%mod<<endl;
 
}
