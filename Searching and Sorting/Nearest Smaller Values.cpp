	#include<bits/stdc++.h>
	using namespace std;
	#define mod 1000000007
	#define f(i,k) for(int (i)=0;(i)<(k);i++)
	#define ll long long 
 
	int main()
	{
		int n; cin>>n;
		int arr[n]; f(i,n) cin>>arr[i];
		stack<int> S;
 
    for (int i=0; i<n; i++)
    {
        while (!S.empty() && arr[S.top()] >= arr[i])
            S.pop();
        if (S.empty())
            cout <<0<<" " ;
        else
            cout << S.top()+1 << " ";
        S.push(i);
    }
	return 0;
	}
