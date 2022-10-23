#include <iostream>
using namespace std;
#define mod 1000000007 
long long int power(long long int a, long long int b,long long m)
{
    long long int res = 1;
    while(b > 0)
    {
        if(b&1)
        res = (res*a)%m;
 
        a = (a*a) % m;
        b = b>>1; //remove last bit
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--){
	int a,b,c;
	cin>>a>>b>>c;
	long long p=power(b,c,mod-1);
	cout<<power(a,p,mod)<<endl;
    }
	return 0;
}
