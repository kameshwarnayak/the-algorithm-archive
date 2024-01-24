# Linear Search Algorithm
Linear search, also known as sequential search, is a straightforward algorithm for finding a target value within a collection of elements. It works by iteratively checking each element in the collection until the desired element is found or the entire collection has been traversed.

A linear search runs in at worst linear time and makes at most `n` comparisons, where n is the length of the list. If each element is equally likely to be searched, then linear search has an average case of 
`(n+1/2)` comparisons, but the average case can be affected if the search probabilities for each element vary.

### Algorithm
A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.

```
Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]

    1. Set i to 0.
    2. If Li = T, the search terminates successfully; return i.
    3. Increase i by 1.
    4. If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.
```

