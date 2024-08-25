#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(void) {

	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {

		int k, n;
		cin >> k >> n;

		vector<int> container(k);
		vector<int> prefixSum(k);

		for (int i = 0; i < k; i++) {
			cin >> container[i];
			if (i)
				prefixSum[i] = container[i] + prefixSum[i - 1];
			else
				prefixSum[i] = container[i];
		}

		auto lit = prefixSum.begin();
		auto rit = prefixSum.begin() + n - 1;


		long min = -1;
		for (; rit != prefixSum.end();) {
			if (lit == prefixSum.begin()) {
				if (*rit > min) {
					min = *rit;
				}
			} else {
				if (*rit - *(lit - 1) > min) {
					min = *rit - *(lit - 1);
				}
			}
			rit++;
			lit++;
		}
		cout << min << endl;
	}

	return 0;
}