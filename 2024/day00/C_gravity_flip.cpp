#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int main(void) {
	int n;
	std::cin >> n;
	std::multiset<int> arr;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		arr.insert(element);
	}

	auto it = arr.begin();
	for (; it != arr.end(); ++it)
		std::cout << *it << " ";
	return 0;
}