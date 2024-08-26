#include <iostream>
#include <vector>

using namespace std;


long long lowerBound(long long target, const vector<long long>& container) {
    if (container.empty() || target > container.back()) return container.size();
    if (target <= container.front()) return 0;

    long long start = 0;
    long long end = container.size();

    while (start < end) {
        long long middle = start + (end - start) / 2;

        if (container[middle] < target)
            start = middle + 1;
        else 
            end = middle;
    }

    return start;
}

long long upperBound(long long target, const vector<long long>& container) {
    if (container.empty() || target >= container.back()) return container.size();
    if (target < container.front()) return 0;

    long long start = 0;
    long long end = container.size();

    while (start < end) {
        long long middle = start + (end - start) / 2;

        if (container[middle] <= target)
            start = middle + 1;
        else 
            end = middle;
    }

    return start;
}

int main(void) {

	int n;
	cin >> n;
	vector<long long> container(n);
	for (int i = 0; i < n; i++) {
		cin >> container[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		long long target;
		cin >> target;
		cout << lowerBound(target, container) << " " << upperBound(target, container) << endl;
	}
	return 0;
}
