/*
Problem: https://leetcode.com/problems/two-sum/
Two Sum

Difficulty: EASY

Concepts: https://leetcode.com/problems/two-sum/discuss/737092/Sum-MegaPost-Python3-Solution-with-a-detailed-explanation
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m = unordered_map<int, int>();
        for(int i=0; i<nums.size(); i++) {
            int remaining = target - nums[i];
            if(m.find(remaining) != m.end()) {
                v.push_back(i);
                v.push_back(m[remaining]);
                break;
            }else {
                m[nums[i]] = i;
            }
        }
        return v;
    }
};