#include <iostream>

using namespace std;

int isPrime(long long n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 1;
		}
	}
	return 0;
}

int main(void) {
	long long n, m;
	bool flag = false;
	cin >> n >> m;
	for (;n <= m; n++) {
		if (!isPrime(n)) {
			cout << n << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "Absent" << endl;
	}
	return 0;
}