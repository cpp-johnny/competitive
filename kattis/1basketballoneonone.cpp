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

    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < s.size(); i += 2) {
        char player = s[i];
        int points = s[i + 1] - '0';

        if (player == 'A') scoreA += points;
        else scoreB += points;

        if ((scoreA >= 11 || scoreB >= 11) && abs(scoreA - scoreB) >= 2) {
            cout << (scoreA > scoreB ? "A" : "B") << endl;
            return 0;
        }
    }

    return 0;
}
