#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef pair<int, int> pii;

int bsearch_l(const vi &a, int x) {
    int l = -1, r = a.size();
    while (r > l + 1) {
        int  m = (l + r) /2;
        if (a[m] <= x) l = m;
        else r = m;
    }
    return l;
}

int bsearch_r(const vi &a, int x) {
    int l = -1, r = a.size();
    while (r > l + 1) {
        int m = (l + r) /2;
        if (a[m] < x) l = m;
        else r = m;
    }
    return r;
}

int32_t main() {
    fastio;

    int n; cin >> n;
    vi a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(all(a));

    int k; cin >> k;

    while (k--) {
        int L, R; cin >> L >> R;

        int left = bsearch_l(a, L - 1);
        int right = bsearch_r(a, R + 1);

        cout << right - left - 1 << " ";
    }
    
    return 0;
}