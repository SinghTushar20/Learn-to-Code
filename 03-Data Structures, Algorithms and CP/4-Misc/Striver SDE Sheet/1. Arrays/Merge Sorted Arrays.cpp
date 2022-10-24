/*
Problem: https://leetcode.com/problems/merge-sorted-array/
Merge Sorted Array

Difficulty: EASY

Concepts: https://leetcode.com/problems/merge-sorted-array/discuss/2120234/Visual-Explanation-or-O(1)-Space-JAVA
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size();

        while(m && n && i) {
            i--;
            m--;
            n--;
            if(nums1[m] >= nums2[n]) {
                nums1[i] = nums1[m];  
                n++;
            }else{  
                nums1[i] = nums2[n]; 
                m++;
            }   
        }
        while(n && i) {
            i--;
            n--;
            nums1[i] = nums2[n];
        }
        while(m && i) {
            i--;
            m--;
            nums1[i] = nums1[m];
        }
    }
};