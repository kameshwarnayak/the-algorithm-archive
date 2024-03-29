/*
 * File:        sentinel_linear_search.js
 *
 * Description:  This file contains the implementation of a sentinel linear search algorithm
 *               in Javascript.
 *
 * Author:      Kameshwar Nayak
 * Affiliation: Panorbit
 *
 * Date:        January 31, 2024
 *
 * Copyright (c) [2024] Kameshwar Nayak
 *
 * License:     GNU General Public License v3.0
 *              (See accompanying LICENSE file or visit
 *               https://www.gnu.org/licenses/gpl-3.0.html)
 */

/*
 * Sentinel Linear Search Algorithm:
 *     Given a list L of n elements with values or records L0 .... Ln−1, and target value T, the following subroutine uses linear search to find the index of the target T in L.[3]
 *         1. Set i to 0.
 *         2. If Li = T, go to step 4.
 *         3. Increase i by 1 and go to step 2.
 *         4. If i < n, the search terminates successfully; return i. Else, the search terminates unsuccessfully.
 *
 * Time Complexity:
 *     Worst-case performance:	     O(n)
 *     Best-case performance:	     O(1)
 *     Average performance:          O(n)
 */

const search = (arr, target) => {
  let length = arr.length;
  let last = arr[length - 1];
  arr[length - 1] = target;
  let i = 0;
  while (arr[i] !== target) {
    i += 1;
  }
  if (last == target || i < length - 1) {
    return i;
  }
  return -1;
};

let arr = [12, 6, 55, 2, 44, 87, 100];
let target = 12;

const result = search(arr, target);

result === -1
  ? console.log(`Target ${target} not present in the array`)
  : console.log(`Target ${target} present in position ${result + 1}`);
