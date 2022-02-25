#include<bits/stdc++.h>
using namespace std;
int dp[1001][100001];
int main()
{
	int n,x;
	cin>>n>>x;
	int wt[n];
	int val[n];
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<x+1;j++)
		{
			if(wt[i-1]<=j)
			dp[i][j]=max((val[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][x];
 return 0;
}
