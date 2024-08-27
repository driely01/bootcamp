#include <iostream>

using namespace std;

long long mod = 1e9 + 7;

void myPower(long long a, long long b) {
	long long ans = 1;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % mod;
		}
		a = (a * a) % mod;
		b >>= 1;
	}
	cout << ans << endl;
}

int main(void) {
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		myPower(a, b);
	}
	return 0;
}