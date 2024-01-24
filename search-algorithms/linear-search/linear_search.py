##########
# File:        linear_search.py
#
# Description:  This file contains the implementation of a linear search algorithm
#               in Python, showcasing a simple and straightforward approach to searching
#               for a target element in an array.
#
# Author:      Kameshwar Nayak
# Affiliation: Panorbit
#
# Date:        January 23, 2024
#
# Copyright (c) [2024] Kameshwar Nayak
#
# License:     GNU General Public License v3.0
#              (See accompanying LICENSE file or visit
#               https://www.gnu.org/licenses/gpl-3.0.html)
##########
 
##########
# Linear Search Algorithm: 
#     Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]
#         1. Set i to 0.
#         2. If Li = T, the search terminates successfully; return i.
#         3. Increase i by 1.
#         4. If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.
#
# Time Complexity:
#     Worst-case performance:        O(n)
#     Best-case performance:         O(1)
#     Average performance:           O(n)
#
##########

def search(arr, target):
    for i in range(0, len(arr)):
        if (arr[i] == target):
            return i
    return -1

arr = [12, 6, 55, 2, 44, 87, 100]
target = 100

result = search(arr, target)

if result == -1:
    print(f'Target {target} not present in the array')
else:
    print(f'Target {target} present in position {result + 1}')
