#include <iostream>
#include <vector>

using namespace std;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

void dfs(int x, int y, vector<vector<int>>& field) {
	field[x][y] = 0;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < field.size() && ny >= 0 && ny < field[0].size()) {
			if (field[nx][ny] == 1) {
				dfs(nx, ny, field);
			}
		}
	}
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int m, n, k;
		cin >> m >> n >> k;


		vector<vector<int>> field(m, vector<int>(n, 0));


		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			field[x][y] = 1;
		}

		int worm = 0;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (field[i][j] == 1) {
					dfs(i, j, field);
					worm++;
				}
			}
		}
		cout << worm << '\n';
	}


	return 0;

}