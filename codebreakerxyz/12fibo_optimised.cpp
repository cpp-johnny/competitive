#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 998244353;

int main() {
    fastio;
    int n; cin >> n;

    long long a = 0, b = 1;
    for (int i = 0; i <= n; i++) {
        cout << a << endl;
        long long c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return 0;
}
