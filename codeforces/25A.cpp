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
    vi s(n);

    int odd= 0, even = 0;

    for (int i = 0; i < n; ++i) {
        cin >> s[i];

        if (s[i] % 2 != 0) {
            ++odd;
        } else {
            ++even;
        }
    }

    if (odd > even) {
        for (int i = 0; i < n; ++i) {
            if (s[i] % 2 == 0) {
                cout << i + 1 << " ";
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (s[i] % 2 != 0) {
                cout << i + 1 << " ";
                break;
            }
        }
    }

    return 0;
}