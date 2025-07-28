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

    int n, x;
    x = 0;
    cin >> n;

    if (n % 5 != 0) {
        x = n/5 + 1;
        cout << x << endl;
    } else {
        cout << n/5 << endl;
    }
    
    return 0;
}