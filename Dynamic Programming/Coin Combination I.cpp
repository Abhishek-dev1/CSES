#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n];
	
	for(int i=0;i<n;i++) cin>>arr[i];
	
	dp[0]=1;
	for(int i=0;i<x+1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]<=i)
			dp[i]+=dp[i-arr[j]];
			dp[i]= dp[i]%1000000007;
		}
	}
	cout<<dp[x];
	return 0;
}
