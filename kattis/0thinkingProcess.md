# Thinking Process for Kattis

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!


# 1. Basketball One-on-One (1.4)

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


# 2. A Shortcut to What? (1.1)

(n + 5) * 3 - 10


# 3. A Terrible Fortress (1.2)

sum all together


# 4. A Cappella Recording (2.7)

this is the most cursed thing ive ever done wtf i spent 2.5h looking this up and trying to understand it wtf i might be stupid

n = no. of notes, d = +/-, p are the individual notes.

2nd digit is the acceptable +-

eg input 2 --> 1

3&4 are +- within one another. so count as 1. then 1 is duplicated,. also count as 1. Left 5, 9, so total 4.

approach --> sort largest to smallest, group into clusters where max-min < d.

duplicates are lumped together as one

1. create a vector pair with its pitch and its index. `.first()` is the pitch, `.second()` is its index.
2. sort them. `.first()` aka pitch will be smallest to largest. doesnt matter for repeated no. the index is the identifier. 
3. tag all of the index with false for recorded. 
4. repeat until n: start recoridng `++recording`. first pitch = `min_pitch`. for all numbers after this, so long as it is < `min_pitch + d` then we change the tag from false to true this for loop. notice we have `if (recorded[pitch_index[i].second]) { continue; }`. From the 2nd for loop we know that the tag is alrdy changed to `true`, so it will skip new recordings.
5. the moment a pitch > min+d, then it exits the 2nd for loop. then it creates new recording `++recorings` and the loop starts again. 

## Alternative solution

An alternative solution that is less cursed is this

1. Sort the pitches in ascending order.
2. Initialize a pointer `i = 0` and set `recordings = 0.`
3. While i < n:

    Begin a new recording → `++recordings`.

    Set `limit = pitches[i] + d` — this is the highest pitch this recording can include.

    Advance `i` while the current pitch is within the limit.
4. if number > limit then it breaks out of the 2nd while loop and heads straight back to `++recordings`.


