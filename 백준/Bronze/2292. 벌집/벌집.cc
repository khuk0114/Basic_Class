#include <iostream>

using namespace std;

int hex(int num)
{
	int cnt = 0;;
	num = num - 1;
	while (num > 0) {
		num -= 6 * cnt;
		cnt++;
	}
	return cnt;
}

int main() {
	int num = 0;
	cin >> num;

	if (num == 1)
		cout << "1";
	else
		cout << hex(num);

	return 0;
	
}