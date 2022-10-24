/*
Problem: https://leetcode.com/problems/set-matrix-zeroes/
Set Matrix Zeroes

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/set-matrix-zeroes/solution/
A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but the best solution is O(1) space complexity.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> idx;
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j] == 0) {
                    pair<int, int> temp;
                    temp.first = i;
                    temp.second = j;
                    idx.push_back(temp);
                }
            }
        }
        for(auto p: idx) {
            int r = p.first, c = p.second;
            for(int i=0; i<matrix[r].size(); i++) {
                matrix[r][i] = 0;
            }
            for(int j=0; j<matrix.size(); j++) {
                matrix[j][c] = 0;
            }
        }
    }
};