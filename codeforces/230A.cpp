#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

int32_t main() {
    fastio;

    int s, n; cin >> s >> n;

    vpii a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    sort(all(a));

    for (auto [x, y] : a) {
        if (s > x) {
            s += y;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";      
    return 0;
}