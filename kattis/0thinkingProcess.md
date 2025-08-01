# Thinking Process for Kattis

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!


# 1. Basketball One-on-One

read input as 2 parts - A/B and 1/2. 

count score of A and B. 

if A < 10 ||  B < 10
    
    cout the person of the max

else if A > 10 && B > 10

    A - B > 1 || B - A > 1

    cout the person of tjhe max


However there is a even shorter way of doing it on USACO guide website

```cpp
#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	cout << s[s.size() - 2];
}
```

Realise that when the game ends, it ends on the last person. So we can just print the last person instead lmao. 
