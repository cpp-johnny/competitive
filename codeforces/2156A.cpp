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
        int Hao = 0;
        while (n > 2) {
            int x = n / 3;
            Hao += x;   
            n = n/3 + n % 3;
        }
        cout << Hao << endl;
    }

    return 0;
}