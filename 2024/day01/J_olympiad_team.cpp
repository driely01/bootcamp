#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void findElements(multimap<int, int> &container, int value) {
	auto itt = container.find(value);
	if (itt != container.end() && itt->second != -1) {
		if (value == 3)
			cout << itt->second << "\n";
		else
			cout << itt->second << " ";
		container.erase(itt);
	}
}

int main(void) {
	
	int n;
	cin >> n;
	multimap<int, int> container;
	map<int, int> helper;
	for (int i = 1; i <= n; i++) {
		int element;
		cin >> element;
		container.insert({element, i});
		helper[element] += 1;
	}

	if (helper.size() < 3) {
		cout << 0 << endl;
		return 0;
	}

	int teams = n;

	auto it = helper.begin();
	for (; it != helper.end(); ++it) {
		if (it->second < teams)
			teams = it->second;
	}
	
	std::cout << teams << "\n";
	for (int i = 0; i < teams; i++) {
		findElements(container, 1);
		findElements(container, 2);
		findElements(container, 3);
	}
	return 0;
}