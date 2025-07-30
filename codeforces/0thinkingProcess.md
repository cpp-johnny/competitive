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


# 1999A A + B again? (800)

at first i read the qn wrongly to  some inputs can be non 2 digit like 8 as shown in the example input. i was thinking of like of how to determine the length of the input and was like while n > 9 then run the code until i read closely the first number is the number of inputs later on lmao.

The first idea to solve the problem is to use `.strip()` but i realisedf that c++ dont have.

so use % and / to get remainder and quotient to split since it will always be 2 digits. when you / you get the front digit since it rounds down and when you % you get the remainder which is the back digit. then can add them up and cout it. honestly too troll. 


# 25A IQ Test (1300)

this is an iq test indeed. my firtst 1300 qn but seems fine so far ig. 

My proposed solution is this:
if s % 2 != 0, ++odd, else ++even

if odd > even, 

    if s % 2 != 0: 

         cout s
         ++odd

else if even > odd,

    if s % 2 =- 0:

        cout s
        ++even


but this code outputs the numebr rather thann the index. 

to fix this can use a vector to store the numbers, and use to in range loops. 

remember to +1 to the i since qn says Numbers are numbered from 1 in the input order.

lol im sure there would be a even more efificent and fast way to solve it but i want to eat dinner now, and it kinda works 😝😝


## Optimised solution

Got curious and wanted to find out what's a betetr solution.

the new optimised solution is:

1. start looping from beginning, collecting `odd_count`, `even_count`, `odd_index` and `even_index`. The `odd_index` and `even_index` only updates the fist time each appears. 

2.After reading the first 3 elements, as soon as either `odd_count` or `even_count` hits 2, you know the majority.The other parity is the minority.

3. You continue the loop, but you're not updating the index of the majority anymore. You only wait until the first element of the minority appears (if it hasn’t already), and then update the corresponding index once.

4. From the last 2 if loops we can see that the moment the `odd/even_index` changed, we output the current index, which is the minority. 

This solution has time complexity of `O(n)` and space complexity of `O(1)`. The previous solution is `O(n)` for both. 