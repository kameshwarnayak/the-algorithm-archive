/*
 * File:        linear_search.c
 *
 * Description:  This file contains the implementation of a linear search algorithm
 *               in C, showcasing a simple and straightforward approach to searching
 *               for a target element in an array.
 *
 * Author:      Kameshwar Nayak
 * Affiliation: Panorbit
 *
 * Date:        January 23, 2024
 *
 * Copyright (c) [2024] Kameshwar Nayak
 *
 * License:     GNU General Public License v3.0
 *              (See accompanying LICENSE file or visit
 *               https://www.gnu.org/licenses/gpl-3.0.html)
 */
 
#include <stdio.h>

/*
 * Linear Search Algorithm: 
 *     Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]
 *         1. Set i to 0.
 *         2. If Li = T, the search terminates successfully; return i.
 *         3. Increase i by 1.
 *         4. If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.
 *
 * Time Complexity:
 *     Worst-case performance:	     O(n)
 *     Best-case performance:	     O(1)
 *     Average performance:	         O(n)
 */

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 12, 6, 55, 2, 44, 87, 100 };
    int target = 1;
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, length, target);
    (result == -1) ? \
        printf("Target %d not present in the array\n", target) : \
        printf("Target %d present in position %d\n", target, result + 1);

    return 0;
}