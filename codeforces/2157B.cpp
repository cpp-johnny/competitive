#include <bits/stdc++.h>
using namespace std;

void solve(){
	int N, X, Y; cin >> N >> X >> Y;
	string S; cin >> S;
	X = abs(X);	
    Y = abs(Y);
	int n4 = 0;	
    int n8 = 0;
	for(char c : S){
		if(c == '4') ++n4;
		if(c == '8') ++n8;
	}
	cout << ((max(X, Y) <= (n4 + n8) && (X+Y) <= (n4 + 2*n8)) ? "YES" : "NO") << '\n';
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
