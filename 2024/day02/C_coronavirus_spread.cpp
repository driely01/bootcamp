#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		int count = 1;
		int mn = 1e9;
		int mx = 1;
		cin >> n;
		vector<int> container(n);
		for (int j = 0; j < n; j++) {
			cin >> container[j];
			if (j) {
				if (container[j] - container[j - 1] <= 2) {
					count++;
					mx = std::max(mx, count);
				} else {
					mx = std::max(mx, count);
					mn = std::min(mn, count);
					count = 1;
				}
			}
		}
		mx = std::max(mx, count);
		mn = std::min(mn, count);
		cout << mn << " " << mx << endl;
	}
	return 0;
}