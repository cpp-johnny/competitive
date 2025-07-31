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

    int n, m, a, b; 
    cin >> n >> m >> a >> b;

    int only_singles = n * a;
    int only_bundles = ((n + m - 1) / m) * b;  
    int mixed = (n / m) * b + (n % m) * a;

    int ans = min({only_singles, only_bundles, mixed});
    cout << ans << endl;
        
    return 0;
}