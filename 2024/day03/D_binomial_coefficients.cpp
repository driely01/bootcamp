#include <iostream>

using namespace std;

int mod = 1e9 + 7;

long long factorialUnderModulo(long long a, long long b) {
	long long ans = 1;
	for (int i = a; i >= 1; i--) {
		if (i == b)
			break;
		ans = (ans * i) % mod;
	}
	return ans;
}

long long myPower(long long a, long long b) {
	long long ans = 1;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % mod;
		}
		a = (a * a) % mod;
		b >>= 1;
	}
	return ans;
}

void binomialCofficients(long long a, long long b) {
	if (b == 0 || a == b) {
		cout << 1 << endl;
		return;
	}
	if (a == b + 1) {
		cout << a << endl;
		return;
	}
	long long ans;
	if (b > a - b)
		ans = ((factorialUnderModulo(a, b) % mod) * (myPower(factorialUnderModulo((a - b), -1), mod - 2) % mod)) % mod;
	else
		ans = ((factorialUnderModulo(a, a - b) % mod) * (myPower(factorialUnderModulo(b, -1), mod - 2) % mod)) % mod;
	cout << ans << endl;
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		binomialCofficients(a, b);
	}
	return 0;
}