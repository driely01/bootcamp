#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	
	long long n, q;
	cin >> n >> q;
	vector<long long> container(n);

	for (int i = 0; i < n; i++) {
		cin >> container[i];
		if (i)
			container[i] = container[i - 1] ^ container[i];
	}

	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		if (!a)
			cout << container[b] << endl;
		else
			cout << (container[b] ^ container[a - 1]) << endl;
	}
	return 0;
}