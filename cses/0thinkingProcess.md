# Thinking Process for Codeforces.

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!


# 1. Weird Algorithm (1068)

if n=1 print 1.

else begin this loop:

if n% 2 = 0, print n/2. print new n. repeat from start of loop

if n%2 != 0, ie odd, then n * 3 + 1, print n * 3 + 1. print new n. repeat from start of loop


# 2. Missing Number (1083)

this mightj be very slow:

input n. create and store list of number in vector list.

then match the we sort second input with the vector list to find odd number.

a better way is to use find sum of all the number and subtract off the sum of provided list to find the missing number:

$$
expected\_sum = {n(n+1)}/2 
$$


input n then find total sum s

start a loop, for i < n-1, we take in number input x, and we subtratct that from sum s. when all is finished, we will be left with subtratcedt ans which is missing number. we use n-1 for this beavuse we need to find that one missingf number.


# 3. Repetitions (1069)

we have 2 things to kepe note of - current length and maximum lenght. both are set to 1, as a single str can also be the highest.

start from 1, loop thorugh the length of the str with `.length()`

if current matches the one before, current length ++. 

we cmpare current length with max length, and we set max length the higher of the 2.

else if current does not match previous, we set current length = 1.

we take the higher of currentLen and maxLen so as to not accidentally erase the highest maxLen.

Do not use `maxLen = currentLen;` as This overwrites maxLen every time even if currentLen got smaller.


# 4. Increasing Array(1094)

input n, create vector s to store the value as we need to change it later. 

x = 0 where x is moves required

for i in num, compare current with previous.

if s[i] < s[i-1], then x += s[i-1] - s[i]. change s[i] to s[i-1] as qn do not need it to be larger; it can be same no. 

loop through all till end

note: need to store array values inside vectors since it is resizable; int is not resizable. In comparison to 3.Repeitions you do not need to modify the array, so do not need to use vectors.