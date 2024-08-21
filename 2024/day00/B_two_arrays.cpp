#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {

	int n;
	std::vector<int> firstArr;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		firstArr.push_back(element);
	}

	int m;
	std::vector<int> secondArr;
	std::cin >> m;
	for (int i = 0; i < m; i++) {
		int element;
		std::cin >> element;
		secondArr.push_back(element);
	}

	std::vector<int>::iterator it = firstArr.begin();
	std::vector<int> thirdArr;
	int count = 0;
	for (; it != firstArr.end(); ++it) {
		auto found = std::find(secondArr.begin(), secondArr.end(), *it);
		if (found == secondArr.end()) {
			count++;
			thirdArr.push_back(*it);
		}
	}

	std::cout << count << std::endl;
	for (int i = 0; i < thirdArr.size(); i++) {
		std::cout << thirdArr[i] << " ";
	}
	return 0;
}