#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int num = 0;
	cin >> num;
	queue<int> que;
	while (num != 0) {
		string str;
		cin >> str;
		if (str == "push") {
			int n = 0;
			cin >> n;
			que.push(n);
		}
		else if (str == "pop") {
			if (que.empty() != 0) {
				cout << -1 << '\n';
			}
			else {
				cout << que.front() << '\n';
				que.pop();
			}
		}
		else if (str == "size") {
			cout << que.size() << '\n';
		}
		else if (str == "front") {
			if (que.empty() != 0) {
				cout << -1 << '\n';
			}
			else
				cout << que.front() << '\n';
		}
		else if (str == "back") {
			if (que.empty() != 0) {
				cout << -1 << '\n';
			}
			else
				cout << que.back() << '\n';
		}
		else if (str == "empty") {
			cout << que.empty() << '\n';
		}
		num--;
	}

	return 0;
}