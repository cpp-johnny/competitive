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

    while (n--) {
        int y, x;
        cin >> y >> x;

        if (y >= x) {
            if (y % 2 == 0) {
                cout << y * y - x + 1 << endl;
            } else {
                cout << (y - 1) * (y - 1) + x << endl;
            }
        } else {
            if (x % 2 == 0) {
                cout << (x - 1) * (x - 1) + y << endl;
            } else {
                cout << x * x - y + 1 << endl;
            }
        }
    }
    
    return 0;
}