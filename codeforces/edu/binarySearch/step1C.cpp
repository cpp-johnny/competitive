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

    int n, k; cin >> n >> k;
    vi a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < k; ++ i) {
        int x; cin >> x;
        int l = -1, r = n;
        bool found = false;

        while (r > l + 1) {
            int m = (l + r) /2;
            if (a[m] < x) {
                l = m;
            } else {
                r = m;
            }
        }

        cout << r + 1 << endl;
    }
    
    return 0;
}