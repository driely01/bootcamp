#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	long long n, x;
	cin >> n >> x;

	vector<long long> container(n);
	vector<long long> prefixSum(n);

	for (long long i = 0; i < n; i++) {
		cin >> container[i];
		if (!i)
			prefixSum[i] = container[i];
		else
			prefixSum[i] = container[i] + prefixSum[i - 1];
	}

	auto lit = prefixSum.begin();
	auto rit = prefixSum.begin();
	long long counter = 0;

	for (; rit != prefixSum.end();) {
		if (lit == prefixSum.begin()) {
			if (*rit == x) {
				counter++;
				rit++;
			} else {
				if (*rit < x) {
					rit++;
				} else if (*rit > x) {
					lit++;
				}
			}
		} else {
			if (*rit - *(lit - 1) == x) {
				counter++;
				rit++;
			} else {
				if (*rit - *(lit - 1) < x)
					rit++;
				else if (*rit - *(lit - 1) > x)
					lit++;
			}
		}
	}
	cout << counter << endl;
	return 0;
}