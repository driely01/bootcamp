#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <sstream>

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::stack<int> container;
	std::string tmp;
	std::getline(std::cin, tmp);
	n = std::stoi(tmp);
	for (int i = 0; i < n; i++) {
		std::string element;
		std::getline(std::cin, element);
		if (element[0] == '1') {
			container.push(std::stoi(element.substr(2)));
		} else if (element[0] == '2') {
			if (!container.empty())
				container.pop();
		} else if (element[0] == '3') {
			if (container.empty())
				std::cout << "Empty!\n";
			else
				std::cout << container.top() << "\n";
		}
	}
	return 0;
}