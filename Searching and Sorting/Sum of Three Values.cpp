#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9+7
#define loop(i,k) for(int i=0;i<k;i++)
#define endl "\n"
 
int main() {
	int n,x; cin >> n >> x;
	vector<pair<int, int>> arr;
	for(int i = 1; i <= n; i++){
		int a; cin >> a;
		pair<int, int> p; p.first = a; p.second = i;
		arr.push_back(p);
	}
	sort(begin(arr), end(arr));
	for(int i = 0; i < n; i++){
		int l, r; l = 0; r = n-1;
		while(l != r){
			int target; target = x - arr[i].first;
			if(l != i && r != i && arr[l].first + arr[r].first == target){
				cout << arr[i].second << " " << arr[l].second
					 << " " << arr.[r].second << endl;
				return 0;
			}
			if(arr[l].first + arr[r].first < target){
				l++;
			}
			else{
				r--;
			}
		}
	}
	cout << "IMPOSSIBLE" << endl;
return 0;
}
