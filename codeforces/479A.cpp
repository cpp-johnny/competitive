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

    int a , b, c; cin >> a >> b >> c;

    int result = max({
        a + b * c,
        a * b + c,
        a * (b + c),
        (a + b) * c,
        a * b * c,
        a + b + c
    });

    cout << result << endl;
    
    return 0;
}