#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
 
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	int f[m];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	loop(i,m)cin>>f[i];
	sort(arr,arr+n);
	sort(f,f+m);
	int i=0,j=0,cnt=0;
	while(i<n &&j<m)
	{
	     if(abs(arr[i]-f[j])<=k){
	     cnt++;
	     i++;
	     j++;
	     }
	     else if(arr[i]-f[j]>k)
	     j++;
	     else 
	     i++;
	}
	cout<<cnt<<endl;
	return 0;
}
