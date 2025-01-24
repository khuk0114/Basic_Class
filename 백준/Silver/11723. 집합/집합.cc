#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, x;
	string op;
	bitset<21> S;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == "add")
		{
			cin >> x;
			S.set(x);			
		}

		else if (op == "remove")
		{
			cin >> x;
			S.reset(x);
		}

		else if (op == "check")
		{
			cin >> x;
			cout << S.test(x) << '\n';
		}

		else if (op == "toggle")
		{
			cin >> x;
			S.flip(x);
		}

		else if (op == "all")
		{
			S.set();
		}

		else if (op == "empty")
		{
			S.reset();
		}

	}
    
	return 0;

}