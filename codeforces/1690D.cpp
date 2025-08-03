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

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        string x; cin >> x;

        int W_count = 0;

        for (int i = 0; i < k; ++i) {
            if (x[i] == 'W') ++W_count;
        }

        int min_W = W_count;

        for (int i = k; i < n; ++i) {
            if (x[i - k] == 'W') --W_count;
            if (x[i] == 'W') ++W_count;
            min_W = min(min_W, W_count);
        }

        cout << min_W << endl;    
    }
    
    return 0;
}