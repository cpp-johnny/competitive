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

    if (n == 1) {
        cout << "1" << endl;
    } else if (n < 4) {
        cout << "NO SOLUTION" << endl;
    } else {

        vi odd, even;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) even.push_back(i+1);
            else odd.push_back(i+1);
        }

        for (int x : odd) cout << x << " ";
        for (int x : even) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}