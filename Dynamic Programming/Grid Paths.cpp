#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
char ch[1001][1001];
int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		cin>>ch[i][j];
	}
	if(ch[1][1]=='*' || ch[n][n]=='*')
	{
		cout<<0<<endl;
		return 0;
	}
	dp[1][1]=1;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(ch[i][j]=='*')
			dp[i][j]=0;
			else{
			if(i>0)
			dp[i][j]+=dp[i-1][j];
			if(j>0)
			dp[i][j]+=dp[i][j-1];
			dp[i][j]= dp[i][j]%1000000007;
			}
		}
	}
	cout<<dp[n][n];
	return 0;
