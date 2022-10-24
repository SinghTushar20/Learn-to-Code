/*
Problem: https://leetcode.com/problems/find-the-duplicate-number/
Find the Duplicate Number

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/find-the-duplicate-number/discuss/1892921/Java-9-Approaches-Count-%2B-Hash-%2B-Sort-%2B-Binary-Search-%2B-Bit-%2B-Fast-Slow-Pointers

Can you solve the problem in linear runtime complexity?
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == nums[i+1]) {
                return nums[i];
            }
        }
        return nums[0];
    }
};