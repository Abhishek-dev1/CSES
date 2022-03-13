#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define loop(i,k) for(int i=0;i<k;i++)
int dp[5001][5001];
/*int solve(int i,int j,string s,string str)   GOT TLE BY MEMOISATION
{
	if(i==0) return j;
	if(j==0) return i;
	if(dp[i][j]!=-1)return dp[i][j];
	if(s[i-1]==str[j-1])
	return dp[i][j]=solve(i-1,j-1,s,str);
	return dp[i][j]=1+min(solve(i-1,j,s,str),min(solve(i,j-1,s,str),solve(i-1,j-1,s,str)));
}*/
int main()
{
	int n,m;
	string s,str;
	cin>>s>>str;
	n=s.size();
	m=str.size();
	loop(i,n+1) dp[i][0]=i;
	loop(j,m+1) dp[0][j]=j;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s[i-1]==str[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			{
				dp[i][j]=1+ min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			}
		}
	}
	cout<<dp[n][m];
return 0;
}
