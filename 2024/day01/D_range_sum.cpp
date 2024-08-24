#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	
	long long n, q;
	vector<long long> container;
	cin >> n >> q;
	for (long long i = 0; i < n; i++) {
		long long element;
		cin >> element;
		container.push_back(element);
		if (i > 0)
			container[i] = container[i - 1] + container[i];
	}
	for (long long i = 0; i < q; i++) {
		long long a, b;
		cin >> a >> b;
		a--; b--;
		if (a == 0)
			std::cout << container[b] << "\n";
		if (a > 0)
			std::cout << container[b] - container[a - 1] << "\n";
	}
	return 0;
}