#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef pair<int, int> pii;

int fib (int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
    }


int32_t main() {
    fastio;
    int n; cin >> n;
    for (int i = 0; i <= n; ++i) {
        cout << fib(i) << endl;
    }
    return 0;
}