/*
Problem: https://leetcode.com/problems/reordered-power-of-2/
Reordered Power of 2

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/reordered-power-of-2/discuss/1120216/Reordered-Power-of-2-or-Short-and-Easy-w-Explanation-or-Beats-100
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<vector<int>> v(31, vector<int>(10, 0));
        for(int i=0; i<31; i++) {
            int temp = pow(2, i);
            while(temp) {
                v[i][temp%10]++;
                temp /= 10;
            }
        }
        
        vector<int> d(10, 0);
        while(n) {
            d[n%10]++;
            n /= 10;
        }
        
        for(auto temp: v) {
            bool match = false;
            for(int i=0; i<temp.size(); i++) {
                if(temp[i] != d[i]) {
                    match = false;
                    break;
                }else {
                    match = true;
                }
            }
            
            if(match) {
                return true;
            }
        }
        
        return false;
    }
};