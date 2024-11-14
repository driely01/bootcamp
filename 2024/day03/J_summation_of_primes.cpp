#include <iostream>
#include <vector>

using namespace std;

long long N = 1e6;

// int isPrime(long long n) {
// 	for (int i = 2; i * i <= n; i++) {
// 		if (n % i == 0) {
// 			return 1;
// 		}
// 	}
// 	return 0;
// }

// int main(void) {
// 	std::ios::sync_with_stdio(false);
// 	std::cin.tie(nullptr);

// 	long long t;
// 	cin >> t;
// 	vector<long long> container;
// 	long long number = 2;
// 	for (int i = 0; i < 100; i++, number++) {
// 		if (!isPrime(number)) {
// 			container.push_back(number);
// 		}
// 	}
// 	for (int i = 0; i < t; i++) {
// 		long long element;
// 		cin >> element;
// 		long long j = 0, total = 0;
// 		while (container[j] <= element)
// 			total += container[j++];
// 		cout << total << endl;
// 	}
// 	return 0;
// }

int main(void) {
	vector<bool> is_prime(N + 1, true);
	vector<long long> container;
	is_prime[0] = is_prime[1] = false;
	for (long long i = 0; i <= N; i++) {
		if (is_prime[i] && i * i <= N) {
			for (long long j = i * i; j <= N; j += i) {
				is_prime[j] = false;
			}
			container.push_back(i);
		}
	}
	auto it = container.begin();
	for (; it != container.end(); ++it) {
		cout << *it << " ";
	}
	return 0;
}