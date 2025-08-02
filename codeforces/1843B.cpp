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
        int m = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            m += abs(a[i]);
        }
        
        int s = 0;
        bool neg = false;

        for (int i = 0; i < n; ++i) {
            if (a[i] < 0) {
                if (!neg) {
                    ++s;
                    neg = true;
                } 
            } else if (a[i] > 0) {
                neg = false;                
            }
        }

        cout << m << " " << s << endl;
    }
    
    return 0;
}