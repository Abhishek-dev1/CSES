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
 	int med= arr[n/2];
 	long ans=0;
 	for(int i=0;i<n;i++)
 	{
 		ans+=abs(arr[i]-med);
	 }
	 cout<<ans<<endl;
 	
return 0;
}
