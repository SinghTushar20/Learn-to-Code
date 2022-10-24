/*
Problems: 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Best time to buy and sell stocks all versions

Difficulty: EASY-MEDIUM

Concepts: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/900050/Fully-explained-all-buy-and-sell-problems-C%2B%2B-oror-Recursive-oror-Memoization-oror-Minor-difference

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/39038/Kadane's-Algorithm-Since-no-one-has-mentioned-about-this-so-far-%3A)-(In-case-if-interviewer-twists-the-input)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit1(vector<int>& prices) {
        int idx = 0, max =0, n = prices.size();
       for(int i=1; i<n; i++) {
           if(prices[i] < prices[idx]) {
               idx = i;
           }else {
               int temp = prices[i] - prices[idx];
               if(temp > max) {
                   max = temp;
               }
           }
       }
        return max;
        
    }

    int maxProfit2(vector<int>& prices) {
        int max = 0;
        for(int i=0; i<prices.size()-1; i++) {
            if(prices[i] < prices[i+1]) {
                max += prices[i+1] - prices[i];
            }
        }
        
        return max;
    }
};