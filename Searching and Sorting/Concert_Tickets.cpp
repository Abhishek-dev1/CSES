#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,k) for(int i=0;i<k;i++)
 
int main() {
     int n,m;
     cin>>n>>m;
     multiset<int>s;   //why using multiset?**
     int arr[m];
     for(int i=0;i<n;i++)
     {
          int k;
          cin>>k;
          s.insert(k);
     }
     loop(i,m) cin>>arr[i];
     for(int i=0;i<m;i++)
     {
          auto it=s.upper_bound(arr[i]); //why uper_bound instead of lower bound?**
          if(it==s.begin())
          cout<<-1<<endl;
          else{
          cout << *(--it) << "\n";
		s.erase(it);
          }
     }
	
	return 0;
}
