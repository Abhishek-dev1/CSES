#include<bits/stdc++.h>
using namespace std;
int dp[101][1000001];
int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	for(int i=0;i<x+1;i++)
	{
		dp[0][i]=0;
	}
	for(int i=1;i<n+1;i++)
	{
		dp[i][0]=1;
	}
	dp[0][0]=1;
 
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<x+1;j++)
		{
			if(arr[i-1]<=j)
			dp[i][j]=((dp[i][j-arr[i-1]])%1000000007+(dp[i-1][j])%1000000007)%1000000007;
			else
			dp[i][j]=dp[i-1][j]%1000000007;
		}
	}
	cout<<dp[n][x]%1000000007;
	return 0;
}
