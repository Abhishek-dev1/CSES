#include <iostream>
using namespace std;
#define mod 1000000007 
 
int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0){
		if (n / i == i)
                cnt++;
 
            else 
                cnt = cnt + 2;
		}
	}
	cout<<cnt<<endl;
    }
	return 0;
}
