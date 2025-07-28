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

