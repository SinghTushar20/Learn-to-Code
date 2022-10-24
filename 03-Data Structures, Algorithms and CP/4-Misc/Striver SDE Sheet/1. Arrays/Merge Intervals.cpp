/*
Problem: https://leetcode.com/problems/merge-intervals/
Merge Intervals

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/merge-intervals/discuss/1644409/C%2B%2BPython-Simple-Solutions-w-Explanation-or-Sort-Merge-O(NlogN)-%2B-Count-Sort-O(N-%2B-R)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<n; i++) {
            vector<int> t1 = intervals[i];
            int minN = t1[0], maxN = t1[1];
            int j;
            for(j=i; j<n; j++) {
                if(maxN >= intervals[j][0]) {
                    maxN = max(intervals[j][1], maxN);
                    minN = min(intervals[j][0], minN);
                }else {
                    break;
                }
            }
            t1[0] = minN;
            t1[1] = maxN;
            ans.push_back(t1);
            i = j-1;
        }
        return ans;
    }
};