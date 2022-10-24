/*
Problem: https://leetcode.com/problems/pascals-triangle/
Pascal's Triangle

Difficulty: EASY

Concepts: Reccursion
https://leetcode.com/problems/pascals-triangle/discuss/38128/Python-4-lines-short-solution-using-map.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) {
            vector<vector<int>> temp;
            vector<int> t;
            t.push_back(1);
            temp.push_back(t);
            return temp;
        }
        
        vector<vector<int>> prev = generate(numRows - 1);
        vector<int> result;
        result.push_back(1);
        for(int i=1; i<numRows-1; i++) {
            result.push_back(prev[prev.size() -1][i] + prev[prev.size() -1][i-1]);
        }
        result.push_back(1);
        prev.push_back(result);
        return prev;
    }
};