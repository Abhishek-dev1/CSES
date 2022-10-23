#include <iostream>
using namespace std;
 
#define mod 1000000007 
 
long long int power(long long int a, long long int b)
{
    long long int res = 1;
    while(b > 0)
    {
        if(b&1)
        res = (res*a)%mod;
 
        a = (a*a) % mod;
        b = b>>1; //remove last bit
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;
    }
	return 0;
}
