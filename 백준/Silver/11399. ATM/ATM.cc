#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int result = 0;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += p[i]; // 현재 사람이 기다리는 시간
        result += sum; // 다 합한 거
    }

    cout << result << endl;

    return 0;
}
