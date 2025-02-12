#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;

	vector<int> num(n + 1, 0);
	vector<int> sum(n + 1, 0);

	for (int i = 1; i <= n; i++)	{
		cin >> num[i];
		sum[i] = sum[i - 1] + num[i];
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		cout << sum[j] - sum[i - 1] << '\n';
	}

	return 0;
}