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
        
        vi a(n);
        unordered_map<int, int> c;

        for (int &x : a) cin >> x, ++c[x];  

        int d = 0;
        for (auto &p : c) {
            int x = p.first;
            int y = p.second;

            if (y < x) d += y;
            else d += (y-x);
        }

        cout << d << endl;       

    }
    
    
    return 0;
}