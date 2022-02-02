#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
 
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n];
	loop(i,n) cin>>arr[i];
	sort(arr,arr+n);
	int cnt=0,a=0,i=0,j=n-1;
	while(i<=j)
	{
	     if(arr[i]+arr[j]>m)
	     {
	          j--;
	          a++;
	     }
	     else if(arr[i]+arr[j]<=m)
	     {
	          cnt++;
	          i++;
	          j--;
	     }
	}
	cout<<a+cnt<<endl;
	
	return 0;
}
