/*
Problem: https://leetcode.com/problems/rotate-image/
Rotate Image

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/rotate-image/discuss/1175496/JS-Python-Java-C%2B%2B-or-Easy-4-Way-Swap-Solution-w-Explanation

All rotations are composite reflections (in fact, all transformations are composite reflections); in this case, a reflection across the vertical line of symmetry, then a reflection across the diagonal. If you recall this fact, this method will allow you to swap in-place rather than having to endure the tedium of multiplying by a rotation matrix.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        int i=0, j=n-1;
        while(i<j) {
            for(int k=0; k<n; k++) {
                int temp = a[i][k];
                a[i][k] = a[j][k];
                a[j][k] = temp;
            }
            i++;
            j--;
        }
        for(i=0; i<n; i++) {
            for(j=0; j<i; j++) {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
};