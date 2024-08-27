#include <iostream>

using namespace std;

long long mod = 998244353;

long long factorialUnderModulo(int &n) {
	long long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = (ans * i) % mod;
	}
	return ans % mod;
}

int main(void) {
	int n;
	cin >> n;
	cout << factorialUnderModulo(n) << endl;
}