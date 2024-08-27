#include <iostream>

using namespace std;

int mod = 1e9 + 7;

unsigned long long myPower(long long possibilities, unsigned long long n) {
	long long ans = 1;
	while(n) {
		if (n & 1) {
			ans = (possibilities * ans) % mod;
		}
		possibilities = (possibilities * possibilities) % mod;
		n >>= 1;
	}
	return ans;
}

int main(void) {
	long long n;
	cin >> n;
	cout << myPower(3, n) << endl;
	return 0;
}