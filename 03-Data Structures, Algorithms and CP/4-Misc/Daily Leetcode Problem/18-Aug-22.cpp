/*
Problem: https://leetcode.com/problems/reduce-array-size-to-the-half/
Reduce Array Size to The Half

Difficulty: MEDIUM

Concepts: https://leetcode.com/problems/reduce-array-size-to-the-half/discuss/1319416/C%2B%2BJavaPython-HashMap-and-Sort-then-Counting-Sort-O(N)-Clean-and-Concise
*/
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,
         pair<int, int>& b){
    return a.second > b.second;
}

class Solution {
public:
    
    int minSetSize(vector<int>& arr) {
       map<int, int> m = map<int, int>();
        for(auto i:arr) {
            if(m.find(i) == m.end()) {
                m[i] = 1;
            }else {
                m[i]++;
            }
        }
        vector<pair<int, int>> mapcopy(m.begin(), m.end());
        sort(mapcopy.begin(), mapcopy.end(), cmp);
        
        int n = arr.size();
        int size = n;
        
        int c = 0;
        for(auto p: mapcopy) {
            c++;
            n -= p.second;
            if(n <= size/2) {
                
                break;
            }
        }
        return c;
    }
};