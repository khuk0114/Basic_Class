#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int cost_pack, cost_single, cost_mix;
	int min_pack = 1000, min_single = 1000;
	int cost_min;

	for (int i = 0; i < m; i++) {
		int pack, single;
		cin >> pack >> single;

		min_pack = min(min_pack, pack);
		min_single = min(min_single, single);		
	}

	cost_pack = ((n + 5) / 6) * min_pack;
	cost_single = n * min_single;
	cost_mix = (n / 6) * min_pack + (n % 6) * min_single;

	cost_min = min({ cost_pack, cost_single, cost_mix });
	cout << cost_min;

	return 0;
}