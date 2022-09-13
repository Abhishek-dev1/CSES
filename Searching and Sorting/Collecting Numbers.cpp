#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
 	int n,a,ans=1;
    cin>>n;
    int pos[n+1];
    for(int i=1;i<=n;i++)cin>>a,pos[a]=i;
    for(int i=1;i<n;i++)if(pos[i+1]<pos[i])ans++;
    cout<<ans<<endl;
return 0;
}
