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
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d) {
        cout << "YES" << endl;
        } else {
        cout << "NO" << endl;
    }
       
    }
    return 0;
}