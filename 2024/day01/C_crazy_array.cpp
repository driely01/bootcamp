#include <iostream>
#include <vector>

int main(void) {

	long long n;
	long long steps = 0;
	std::vector<long long> container;
	std::cin >> n;

	for (long long i = 0; i < n; i++) {

		long long element;
		std::cin >> element;
		container.push_back(element);
		if (i > 0) {
			if (container[i - 1] - container[i] > 0) {
				steps += container[i - 1] - container[i];
				container[i] += container[i - 1] - container[i];
			}
		}
	}
	std::cout << steps << "\n";
	return 0;
}