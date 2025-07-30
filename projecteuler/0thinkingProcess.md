# Thinking Process for Project Euler.

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!


# 1. Multiples of 3 and 5

loop through from 1 to 1000, if number % 3 or %5 = 0, then add to sum. 


# 2. Even Fibonacci Numbers

one way i thinbk about solving this is: have a list of all fib number as x. then go through every elemtn to find even, and add. but this is quite slow. 

realise that every 3rd numebr is even.

1, 1, `2`, 3, 5, `8`, 13, 21, `34`, 66, 89, `144`...

F(3), F(6), F(9) ... is even.

so we can use this E(n) = 4 * E(n-1) + E(n-2)

E(1) = 2, E(2) = 8... 
