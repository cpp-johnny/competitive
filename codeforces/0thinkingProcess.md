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


# 69A Young Physicist (1000)

takes x, y, z input and store them to x, y, z. 

at the end check if x, y, z are all 0. if yes --> yes, else no


# 466A Cheap Travel (1200)

interesting qn seemed ez at first.

1 stop --> a

m stops --> b

need to take n times

n, m, a, b

lets call no. of times for 1 stop as x
lets call no. of times for m stops as y

whatever permutation of x and m will add up to n. try to take max of m first, then use the remainder for x? 

1. x = n % m. 

2. y = n / m.

sum = y * b + x * a.

hwoeevre the test case 3 suggests that sometimes buyinh buddle may be the cheapest

so we can do for each test case - 1. all single 2. all bubnlde 3. mix. 

for 2 all bundle we can use trick to do ceil(n/m) * b

in int division, n/m is rounded down. so to simulate ceil(n / m) with integers, we do $$ceil(n/m) = {(n+m-1)}/m$$


# 110A Nearly Lucky Number (800)

read input as string, compare character 4 and 7 and others. count no. of 4 and 7. 

total = count4 + count7 

if total == 7 && (count7 != 0 || cout4 != 0), cout YES
else if total == 4 && (count7 != 0 || cout4 != 0), cout YES
else cout NO

# 479A Expression (1000)

since the qn says brute force i will try to list out all possible:

1. a + b*c
2. a*b + c
3. a * (b + c)
4. (a + b) * c
5. a * b * c
6. a + b + c


# 579A Counting Bacteria (1000)

first bitmask qn.

first convert all to binary. notice when they split, it is multiple of 2. So they can only exist as multiple of 2 and number 1. 

e.g. 13 = 8 + 4 + 1 --> 2^3 + 2^2  + 1

notice this is binary system. 

13 = 1101 --> 3 `1`s

So we can just count no. of 1s as the position of the 1s represent the power it is at. 

To do so we just decompose the number into its binary. 


# 339A Helpful Maths (800)

string s. create vector x where all the digits are at. for all character in s, add any non `+` into x, which are the numbers. then sort the numbers. then cout x and +. note this mistake --> dont just cout x, `+`. else will end up with 1+2+3+. so check if current index is size -1 which is last index, if it is wont cout the `+`. 


# 1791C Prepend and Append (800)

My first two pointer qn.

From what i understand, the beginning can be either 0s and 1s or nothing. Then either add 1 to left and 0 to right, or 0 to left and 1 to right, or nothing at all. 

1011011010 --> begin with 1011 left 101 right 010

101010  --> begin with nothing --> left 101 right 010


My approach weill be 

as long as left no. != right number, then ignore. when reach when left no. = right no. then we print length of remaining 
