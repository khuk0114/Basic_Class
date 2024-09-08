#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	stack<int>stk;
	int n = 0;
	cin >> n;

	while (n != 0) {
		string st;
		cin >> st;
		if (st == "push") {
			int num;
			cin >> num;
			stk.push(num);
		}
		else if (st == "pop") {
			if (stk.empty() != 0) {
				cout << -1 << '\n';
			}
			else {
				cout << stk.top() << '\n';
				stk.pop();
			}
		}
		else if (st == "top") {
			if (stk.empty() != 0) {
				cout << -1 << '\n';
			}
			else cout << stk.top() << '\n';
		}
		else if (st == "size") {
			cout << stk.size() << '\n';
		}
		else if (st == "empty") {
			cout << stk.empty() << '\n';
		}
		n--;
	}

	return 0;
}