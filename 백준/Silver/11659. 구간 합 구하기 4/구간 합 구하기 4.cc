#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> sum(n + 1);
	sum[0] = 0;

	for (int i = 1; i <= n; i++)	{
		int num;
		cin >> num;
		sum[i] = sum[i - 1] + num;
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		cout << sum[j] - sum[i - 1] << '\n';
	}

	return 0;
}