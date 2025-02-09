#include <iostream>
#include <vector>

using namespace std;

vector<int>pc[101];
bool visit[101];
int virus_cnt = 0;

void dfs(int node)
{
	visit[node] = true;

	for (int next : pc[node]) {
		if (!visit[next]) {
			virus_cnt++;
			dfs(next);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		pc[a].push_back(b);
		pc[b].push_back(a);

	}

	dfs(1);
	cout << virus_cnt << '\n';

	return 0;
}