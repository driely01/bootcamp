#include <iostream>
#include <vector>

using namespace std;

long long mod = 1000000007;

unsigned long long myPower(unsigned long long a, unsigned long long b) {
	unsigned long long ans = 1;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % mod;
		}
		a = (a * a) % mod;
		b >>= 1;
	}
	return ans;
}

int main(void) {
	long long n, q;
	cin >> n >> q;
	vector<long long> container(n);
	for (long long i = 0; i < n; i++) {
		cin >> container[i];
		if (i) {
			container[i] = (container[i] * container[i - 1]) % mod;
		}
	}
	auto it = container.begin();
	for (long long i = 0; i < q; i++) {
		long long l, r;
		cin >> l >> r;
		l--;
		r--;
		if (!l)
			cout << container[r] << endl;
		else {
			cout << (container[r] * (myPower(container[l - 1], mod - 2) % mod)) % mod << endl;
		}
	}
	return 0;
}