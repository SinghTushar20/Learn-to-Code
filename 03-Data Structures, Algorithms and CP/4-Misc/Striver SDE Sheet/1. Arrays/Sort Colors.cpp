/*
Problem: https://leetcode.com/problems/sort-colors
Sort Colors

Difficulty: MEDIUM

Concepts: 2 Pointer technique (Beggers method)
https://leetcode.com/problems/sort-colors/discuss/26500/Four-different-solutions

Could you come up with a one-pass algorithm using only constant extra space?
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0, p2 = n;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) {
                p1++;
            }else if(nums[i] == 2) {
                p2--;
            }
        }
        for(int i=0; i<n; i++) {
            if(i<p1) {
                nums[i] = 0;
            }else if(i<p2){
                 nums[i] = 1;
            }else {
                nums[i] = 2;
            }
            
        }
       
    }
};