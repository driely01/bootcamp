#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <limits.h>

int main(void) {
	std::map<std::string, int, std::greater<std::string>> documents;
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string element;
		std::cin >> element;
		documents[element] += 1;
	}

	if (!documents.empty()) {

		auto it = documents.begin();
		auto select = it;

		int max = INT_MIN;

		for (; it != documents.end(); ++it) {
			if (it->second > max) {
				select = it;
				max = it->second;
			}
		}
		
		std::cout << select->first << " " << select->second << "\n";
	}
	return 0;
}