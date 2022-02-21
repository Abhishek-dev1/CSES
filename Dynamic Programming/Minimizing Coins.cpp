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
		dp[0][i]=INT_MAX-1;
	}
	for(int i=1;i<n+1;i++)
	{
		dp[i][0]=0;
	}
	dp[0][0]=0;
	for(int i=1;i<x+1;i++)
	{
		if(i%arr[0]==0)
		{
			dp[1][i]=i/arr[0];
		}
		else
		{
			dp[1][i]=INT_MAX-1;
		}
	}
	for(int i=2;i<n+1;i++)
	{
		for(int j=1;j<x+1;j++)
		{
			if(arr[i-1]<=j)
			dp[i][j]=min(dp[i][j-arr[i-1]]+1,dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	if(dp[n][x]==2147483646)
	cout<<-1;
	else
	cout<<dp[n][x];
	return 0;
}
