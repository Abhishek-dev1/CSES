#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
 
int main() {
	int n;
	cin>>n;
	vector<pair<int,int>>v ;
	for(int i=0;i<n;i++)
	{
	     int c,d;
	     cin>>c>>d;
	     v.push_back({c,1});
	     v.push_back({d,-1});
	}
	sort(v.begin(),v.end());
	int curr=0,maxx=0;
	for(int i=0;i<v.size();i++)
	{
	     curr+=v[i].second;
	     maxx=max(maxx,curr);
	}
     cout<<maxx<<endl;
   
   return 0;
}
