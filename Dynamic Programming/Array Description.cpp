#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	int dp[n+2][m+2];
	memset(dp,0,sizeof(dp));
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1){
				if(arr[i]==0 || arr[i]==j )
				dp[i][j]=1;
				else
				dp[i][j]=0;
			}
			else
			{
				if(arr[i]==0 || arr[i]==j ) dp[i][j] = ((dp[i-1][j-1] + dp[i-1][j])%1000000007 + dp[i-1][j+1])%1000000007;
				else dp[i][j]=0;	
			}
		}
	}
	ll cnt=0;
	for(int i=1;i<=m;i++)
	{
		cnt = (cnt + dp[n][i]) %1000000007;
	}
	cout<<cnt<<endl;

return 0;
}
