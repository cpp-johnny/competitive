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

    int n, m;
    cin >> n;

    while (n--) {
        cin >> m;
        string s = to_string(m);
        sort(all(s));
        s = s[0];
        int x = stoi(s);
        cout << x << endl;
    }
    
    return 0;
}