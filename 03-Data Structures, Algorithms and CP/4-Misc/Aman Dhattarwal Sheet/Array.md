# Problem 1

**Statement**

- Given an array A of size N of integers. Your task is to find the sum of minimum and maximum elements in the array.

**Difficulty**

- EASY

**Follow up**

- Try to use minimum number of comparisions.

**Concepts**

1. Simple Linear Search

- Time Complexity: O(n)
- Auxiliary Space: O(1) as no extra space was needed.
- TTotal number of comparisons is 1 + 2(n-2) in the worst case (elements are sorted in descending order) and 1 + n – 2 in the best case (elements are sorted in ascending order).

1. Tournament Method (Algorithmic Paradigm: Divide and Conquer): Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

- Time Complexity: O(n)
- Auxiliary Space: O(log n) as the stack space will be filled for the maximum height of the tree formed during recursive calls same as a binary tree.
- The approach does 3n/2 -2 comparisons if n is a power of 2. And it does more than 3n/2 -2 comparisons if n is not a power of 2.

1. Compare in Pairs: If n is odd then initialize min and max as first element. If n is even then initialize min and max as minimum and maximum of the first two elements respectively. For rest of the elements, pick them in pairs and compare their maximum and minimum with max and min respectively.

- Time Complexity: O(n)
- Auxiliary Space: O(1) as no extra space was needed.
- If n is odd: 3*(n-1)/2 comparisions & if n is even: 1 + 3*(n-2)/2 comparisions.

**Conclusion**

- Second and third approaches make the equal number of comparisons when n is a power of 2.
- In general, method 3 seems to be the best.

# Problem 2

**Statement**

- Given an array (or string), the task is to reverse the array/string.

**Difficulty**

- EASY

- **Concepts**

1. Iterative way (2 Pointer Method)

- Time Complexity : O(n)
- Space Complexity: O(1)

1. Recursive Way: Swap arr[start] with arr[end] and recursively call reverse for rest of the array.

- Time Complexity : O(n)
- Space Complexity: O(n), for recursive space

1. Using Python List slicing (Pythonic way)

**Conclusion**

- We learned 2 pointer method and various ways to swap 2 elemnents like using auxilary variable, using arithematic operations only, using bitwise operator etc.

# Problem 3

**Statement**

- Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

**Difficulty**

- MEDIUM

**Follow up**

- If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

**Concepts**

[✅ [C++/Python] 7 Simple Solutions w/ Explanation | Brute-Force + DP + Kadane + Divide & Conquer
](https://leetcode.com/problems/maximum-subarray/discuss/1595195/C%2B%2BPython-7-Simple-Solutions-w-Explanation-or-Brute-Force-%2B-DP-%2B-Kadane-%2B-Divide-and-Conquer)

**Conclusion**

-
