/*
Problem: https://leetcode.com/problems/maximum-subarray/
Maximum Subarray

Difficulty: MEDIUM

Concepts: Kadane's Algorithm

https://leetcode.com/problems/maximum-subarray/discuss/1595195/C%2B%2BPython-7-Simple-Solutions-w-Explanation-or-Brute-Force-%2B-DP-%2B-Kadane-%2B-Divide-and-Conquer
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxL = a[0], maxG = a[0];
        int n= a.size();
        for(int i=1; i<n; i++) {
            maxL = max(a[i], a[i]+maxL);
            if(maxL > maxG) {
                maxG = maxL;
            }
        }
        return maxG;
    }
};