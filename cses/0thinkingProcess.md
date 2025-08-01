# Thinking Process for CSES problems.

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


# 5. Permutations (1070)

given input, crteate vector and store all its numbers before it and itself in another vector. 

some observations:

1. any no. < 4 will result in NO SOLUTION. 

2. Note that for `1` the ans will be `1`.

3. for any numbers higher, we can split even and odd. 

Exampple no. 5: `1, 3, 5, 2, 4` fufills it 

Example no. 6: `1, 3, 5, 2, 4, 6` also fulfils it. 

Since qn says `If there are several solutions, you may print any of them.` we will just go for the low hanging fruit of splitting into 2 😂 😂 😂 

Lookinmg back at theiur analysis page, the code can be optiusmied to not store the odd and ecen into vectors, can just print it out directlyt.


# 6 Number Spiral (1071)

This is a really interesting and good question. Stumped me for a bit. 

I notice some patterns, being:

1. at the top row x, for the odd no. it is squared. eg $1^2=1$, $3^2=9$, $5^2=25$ ... Similarly, for rows going down y, the even no. is squared. eg $2^2=4$, $4^2=16$, $6^2=36$ ...

2. for the coordinates of same number, eg, (2, 2), (3, 3) etc, the number will be (x^2 - (x-1)). eg (2,2) --> $2^2-(2-1) = 4 - 1 = 3.$ ANother example (3, 3) --> $3^2 - (3-1) = 9 - 2 = 7$ 

3. For the edges: if y is even, spiral goes down, if odd, goes right.

4. For the dges: if x is even, spiral goes down, if odd, goes right. 

so given this:

| | row 1 | row 2 | row 3 | row 4 | row 5 |
|---|---|---|---|---|---|
| column 1 | 1 | 2 | 9 | 10 | 25 |
| column 2 |  4 | 3 | 8 | 11 | 24 |
| column 3 |  5 | 6 | 7 | 12 | 23 |
| column 4 |  16 | 15 | 14 | 13 | 22 |
| column 5 |  17 | 18 | 19 | 20 | 21 |

if column > row, eg (y, x) = (5, 2) = 18

we know the edge of the square is 5^2 - (5-1) = 25 - 4 = 21. 

21 - (5-2) = 21 - 3 = 18. (shown)

another example. column < row, eg (y, x) = (1, 5) = 25

we know the edge is 5^2 - (5-1) = 25 - 4 = 21. 

21 + (5-1) = 21 + 4 = 25. (shown)

Some mistakles made:

```cpp
for (int i = 0; i < n; ++i) {
        cin >> y >> x;

        if (y == x) {
            cout << y * y - (y - 1) << endl;
        } else if ( y > x) {
            cout << (y * y) - (x - 1) << endl;
        } else {
            cout << ((x - 1) * (x - 1)) + y << endl;
        }
    }
```

This assumed the direction is fixed. we need to check the direction the spiral is moving. 

if y > x --> vertical edge. 

where y is even: spiral goes down.  max value is at (y, 1). You move left to right across bottom row. Formula: $y^2 - x + 1$

where y is odd: spiral goes right. max value is at (y, y). You move left to right across top row. Formula: $(y - 1)^2 + x$

if x > y --> horizontal edge.

where x is even: spiral goes down. max value is at (1, x). You move top to bottom along column. Formula: $(x - 1)^2 + y$

where x is odd: spiral goes right. max value is at (x, x). You move bottom to top along column. Formula: $x^2 - y + 1$

And also we can just use while (n--) because we are repeating it n times till finish. can apply this for other questions also.  