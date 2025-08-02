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
    int n, d;
    cin >> n >> d;

    vi pitches(n);
    for (int i = 0; i < n; ++i) cin >> pitches[i];

    sort(all(pitches));

    int recordings = 0;
    int i = 0;

    while (i < n) {
        ++recordings;
        int limit = pitches[i] + d;

        while (i < n && pitches[i] <= limit) {
            ++i;
        }
    }

    cout << recordings << '\n';
    return 0;
}
