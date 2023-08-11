#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <unistd.h>
#include <unistd.h>
#include <algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<sstream>
#include <set>
#include <unordered_set>
#include <cstring>
#include <string.h>
#include <queue>
#include <math.h>
#include <inttypes.h>

#define ll long long
#define endl '\n'

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int64_t n;
	int64_t c;
	int64_t value2;
	int64_t value3;
	int64_t i = 0; 

	cin >> n;
	int64_t arr[n];
	int64_t pre[n + 1];
	pre[0] = 0;

	cin >> c;

	while (i < n) {
		cin >> arr[i];
		if (i > 0)
			pre[i] = arr[i - 1] + pre[i - 1];
		i++;
	}
	pre[i] = arr[i - 1] + pre[i - 1];

	i = 1;
	while (i <= c) {
		cin >> value2 >> value3;
		cout << pre[value3] - pre[value2 - 1] << endl;
		i++;
	}
}