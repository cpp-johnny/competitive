#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;

    int n; cin >> n;
    int odd_count = 0, even_count = 0;
    int odd_index = -1, even_index = -1;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        if (x % 2 != 0) {
            ++odd_count;
            if (odd_index == -1) odd_index = i + 1;
        } else {
            ++even_count;
            if (even_index == -1) even_index = i + 1;
        }

        // Once one count hits 2, we can determine the minority
        if (odd_count > 1 && even_index != -1) {
            cout << even_index << endl;
            return 0;
        }
        if (even_count > 1 && odd_index != -1) {
            cout << odd_index << endl;
            return 0;
        }
    }

    return 0;
}
