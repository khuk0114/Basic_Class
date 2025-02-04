#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_set<string> lis_name;
    vector<string> result; 
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        lis_name.insert(name);
    }

    for (int i = 0; i < m; ++i) {
        string name;
        cin >> name;
        if (lis_name.find(name) != lis_name.end()) { 
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (const string& name : result) {
        cout << name << '\n';
    }

    return 0;
}
