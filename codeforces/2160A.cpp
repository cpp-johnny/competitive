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
        for (int &x : a) cin >> x;

        unordered_set <int> s;
        for (int x : a) s.insert(x);

        int mex = 0;
        while (s.count(mex)) {
            ++mex;
        }

        cout << mex << endl;

    }
    
    return 0;
}