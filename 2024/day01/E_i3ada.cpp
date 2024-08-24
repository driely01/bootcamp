#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	
	string n;
	long long min = 1;
	long long counter = 0;
	char c;
	cin >> n;

	c = n[0];
	for (long long i = 0; n[i]; i++) {
		if (n[i] == c) {
			counter++;
			if (counter > min)
				min = counter;
		}
		else {
			if (counter > min)
				min = counter;
			c = n[i];
			counter = 1;
		}
	}

	cout << min << "\n";
	return 0;
}