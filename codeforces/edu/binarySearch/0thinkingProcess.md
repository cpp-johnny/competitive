# Step 1


## A Binary Search (iterative)

    n = length of the array 
    k =  the number of queries

    l = left
    r = right
    m = (l + r) /2 (middle)

take half. if a[m] (aka the current half) = x, then return true. else if a[m] < x, we discard the left section and let l become m+1. so we only have the right block in which it is > m. keep doing until segment is empty. 

1. create a vector `a` of n. 
2. loop through n to take in input to store into vector `a`
3. loop through for less than k, we pass in query x. 
