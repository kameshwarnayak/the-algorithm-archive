# Sentinel Linear Search Algorithm
The basic [linear search](https://github.com/kameshwarnayak/the-algorithm-archive/tree/main/search-algorithms/linear-search) algorithm makes two comparisons per iteration: one to check if Li equals T, and the other to check if i still points to a valid index of the list. By adding an extra record Ln to the list (a sentinel value) that equals the target, the second comparison can be eliminated until the end of the search, making the algorithm faster. The search will reach the sentinel if the target is not contained within the list

A sentinel linear search runs in at worst linear time and makes at most `n` comparisons, where n is the length of the list. If each element is equally likely to be searched, then linear search has an average case of 
`(n+1)/2` comparisons, but the average case can be affected if the search probabilities for each element vary.

### Algorithm

```
Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]

    1. Set i to 0.
    2. If Li = T, go to step 4.
    3. Increase i by 1 and go to step 2.
    4. If i < n, the search terminates successfully; return i. Else, the search terminates unsuccessfully.
```

