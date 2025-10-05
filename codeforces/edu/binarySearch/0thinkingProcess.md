# Step 1


## A Binary Search (iterative)

    n = length of the array 
    k =  the number of queries

    l = left
    r = right
    m = (l + r) /2 (middle)

take half. if a[m] (aka the current half) = x, then return true. else if a[m] < x, we discard the left section and let l become m+1. so we only have the right block in which it is > m. keep doing until segment is empty. 

for exact binary search, the search always stops when either:

    You find the target x, or
    The interval becomes empty (l > r).

Steps to take:

1. create a vector `a` of n. 
2. loop through n to take in input to store into vector `a`
3. loop through for less than k, we pass in query x. 


## element closest to a target

For closest element, we should put a neg infinity and a pos infinity as position -1 and n respectively. neg infinity will be the l and pos infinity will be the r. 

Explnation:
If x is smaller than all elements: Without l = -1, the algorithm would have no “left boundary” and might fail to correctly return 0 (or “no element ≤ x”). With l = -1, after the loop, l stays -1 → (l+1) = 0, which is exactly what the problem wants.

like the exact binary search, we will create the m. if a[m] < x, we can move the l to position m. l = m. else r = m. 

the part that differs is that it will end up with a l and r that is beside one another. eg closest to 27 (x). l = 26, r = 29. note that the l <= x, and the r >= x. 

for closest element that is >= x:

    while r > l+1.
    a[l] < x
    a[r] >= x
    return r+1

for closest element that is <= x:

    while r > l + 1
    a[l] <= x
    a[r] > x
    return l+1


## B Closest to the Left

    n = length of the array 
    k =  the number of queries

    l = left
    r = right
    m = (l + r) /2 (middle)

we return l+1 because remmeber we are using l = -1 index for neg infinity. 

## C Closest to the Right

    n = length of the array 
    k =  the number of queries

    l = left
    r = right
    m = (l + r) /2 (middle)

we return r+1 because remmeber we are using r = n for pos infinity. 


## D. Fast search

first, we sort the array accendingly. then we use binary sort to find pos of l and r which is given. so in this case, we have 2 'x's equivalenet. then we minus off their index to find total number of numbers.