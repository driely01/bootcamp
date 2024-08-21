#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
	int n;
	int height;
	std::cin >> n;
	std::cin >> height;
	int width = 0;
	for (int i = 0; i < n; i++) {
		int element;
		std::cin >> element;
		if (element > height)
			width += 2;
		else
			width++;
	}
	std::cout << width << "\n";
	return 0;
}