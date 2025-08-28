# Thinking Process for codebreakerxyz.

The following is a short draft of my thinking process and planning when doing the questions. Questions are done in the following order. 

If you find any errors or would like to suggest more efficient/better solutions feel free to do a pull request!

The question numbers are sorted by #ACs based on the site. 

I will skip the workings for questiuons that are too easy. 


# 8. Lunch Box 

N to distriubute to m schools

ith ask for k_ith.

give either 0 or k

max schools

10 lunch, 4 school
3, 9, 4, 2
3 + 4 + 2 =  9 < 10 so 3. 

greedy appraoch --> save all into a list, sort smallesty to largest. add until exceed n. print size of list.


# 10. GCD

we can use Euclidean algorithm.

gcd(a, b) = gcd(b, a % b)

Eventually the remainder becomes 0, and the other number is the gcd. Keep reducing until b is zero. Replace b with the remainder of dividing a by b. Replace a with the old value of b. This is equivalent to swapping (a, b) → (b, a % b).


# 12. fibo

Subtask 2: Too Long Execption

just doing normal recursion is too slow. 

also the qn said `You will be asked to output fi for every i from 0 to N. As Fibonacci numbers can be very big, you must output them modulo 998244353.` bruh lmao was wondering why keep getting wrong answer. 

