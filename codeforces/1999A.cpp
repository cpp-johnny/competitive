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

    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        int a = s % 10; 
        int b = s / 10; 
        int x = a + b;
        cout << x << endl;
    }
    
    return 0;
}