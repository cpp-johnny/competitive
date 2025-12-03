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
        if (n % 2 != 0) {
            cout << 0 << endl;
        } else {
            int m = n / 2;
            cout << m / 2 + 1 << endl;
        }
    }    
    
    return 0;
}