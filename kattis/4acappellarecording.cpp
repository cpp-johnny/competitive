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
    
    int n, d;
    cin >> n >> d;
    
    vector<pii> pitch_index;
    for (int i = 0; i < n; i++) {
        int pitch;
        cin >> pitch;
        pitch_index.pb({pitch, i});
    }
    
    sort(all(pitch_index));
    
    vector<bool> recorded(n, false);
    int recordings = 0;
    
    for (int i = 0; i < n; i++) {
        if (recorded[pitch_index[i].second]) {
            continue;
        }
        
        ++recordings;
        int min_pitch = pitch_index[i].first;
        
        for (int j = i; j < n && pitch_index[j].first <= min_pitch + d; ++j) {
            recorded[pitch_index[j].second] = true;
        }
    }
    
    cout << recordings << endl;
    
    return 0;
}