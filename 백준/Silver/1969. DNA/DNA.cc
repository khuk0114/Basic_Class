#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n, m;
	vector<string>DNA;
	string ans;

	cin >> n >> m;

	// DNA 데이터 입력
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		DNA.push_back(input);
	}

	int count = 0; // 불일치 개수 확인

	for (int col = 0; col < m; col++) {
		int cnt[4] = { 0 };
		for (int row = 0; row < n; row++) {

			switch (DNA[row][col])
			{
			case 'A':
				cnt[0]++;
				break;
			case 'C':
				cnt[1]++;
				break;
			case 'G':
				cnt[2]++;
				break;
			case 'T':
				cnt[3]++;
				break;
			}
		}

		int max_idx = 0;
		for (int idx = 0; idx < 4; idx++)
		{
			if (cnt[idx] > cnt[max_idx])
				max_idx = idx;
		}

		switch (max_idx)
		{
		case 0:
			ans += "A";
			break;
		case 1:
			ans += "C";
			break;
		case 2:
			ans += "G";
			break;
		case 3:
			ans += "T";
			break;
		}
		
		count += n - cnt[max_idx]; //불일치 개수 계산

	}

	cout << ans << "\n";
	cout << count;


	return 0;
	
}