#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> num;

	int n = 0;
	cin >> n;
	
	int i = 1;
	while (1) {
		i++;
		string snum = to_string(i);
		if (snum.find("666") != string::npos) {
			num.push_back(i);
		}

		if (num.size() == n)
			break;
	}

	cout << num[n - 1];
	
	return 0;
	
}