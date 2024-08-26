#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void) {

	long long k, n;
	cin >> k >> n;
	vector<long long> container(k);
	multiset<long long> helper;
	vector<long long>::iterator leftIt;
	vector<long long>::iterator prevLeft;
	vector<long long>::iterator rightIt;
	for (long long i = 0; i < k; i++) {
		cin >> container[i];
		if (i >= n - 1) {
			if (i == n - 1) {
				leftIt = container.begin();
				prevLeft = leftIt;
				rightIt = container.begin() + n - 1;
			}
			if (leftIt == container.begin())
				helper.insert(leftIt, rightIt + 1);
			else {
				helper.erase(*prevLeft);
				helper.insert(*rightIt);
				prevLeft = leftIt;
			}

			auto helperIt = helper.begin();
			advance(helperIt, helper.size() % 2 ? helper.size() / 2 : helper.size() / 2 - 1);
			cout << *helperIt << " ";
			leftIt++;
			rightIt++;
		}
	}
	return 0;
}