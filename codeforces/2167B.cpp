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

    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        int freq[26] = {0};

        for (int i = 0; i < n; ++i) {
            ++freq[s[i] - 'a'];
            --freq[t[i] - 'a'];
        }

        bool ans = true;
        for (int i =  0; i < 26; ++i) {
            if (freq[i] != 0) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    
    return 0;
}