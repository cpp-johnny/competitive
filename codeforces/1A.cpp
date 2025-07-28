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
    
    int n, m, a;  cin >> n >>  m >> a;
    int l1 = n/a + (n % a != 0);
    int b1 = m/a + (m % a != 0);
    cout << l1 * b1 << endl;
    
    return 0;
}