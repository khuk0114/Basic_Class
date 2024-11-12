#include <iostream>
#include <vector>
#include <string>

using namespace std;

int digitSum(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	int num = 0;
	int ans, i;
	cin >> num;
	for (i = 1; i < num; i++) {
		ans = 0;
		ans = digitSum(i);
		ans += i;
		if (ans == num) {
			num = 0;
			cout << i;
			break;
		}
	}

	if (num != 0) {
		cout << "0";
	}

	return 0;
	

}