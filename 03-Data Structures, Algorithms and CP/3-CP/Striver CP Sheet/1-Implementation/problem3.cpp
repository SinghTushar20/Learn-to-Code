/*
Problem: https://codeforces.com/problemset/problem/263/A
A. Beautiful Matrix
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    #ifdef ONLINE_JUDGE
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    vector<vector<int>> v;

    for (int i=0; i<5; i++) {
        vector<int> temp;
        for (int j=0; j<5; j++) {
            int t;
            cin>>t;
            if (t == 1) {
                cout<<abs(i - 2) + abs(j - 2);
            }
            temp.push_back(t);
        }
        v.push_back(temp);
    }
    
    return 0;
}