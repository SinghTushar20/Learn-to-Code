/*
Problem: https://codeforces.com/contest/514/problem/A
A. Chewbaсca and Number
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++) {
        if(i == 0) {
            if(('9' - s[i]) < (s[i] - '0')  && ('9' - s[i]) != 0) {
                cout<<('9' - s[i]);
            }
            else
            cout<<s[i];
        }
        else {
            if(('9' - s[i]) < (s[i] - '0')) {
                cout<<('9' - s[i]);
            }
            else
            cout<<s[i];
        }
        
    }
    return 0;
}