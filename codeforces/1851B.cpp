#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef pair<int, int> pii;


bool is_sortable (const vi &a) {
    vi sorted_a = a;
    sort(all(sorted_a));

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % 2 != sorted_a[i] % 2) {
            return false;
        }          
    }
    return true;

}


int32_t main() {
    fastio;
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << (is_sortable(a) ? "YES" : "NO") << endl;
    }
    
    return 0;
}