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
#define ll long long

using namespace std;

int main(void) {
    int n;
    int value;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    
}