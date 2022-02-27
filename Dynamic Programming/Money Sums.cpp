#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl "\n"
#define loop(i,k) for(int i=0;i<k;i++)
bool dp[101][500501];
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	loop(i,n) {
	cin>>arr[i];
	sum+=arr[i];
	}
	for(int i=0;i<n+1;i++)
	{
		dp[i][0]=1;
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<sum+1;j++)
		{
			if(arr[i-1]<=j)
			dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	int cnt=0;
	for(int i=1;i<sum+1;i++)
	{
		if(dp[n][i])
		cnt++;
	}
	cout<<cnt<<endl;
	for(int i=1;i<sum+1;i++)
	{
		if(dp[n][i])
		cout<<i<<" ";
	}
	return 0;
}
 
