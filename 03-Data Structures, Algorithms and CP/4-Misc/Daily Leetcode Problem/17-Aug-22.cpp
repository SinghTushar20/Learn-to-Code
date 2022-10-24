/*
Problem: https://leetcode.com/problems/unique-morse-code-words/
Unique Morse Code Words

Difficulty: EASY

Concepts: Keeping unique numbers and HashArray for storing finite data, Hashmaps and Sets.
https://leetcode.com/problems/unique-morse-code-words/discuss/120805/Functional-JavaScript-or-map-reduce
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<char, string> m;
    Solution():m({
        {'a',".-"},{'b', "-..."},{'c', "-.-."},{'d', "-.."},{'e', "."},{'f', "..-."},{'g', "--."},{'h', "...."},{'i', ".."},{'j', ".---"},{'k', "-.-"},{'l', ".-.."},{'m', "--"},{'n', "-."}, {'o', "---"},{'p', ".--."},{'q', "--.-"},{'r', ".-."},{'s', "..."},{'t', "-"},{'u', "..-"},{'v', "...-"},{'w', ".--"},{'x', "-..-"},{'y', "-.--"},{'z', "--.."}
    }){}
    int uniqueMorseRepresentations(vector<string>& words) {
        
        int cnt = 0;
        set<string> s = set<string>();
        for(int i=0; i<words.size(); i++) {
            string temp = "";
            for(int j=0; j<words[i].length(); j++) {
                temp += m[words[i][j]];
            }
            if(s.find(temp) == s.end()) {
                cnt++;
                s.insert(temp);
            }
        }
        
        return cnt;
    }
};