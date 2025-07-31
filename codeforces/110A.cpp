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

    string s; cin >> s;

    int count4 = 0, count7 = 0, countOther = 0;

    for (char c : s) {
        if (c == '4') count4++;
        else if (c == '7') count7++;
        else countOther++;
    }

    int total = count4 + count7;

    if (total == 7 && (count7 != 0 || count4 != 0)) {
        cout << "YES" << endl;
    } else if (total == 4 && (count4 != 0 || count7 != 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    return 0;
}