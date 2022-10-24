/*
Problem: https://leetcode.com/problems/fibonacci-number/
Climbing Stairs

Difficulty: EASY

Concepts: https://leetcode.com/problems/climbing-stairs/discuss/1792723/Python-or-In-Depth-Walkthrough-%2B-Explanation-or-DP-Top-Down-%2B-Bottom-Up
*/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        static unordered_map<int, int> m  = unordered_map<int, int>();
        if(m.find(n) != m.end()) {
            return m[n];
        }
        if(n == 1 || n == 2) {
            m[n] = n;
            return m[n];
        }
        int w1 = climbStairs(n-1);
        m[n-1] = w1;
        int w2 = climbStairs(n-2);
        m[n-2] = w2;
        return m[n-1] + m[n-2];
    }
};