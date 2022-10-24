> `Those who cannot remember the past are condemned to repeat it. — Dynamic Programming.`

# **Credits and Resources**

[Video Lesson on DP](https://www.youtube.com/watch?v=oBt53YbR9Kk, "Video Lesson on DP")

[Beginner's Guide to DP](https://leetcode.com/problems/min-cost-climbing-stairs/discuss/773865/A-Beginner's-Guide-on-DP-validation-and-How-to-come-up-with-a-Recursive-solution-Python-3, "Beginner's Guide to DP")

# **Basic Theory**

## **Using Memoization**

Uses a recursion

1. Make it work
   1. Visualize the problem as a tree
   2. Implement the tree using recursion
   3. Test it
2. Make it efficient
   1. Add a memo object
   2. Add a base base to return memo values
   3. Store return values into the memo

## **Using Tabulation**

Uses iteration

1. Visualize the problem as a table
2. Size the table based on inputs
3. Initialize the table with default values
4. Seed the trivial answer in the table
5. Iterate through the table
6. Fill further positions based on the current position

## **Dynamic programming vs Memoization vs Tabulation**

Dynamic programming is a technique for solving problems of recursive nature, iteratively and is applicable when the computations of the subproblems overlap.

- Dynamic programming is typically implemented using tabulation, but can also be implemented using memoization. So as you can see, neither one is a "subset" of the other.

A tabulation algorithm focuses on filling the entries of the cache, until the target value has been reached.

- When you solve a dynamic programming problem using tabulation you solve the problem **bottom up**, i.e., by solving all related sub-problems first, typically by filling up an n-dimensional table. Based on the results in the table, the solution to the "top" / original problem is then computed.

- A tabulation implementation is always iterative.

- If the original problem requires all subproblems to be solved, tabulation usually outperformes memoization by a constant factor. This is because tabulation has no overhead for recursion and can use a preallocated array rather than, say, a hash map.

  - There are some problems for which the regular pattern of table accesses in the dynamic-programming algorithm can be exploited to reduce the time or space requirements even further.

Memoization is a term describing an optimization technique where you cache previously computed results, and return the cached result when the same computation is needed again.

- If you use memoization to solve the problem you do it by maintaining a map of already solved sub problems. You do it "top down" in the sense that you solve the "top" problem first (which typically recurses down to solve the sub-problems).

- If only some of the subproblems need to be solved for the original problem to be solved, then memoization is preferrable since the subproblems are solved lazily, i.e. precisely the computations that are needed are carried out.

# **Complexity Analysis of sample problems**

### Grid Traveler

n: number of rows
m: number of columns

- Brute force
  - Time: `2^(n + m)`
  - Space: `n + m`
- Memoized
  - Time: `n * m`
  - Space: `n + m`
- Tabulation
  - Time: `n * m`
  - Space: `n * m`

### Can Sum

m: target sum (length)
n: number of array elements

- Brute force
  - Time: `n^m`
  - Space: `m`
- Memoized
  - Time: `n * m`
  - Space: `m`
- Tabulation
  - Time: `n * m`
  - Space: `m`

### How Sum

m: target sum
n: number of array elements

- Brute force
  - Time: `n^m * m`
  - Space: `m`
- Memoized
  - Time: `n * m^2`
  - Space: `m^2`
- Tabulation
  - Time: `n * m^2`
  - Space: `m^2`

### Best Sum

m: target sum
n: number of array elements

- Brute force
  - Time: `n^m * m`
  - Space: `m^2`
- Memoized
  - Time: `n * m^2`
  - Space: `m^2`

### Can Construct

m: target string length
n: number of array elements

- Brute force
  - Time: `n^m * m`
  - Space: `m^2`
- Memoized
  - Time: `n * m^2`
  - Space: `m^2`
- Tabulation
  - Time: `n * m^2`
  - Space: `m^2`

### Count Construct

m: target string length
n: number of array elements

- Brute force
  - Time: `n^m * m`
  - Space: `m^2`
- Memoized
  - Time: `n * m^2`
  - Space: `m^2`

### All Construct

m: target string length
n: number of array elements

- Brute force
  - Time: `n^m`
  - Space: `m`
- Memoized
  - Time: `n^m`
  - Space: `m`
- Table
  - Time: `n^m`
  - Space: `n^m`
