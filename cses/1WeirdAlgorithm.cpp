#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef pair<int, int> pii;

int32_t main() {
    fastio;
    int n; cin >> n;
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        else if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    return 0;
}