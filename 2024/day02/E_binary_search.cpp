#include <iostream>
#include <vector>

using namespace std;

int binarySearch(long long target, vector<long long> &container, long long start, long long end) {
	if (start > end) {
		return 0;
	}
	
	long long middle = (start + end) / 2;

	if (container[middle] == target)
		return 1;
	else if (container[middle] < target)
		return binarySearch(target, container, middle + 1, end);
	else
		return binarySearch(target, container, start, middle -1);
}

int main(void) {
	
	long long n;
	cin >> n;
	vector<long long> container(n);
	for (long long i = 0; i < n; i++) {
		cin >> container[i];
	}
	long long q;
	cin >> q;
	for (long long i = 0; i < q; i++) {
		long long target;
		cin >> target;
		cout << binarySearch(target, container, 0, container.size() - 1) << endl;
	}
	return 0;
}