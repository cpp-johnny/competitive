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

    int N, k; cin >> N >> k;

    vi t(N);

    for (int i = 0; i < N; ++i) cin >> t[i];

    int max_t = 0;

    for (int j = 1; j <= k; ++j) {
        int s = 0;

        for (int i = 0; i < j; ++i) s += t[i];
        max_t = max(max_t, s);

        for (int i = j; i < N; ++i) {
            s += t[i];
            s -= t[i - j];
            max_t = max(max_t, s);
        }
    }
    
    cout << max_t << endl;
    return 0;
}