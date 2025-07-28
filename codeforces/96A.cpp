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
    
    string n; cin >> n;
    int s = 1;

    for (int i = 1; i < n.size(); ++i) {
        if (n[i] == n[i - 1]) {
            s++;
            if (s >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            s = 1;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}