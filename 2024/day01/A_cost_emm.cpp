#include <string>
#include <iostream>
#include <map>
#include <algorithm>

int main(void) {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int arraySize, target;
		std::cin >> arraySize >> target;
		std::map<int, int> container;
		for (int j = 0; j < arraySize; j++) {
			int element;
			std::cin >> element;
			container[element] += 1;
		}
		auto it = container.find(target);
		if (it != container.end())
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}