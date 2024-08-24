#include <iostream>
#include <string>

int main(void) {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int arraySize;
		int mihai = 0, bianca = 0;
		std::cin >> arraySize;
		for (int j = 0; j < arraySize; j++) {
			int element;
			std::cin >> element;
			if (element % 2)
				bianca += element;
			else
				mihai += element;
		}
		if (mihai > bianca)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}