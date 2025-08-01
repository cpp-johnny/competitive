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

    string s; cin >> s;

    vector<char> x;

    for (char c : s) {
        if (c != '+') {
            x.pb(c);
        }
    }

    sort(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++) {
        cout << x[i];
        if (i != x.size() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}