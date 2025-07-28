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
    int maxLen = 1, currentLen = 1;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            currentLen++;
        } else {
            currentLen = 1;
        }
        maxLen = max(currentLen, maxLen);
    }
    cout << maxLen << endl;
    return 0;
}