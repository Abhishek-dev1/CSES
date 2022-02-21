#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int main()
{
	int n;
	cin>>n;
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		int minn=INT_MAX;
		while(temp!=0)
		{
			int rem=temp%10;
			temp/=10;
			if(rem==0)
			continue;
			minn=min(minn,1+dp[i-rem]);
		}
		dp[i]=minn;
	}
	cout<<dp[n];
	return 0;
