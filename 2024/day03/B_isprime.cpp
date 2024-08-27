#include <iostream>

using namespace std;

void isPrime(long long n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "\"Not Prime\"" << endl;
			return;
		}
	}
	cout << "\"Prime\"" << endl;
}

int main(void) {
	long long n;
	cin >> n;
	isPrime(n);
	return 0;
}