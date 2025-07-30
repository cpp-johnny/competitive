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

    int n, k, s = 0;
    cin >> n >> k;
    vi x(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        if (x[i] > 0 && x[i] >= x[k - 1]) {
            ++s;
        }
    }

    cout << s << endl;
    
    return 0;
}