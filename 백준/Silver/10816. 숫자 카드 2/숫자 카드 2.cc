#include <iostream>
#include <vector>
#include <algorithm>
#define FAST_IO cin.tie(NULL)->ios::sync_with_stdio(false);

using namespace std;

int lower(int size, int val, vector<int>&);
int upper(int size, int val, vector<int>&);

int main() {
    FAST_IO
        
	int n1 = 0, n2 = 0;
	cin >> n1;
	vector<int> v(n1);
	for (int i = 0; i < n1; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cin >> n2;

	while (n2--) {
		//개수
		int val;
		cin >> val;
		cout << upper(n1, val, v) - lower(n1, val, v) << ' ';
	}
	return 0;
	
}

int lower(int size, int val, vector<int>&a)
{
	int st, en, mid;
	st = 0;
	en = size;
	while (st < en) {
		mid = (en + st) / 2;
		if (a[mid] >= val) {
			en = mid;
		}
		else { //a[mid] < val
			st = mid + 1;
		}
	}
	return st;
}

int upper(int size, int val, vector<int>&a) 
{
	int st, en, mid;
	st = 0;
	en = size;
	while (st < en) {
		mid = (en + st) / 2;
		if (a[mid] > val) {
			en = mid;
		}
		else { //a[mid] <= val
			st = mid + 1;
		}
	}
	return st;
}