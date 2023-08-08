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

using namespace std;

int main(void) {
    int n;
    int value;
    int v;
    string s;

    cin >> n;
    stack<int> stack;
    
    for (int i = 0; i < n; i++) {
        cin >> value;
        if (value == 1)
        {
            cin >> v;
            stack.push(v);
        }
        else if (value == 2)
        {
            if (!stack.empty())
                stack.pop();
        }
        else if (value == 3)
        {
            if (!stack.empty())
            {
                s.append(to_string(stack.top()));
                s.append("\n");
            }
            else
                s.append("Empty!\n");
       }
    }
    cout << s;
}
