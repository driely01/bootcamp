#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	long long n, k, j = 2;
	bool flag = false;
	cin >> n >> k;
	string letters = "  abcdefghijklmnopqrstuvwxyz";

	for (long long i = 0; i < n; i++) {
		if (j <= k) {
			cout << letters[j++];
		} else {
			cout << letters[j];
			j = 2;
		}
	}
	return 0;
}