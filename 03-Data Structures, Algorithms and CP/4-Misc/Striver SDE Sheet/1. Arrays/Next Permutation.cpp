/*
Problem: https://leetcode.com/problems/next-permutation/
Next Permutation

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/next-permutation/discuss/13994/Readable-code-without-confusing-ij-and-with-explanation

1. Start from its last element, traverse backward to find the first one with index i that satisfy num[i-1] < num[i]. So, elements from num[i] to num[n-1] is reversely sorted.
2. To find the next permutation, we have to swap some numbers at different positions, to minimize the increased amount, we have to make the highest changed position as high as possible. Notice that index larger than or equal to i is not possible as num[i,n-1] is reversely sorted. So, we want to increase the number at index i-1, clearly, swap it with the smallest number between num[i,n-1] that is larger than num[i-1]. For example, original number is 121543321, we want to swap the '1' at position 2 with '2' at position 7.
3. The last step is to make the remaining higher position part as small as possible, we just have to reversely sort the num[i,n-1]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-2; i>=0; i--) {
            int max = INT_MAX;
            int maxI = -1;
            bool done = false;
            for(int j=i+1; j<nums.size(); j++) {
                if((nums[j] > nums[i]) && (nums[j] < max)) {
                    max = nums[j];
                    maxI = j;
                    done = true;
                }
            }
            if(done) {
                int temp = nums[i];
                nums[i] = nums[maxI];
                nums[maxI] = temp;
                sort((nums.begin()+i+1), nums.end());
                return;
            }
        }
        sort(nums.begin(), nums.end());
        return;
    }
};