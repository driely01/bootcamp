#include <iostream>
#include <map>
#include <string>

using namespace std;

long long mod = 1e9 + 7;

long long factorialUnderModulo(long long &n) {
	long long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = (ans * i) % mod;
	}
	return ans % mod;
}

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
	string str;
	cin >> str;
	map<char, long long> container;
	long long i = 0;
	for (; str[i]; i++) {
		container[str[i]]++;
	}
	auto it = container.begin();
	long long denominature = 1;
	for (; it != container.end(); ++it) {
		if (it->second >= 2) {
			denominature = (denominature * factorialUnderModulo(it->second)) % mod;
		}
	}
	// n! / d1! * d2! => n! * (d1! * d2!) ^ mod - 2
	cout << ((factorialUnderModulo(i) % mod) * (myPower(denominature, mod - 2) % mod)) % mod << endl;
	return 0;
}