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
#include <stack>

#define ll long long
#define endl '\n'

using namespace std;

int main(void) {
	
	string command;
	ll		x;
	set<ll> set;
	while (cin >> command) {
		cin >> x;
		if (command == "insert")
			set.insert(x);
		else if (command == "delete")
			set.erase(x);
		else {
			bool ex = (set.find(x) != set.end());
			if (ex)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
	}
}