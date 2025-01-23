#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int mean, median, mode, range;
	cin >> n;
	vector<int> num(n), freq_list;
	unordered_map<int, int> freq; // <숫자, 빈도수>
	
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		freq[num[i]]++;
		sum += num[i];
	}

	mean = round((double)sum / n); //cmath

	sort(num.begin(), num.end());
	median = num[n / 2];

	mode = -1;
	int max_cnt = 0;
	for (auto it = freq.begin(); it != freq.end(); it++) {
		if (it->second > max_cnt) {
			max_cnt = it->second;
			freq_list.clear();
			freq_list.push_back(it->first);
		}
		else if (it->second == max_cnt) {
			freq_list.push_back(it->first);
		}
	}
	sort(freq_list.begin(), freq_list.end());
	mode = (freq_list.size() > 1) ? freq_list[1] : freq_list[0];

	range = num[n - 1] - num[0];

	cout << mean << "\n" << median << '\n'
		<< mode << '\n' << range;

	return 0;
}