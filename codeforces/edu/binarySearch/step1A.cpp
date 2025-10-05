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

    int n, k;
    cin >> n >> k;

    vi a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < k; ++i) {
        int x; cin >> x;
        int l = 0; int r = n - 1;
        bool found = false;
        
        while (r >= l) {
            int m = (l + r) /2;
            if (a[m] == x) {
                found = true;
                break;
            } else if (a[m] < x) {
                l =  m + 1;
            } else if (a[m] > x) {
                r = m - 1;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    
    return 0;
}