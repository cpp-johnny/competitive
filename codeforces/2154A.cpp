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
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int last = -k;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1' && i - last >= k) {
                ++ans;
            }

            if (s[i] == '1') {
                last = i;
            }
        }

        cout << ans << endl;  
     
    }
    return 0;
}