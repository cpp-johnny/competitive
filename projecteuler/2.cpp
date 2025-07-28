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
    int a = 2, b = 8;  
    int sum = a + b;

    while (true) {
        int c = 4 * b + a; 
        if (c >= 4000000) break;
        sum += c;
        a = b;
        b = c;
    }

    cout << sum << endl;
}
