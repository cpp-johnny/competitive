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
        string s; cin >> s;

        int zeros = count(all(s), '0');
        string target = string(zeros, '0') + string(n - zeros, '1');

        int mnismatch = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] != target[i]) {
                ++mnismatch;
            }
        }

        cout << mnismatch / 2 << endl;
    }
    
    
    return 0;
}