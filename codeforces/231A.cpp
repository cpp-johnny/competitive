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
    
    int n; cin >> n;
    int s = 0;

    for (int i = 0; i < n; ++i) {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            ++s;
        }
    }

    cout << s << endl;
    
    return 0;
}