#include <iostream>
#include <map>
#include <algorithm>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	int x;
	std::multimap<int, int> container;
	std::cin >> n;
	std::cin >> x;
	int diff = 0;
	for (int i = 1; i <= n; i++) {
		int element;
		std::cin >> element;
		container.insert({ element, i });
		diff = x - element;
		if (diff >= 0) {
			auto it = container.find(diff);
			if (it != container.end() && it->second != i) {
				std::cout << it->second << " " << i << "\n";
				return 0;
			}
		}
	}

	std::cout << "IMPOSSIBLE\n";
	return 0;
}