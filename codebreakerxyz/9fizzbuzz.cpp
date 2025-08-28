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

    int N, a, b; cin >> N >> a >> b;

    for (int i = 1; i <= N; ++i) {
        if (i % a == 0 && i % b == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % a == 0) {
            cout << "Fizz" << endl;
        } else if (i % b == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    
    return 0;
}