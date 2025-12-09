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
        int n; cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mx = max_element(all(a)) - a.begin(); 

        int expected = n -1;
        int L = mx - 1, R = mx + 1;
        bool ok = true;

        while (expected > 0) {
            if (L >= 0 && a[L] == expected) {
                --L;
            } else if (R < n && a[R] == expected) {
                ++R;
            } else {
                ok = false;
                break;
            }
            --expected;
        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }
    
    
    
    return 0;
}