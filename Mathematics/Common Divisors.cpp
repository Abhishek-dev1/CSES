#include <cmath>
#include <iostream>
using namespace std;
int divisors[1000001];
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		for (int div = 1; div*div <= a; div++) {
			if (a % div == 0) {
				// the divisor and quotient are both divisors of a
				divisors[div]++;
				// make sure not to double count!
				if (div != a / div) {
					divisors[a / div]++;
				}
			}
		}
	}
 
	for (int i = 1000000; i >= 1; i--) {
		if (divisors[i] >= 2) {
			cout << i << endl;
			break;
		}
	}
}
