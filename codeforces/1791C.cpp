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
        int x; cin >> x;
        string s; cin >> s;

        int left = 0, right = s.size() - 1;

        while (left < right && s[left] != s[right]) {
            ++left;
            --right;
        }

        cout << (right - left + 1) << endl;

    }
    
    return 0;
}