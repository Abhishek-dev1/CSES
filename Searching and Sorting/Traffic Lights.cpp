#include<bits/stdc++.h>
using namespace std;    
#define mod 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL)
#define f(i,k) for(int (i) = 0 ; (i)< k ; i++)
int main()
{
    int x,n;
    cin>>x>>n;
    set<int>l{0,x};
    multiset<int>dis{x};
 
    for(int i=0;i<n;i++)
    {
        int pos;cin>>pos;
        auto it = l.upper_bound(pos); // upper bound of position of light initially only two positions are there 0 and x 
        auto it2 = it;
        it--;     // shifting to the left light just before the pos light
        dis.erase(dis.find(*it2-*it)); // removing the distance for ex initially  x is there but after a light it can't remain x 'cause of the light that added at pos
        dis.insert(pos - *it); 
        dis.insert(*it2 - pos);
        l.insert(pos);
        auto gap = dis.end();
        gap--;
        cout<<*gap<<" ";
    }
    return 0;
}
