#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
int main() {
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	loop(i,n)
	{
	     int c,d;
	     cin>>c>>d;
	     v.push_back({c,d});
	}
	int cnt=1;
	sort(v.begin(),v.end(),sortbysec);
	int limit = v[0].second;
	for(int i=1;i<n;i++)
	{
	     if(v[i].first>=limit)
	{
		limit=v[i].second;
	     cnt++;}
	}
	cout<<cnt<<endl;
	
	return 0;
}
