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


void yesOrNo(string line) {
    stack<char> stack;

    for (int i = 0; line[i]; i++) {
        if (line[i] == '(' || line[i] == '[')
            stack.push(line[i]);
        if (line[i] == ')') {
            if (!stack.empty() && stack.top() == '(')
                stack.pop();
            else {
                cout << "No" << endl;
                return;
            }
        }
        if (line[i] == ']') {
            if (!stack.empty() && stack.top() == '[')
                stack.pop();
            else {
                cout << "No" << endl;
                return;
            }
        }
    }
    if (stack.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main (void) {

    string line;
    stack<char> stack;
    int i = 0;
    int n;

    cin >> n;
    cin.get();
    while (i < n) {
        getline(cin, line, '\n');
        yesOrNo(line);
        i++;
    }
}
