#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f(i,k) for(int i=0;i<k;i++)
int dp[1000001];
 
int main() {
    int n;
    cin>>n;
    int arr[n];
    set<int>s;
    f(i,n) cin>>arr[i];
    int maxi=-1;
    int r=-1;
    f(l,n)
    {
        while(r<n-1 && s.count(arr[r+1])==0 ) s.insert(arr[++r]);
        maxi= max(maxi,r-l+1);
        s.erase(arr[l]);
    }
    cout<<maxi<<endl;
return 0;
}
