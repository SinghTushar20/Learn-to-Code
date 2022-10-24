/*
Problem: https://leetcode.com/problems/ransom-note/
Ransom Note

Difficulty: EASY

Concepts: https://leetcode.com/problems/ransom-note/discuss/2476543/C%2B%2B-PYTHON-JAVA-EASY-AND-FAST
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m = unordered_map<char, int>();
        
        for(auto i:magazine) {
            m[i]++;
        }
        
        for(auto i:ransomNote) {
            if(m[i] <= 0) {
                return false;
            }
            m[i]--;
        }
        
        return true;
    }
};