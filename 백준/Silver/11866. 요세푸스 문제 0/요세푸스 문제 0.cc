#include <iostream>
#include <list>

using namespace std;

void func(int n, int k);

int main() {
	int n = 0, k = 0;

	cin >> n >> k;
	func(n, k);
}

void func(int n, int k) {
	list<int>lst;
	for (int i = 1; i <= n; i++) {
		lst.push_back(i);
	}
	auto it = lst.begin();

	cout << "<";
	while (!lst.empty()) {
		for (int i = 0; i < k - 1; i++) {
			it++;
			if (it == lst.end())
				it = lst.begin();
		}
		cout << *it;
		it = lst.erase(it);

		if (it == lst.end())
			it = lst.begin();

		if(!lst.empty())
			cout << ", ";
	}
	cout << ">";
}