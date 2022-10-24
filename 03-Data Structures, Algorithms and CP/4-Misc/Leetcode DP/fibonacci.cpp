/*
Problem: https://leetcode.com/problems/fibonacci-number/
Fibonacci Number

Difficulty: EASY

Concepts: https://leetcode.com/problems/fibonacci-number/discuss/1159786/Fibonacci-Number-or-Easy-Solution-w-Multiple-Approaches-Explained-!
*/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int fib(int n) {
        static unordered_map<int, int> m = unordered_map<int, int>();
        if(m.find(n) != m.end()) {
            return m[n];
        }
        
        if(n == 1 || n == 0) {
            m[n] = n;
            return m[n];
        }
        m[n] = fib(n-1) + fib(n-2);
        return m[n];
    }
};