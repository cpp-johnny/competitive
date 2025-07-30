# Thinking Process for Codeforces.

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!

# 4A Watermelon (800)

if %2 = 0 --> YES, else NO.

exception: 2 --> NO since 2/2 = 1 odd.

# 71A Strings (800)

.length() > 10 --> too long

input n, for each in n, use .lenght to find. if length <= 12, then we cout word. else:

cout << x[0] + x.length() + x.back()    // note that c++ dont accept x[:-1]


# 1A Theatre Square (1000)

m = lenght, n = breath.

least square l1 for lenght = m/a and round up

least squarte b1 for brteath = n/a and round up

least suqwares = l1 * b1

# 96A Football (900)

string s = 0. for n < size(), if (s[i] == s[i - 1]) , then s++; and if s >= 7, output "YES". and returns 0 (exit program)

default condition is "NO"


# 231A Team (800)

n = number of problems

s = able to b esolved

we create p, v, t. accept inpiut and store thjem into tjheir own array.  then we do for i in range n, if p[i] + v[i] + t[i] >= 1, ++s. loop through until end. 

at first i was thinking given this, then trasnpose 90 degree. split and store into p, v, t own array. then we do for i in range n, if p[i] + v[i] + t[i] >= 1, ++s. loop through until end. but then i realiose you can alrdy seperate the input into 3 since there is alrdy spaces lol.

# 282A Bit++ (800)

x = 0

if in string found `+`, then ++x. else --x. 

use `string::npos` which is a not found indicator. if `+` is not `not found` then it is foi=und. 


# 50A Domino piling (800)

m * n / 2


# 617A Elephant (800)

input n 

x = 0;

if n % 5 != 0, x = n/5 + 1, print x

else print n / 5



# 158A Next Round (800)

n score, kth posiiton. create vector of score x. s is score

for i in range n, compare if x[i] > x[k-1] since k starts from 0. if x[i] > x[k-1], then ++s. ensure x > 0 also. 