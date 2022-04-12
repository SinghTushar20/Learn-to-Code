/*
Problem: https://codeforces.com/problemset/problem/282/A
A. Bit++
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
 
    vector<string> v;
    for(int i=0; i<n; i++) {
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    int x = 0;
    for(string s:v) {
        if(s[0] == '+' || s[1] == '+') {
            ++x;
        }else {
            --x;
        }
    }
    cout<<x;
    return 0;
}