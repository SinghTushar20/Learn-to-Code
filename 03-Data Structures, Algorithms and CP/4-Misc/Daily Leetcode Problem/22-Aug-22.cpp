/*
Problem: https://leetcode.com/problems/power-of-four/
Power of Four

Difficulty: EASY

Concepts: https://leetcode.com/problems/power-of-four/discuss/2461223/Python99No-more-loop-or-recursion-or-one-liner-with-detailed-explanation-and-different-approach
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {        
        if(n<=0) {
            return false;
        }
        if(n == 1) return true;

        if((n&(n-1)) == 0) {
            if((n%10 == 4) || (n%10 == 6)) {
                return true;
            }
        }
        return false;
    }
};