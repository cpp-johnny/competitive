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

    int x, y, z; cin >> x >> y >> z;

    int mn = min({x, y, z});
    int mx = max({x, y, z});

    if (mx - mn >= 10) {
        cout << "check again" << endl;
    } else {
        int w[3] = {x, y, z};
        sort(w, w + 3);
        cout << "final " << w[1] << endl;
    }
    
    return 0;
}