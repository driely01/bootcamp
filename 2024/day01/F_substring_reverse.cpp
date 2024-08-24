#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	int start, end;
	cin >> str >> start >> end;
	end--; start--;
	int i = 0;
	while (str[i] && i < start) cout << str[i++];
	if (i == start) {
		i = end;
		while (str[i] && i >= start) cout << str[i--];
	}
	i = end + 1;
	while (str[i]) cout << str[i++];
	return 0;
}