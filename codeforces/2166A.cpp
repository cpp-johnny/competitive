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
        string s; cin >> s;
        char l = s[n-1];
        int x  = 0; 
        for (char &c : s) if (c == l) ++x;
        cout << n - x << endl;
    }
       
    return 0;
}