#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl "\n"
#define loop(i,k) for(int i=0;i<k;i++)
 
int main()
{
int n;
cin>>n;
//relate with target sum
int sum=(n*(n+1))/2;
 
if(sum%2!=0)
{
	cout<<0<<endl;
	return 0;
}
	int dp[n+1][sum+1];
	for(int i=0;i<n+1;i++)
	{
		dp[i][0]=1;
	}
	for(int i=0;i<sum+1;i++)
	{
		dp[0][i]=0;
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<sum+1;j++)
		{
			if(i<=j)
			dp[i][j]=dp[i-1][j-i] + dp[i-1][j];
			else
			dp[i][j]=dp[i-1][j];
			dp[i][j]%=mod;
		}
	}
	sum/=2;
	cout<<dp[n][sum];
	return 0;
}
 
