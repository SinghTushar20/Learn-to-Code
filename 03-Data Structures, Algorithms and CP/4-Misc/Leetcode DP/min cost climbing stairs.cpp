/*
Problem: https://leetcode.com/problems/min-cost-climbing-stairs/
Min Cost Climbing Stairs

Difficulty: EASY

Concepts: https://leetcode.com/problems/min-cost-climbing-stairs/discuss/476388/4-ways-or-Step-by-step-from-Recursion-greater-top-down-DP-greater-bottom-up-DP-greater-fine-tuning
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int, int> m = unordered_map<int, int>();
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       
        if(n == 1 || n == 0) {
            m[n] = 0;
            return m[n];
        }
        
        if(m.find(n) != m.end()) {
            return m[n];
        }
        
        vector<int> vec1;
        copy(cost.begin() + 1, cost.end(), back_inserter(vec1));
        int cost1 = minCostClimbingStairs(vec1);
        vector<int> vec2;
        copy(cost.begin() + 2, cost.end(), back_inserter(vec2));
        int cost2 = minCostClimbingStairs(vec2);

        m[n] = min(cost1+cost[0], cost2+cost[1]);
        
        return m[n];
    }
};