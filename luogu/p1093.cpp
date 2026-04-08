#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

bool cmp(const vector<int> &a, const vector<int> &b) {
    if (a[1] + a[2] + a[3] != b[1] + b[2] + b[3]) {
        return a[1] + a[2] + a[3] > b[1] + b[2] + b[3];
    }
    if (a[1] != b[1]) {
        return a[1] > b[1];
    }
    return a[0] < b[0];
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        cin >> v[i][1] >> v[i][2] >> v[i][3];
        v[i][0] = i + 1;
    }
    ranges::sort(v, cmp);
    for (int i = 0; i < 5; i++) {
        cout << v[i][0] << " " << v[i][1] + v[i][2] + v[i][3] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
