/*
Problem: https://leetcode.com/problems/n-th-tribonacci-number/
N-th Tribonacci Number

Difficulty: EASY

Concepts: https://leetcode.com/problems/n-th-tribonacci-number/discuss/1482728/C%2B%2BPython-2-solutions%3A-DP-Matrix-exponential-Picture-explained-Clean-and-Concise
*/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        static unordered_map<int, int> m = unordered_map<int, int>();
        if(m.find(n) != m.end()) {
            return m[n];
        }
        
        if(n == 1 || n == 0) {
            m[n] = n;
            return m[n];
        }
        if(n == 2) {
            m[n] = 1;
            return m[n];
        }
        m[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return m[n];
    }
};