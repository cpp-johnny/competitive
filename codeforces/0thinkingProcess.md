# 4A Watermelon

if %2 = 0 --> YES, else NO.

exception: 2 --> NO since 2/2 = 1 odd.

# 71A Strings

.length() > 10 --> too long

input n, for each in n, use .lenght to find. if length <= 12, then we cout word. else:

cout << x[0] + x.length() + x.back()    // note that c++ dont accept x[:-1]


# 1A Theatre Square

m = lenght, n = breath.

least square l1 for lenght = m/a and round up

least squarte b1 for brteath = n/a and round up

least suqwares = l1 * b1

# 96A Football

string s = 0. for n < size(), if (s[i] == s[i - 1]) , then s++; and if s >= 7, output "YES". and returns 0 (exit program)

default condition is "NO"


# 231A Team

n = number of problems

s = able to b esolved

we create p, v, t. accept inpiut and store thjem into tjheir own array.  then we do for i in range n, if p[i] + v[i] + t[i] >= 1, ++s. loop through until end. 

at first i was thinking given this, then trasnpose 90 degree. split and store into p, v, t own array. then we do for i in range n, if p[i] + v[i] + t[i] >= 1, ++s. loop through until end. but then i realiose you can alrdy seperate the input into 3 since there is alrdy spaces lol.