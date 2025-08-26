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

    int n, m; cin >> n >> m;

    vi v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    } 

    sort(all(v));
    int x = 0, a = 0;

    for (int i = 0; i < m; ++i) {
        if (x + v[i] <= n) {
            x += v[i];
            ++a;
        } else {
            break;
        }
    }
    cout << a << endl;
    return 0;
}