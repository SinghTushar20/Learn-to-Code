/*
Problem: https://leetcode.com/problems/power-of-three/
Power of Three

Difficulty: EASY

Follow up: Could you solve it without loops/recursion?

Concepts: https://en.wikipedia.org/wiki/Power_of_three
https://leetcode.com/problems/power-of-three/solution/
https://leetcode.com/problems/power-of-three/discuss/1178701/Power-Of-Three-or-Loops-Recursive-Direct-Approach-or-Multiple-Solutions-Explained-w-Clean-Code

*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n <= 0) {
            return false;
        }
        
        while(n > 1) {
            if(n%3 != 0) {
                return false;
            }
            n /= 3;
        }
        
        return true;
        
    }
};