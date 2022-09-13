#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++) cin>>arr[i];
 	long int curr=0,maxx=LONG_MIN;
 	for(int i=0;i<n;i++)
 	{
 		if(curr<0)curr=arr[i];
 		else
 		curr+=arr[i];
 		maxx=max(curr,maxx);
 		
	 }
	 cout<<maxx<<endl;
 	
return 0;
}
