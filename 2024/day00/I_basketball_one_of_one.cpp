#include <string>
#include <iostream>
#include <map>
#include <algorithm>

int main(void) {
	std::string gameHistory;
	std::map<char, int> container;
	std::cin >> gameHistory;
	for (int i = 0; i < gameHistory.length(); i += 2) {
		if (gameHistory[i + 1]) {
			container[gameHistory[i]] += (gameHistory[i + 1] - '0');
			if (container['A'] > 10 && container['B'] < 10) {
				std::cout << "A\n";
				return 0;
			} else if (container['A'] < 10 && container['B'] > 10){
				std::cout << "B\n";
				return 0;
			}
			if (container['A'] >= 10 && container['B'] >= 10) {
				if (container['A'] - container['B'] >= 2) {
					std::cout << "A\n";
					return 0;
				}
				if (container['B'] - container['A'] >= 2) {
					std::cout << "B\n";
					return 0;
				}
			}
		}
	}
	return 0;
}