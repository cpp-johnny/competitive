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

    if (n >= 91) {
        cout << "A*" << endl;
    } else if (n >= 75) {
        cout << "A" << endl;
    } else if (n >= 64) {
        cout << "B" << endl;
    } else if (n >= 50) {
        cout << "C" << endl;
    } else if (n >= 35) {
        cout << "D" << endl;
    } else if (n >= 20) {
        cout << "E" << endl;
    } else {
        cout << "U" << endl;
    }
    return 0;
}