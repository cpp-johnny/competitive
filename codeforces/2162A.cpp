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
        int mx = 0, y;
        while (n--) {
            cin >> y;
            mx = max(mx, y);
        }

        cout << mx << endl;
    }
       
    return 0;
}