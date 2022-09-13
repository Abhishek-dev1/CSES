#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++) cin>>arr[i];
 	sort(arr,arr+n);
 	long sum=0;
 	for(int i=0;i<n;i++)
 	{
 		if(sum+1<arr[i])
 		{
 			break;
		 }
		 sum+=arr[i];
	 }
	 cout<<sum+1<<endl;
return 0;
}
