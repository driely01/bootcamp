#include <string>
#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		if (element >= 0 && element <= 100)
			std::cout << (element + 2) << " ";
		else
			std::cout << element << " ";
	}
	return 0;
}