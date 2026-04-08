#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

long long fastmod(long long a, long long b, long long mod) {
    long long ans = 1;
    while (b > 0) {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

void solve() {
    long long a, b, p;
    cin >> a >> b >> p;
    long long ans = fastmod(a, b, p);
    cout << a << "^" << b << " mod " << p << "=" << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
