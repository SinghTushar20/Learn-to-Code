#include <bits/stdc++.h>
using namespace std;

int calculate(int ** a, int i, int j, vector<pair<int, int>> visited, int r, int c, int res = 0) {
    static int m = 0;
    for(auto p:visited) {
        if(i == p.first && j == p.second){
            return 0;
        }
    }
    pair<int, int> p;
    p.first = i;
    p.second = j;
    visited.push_back(p);
    if(i >= r || i < 0 || j >= c || j < 0 || a[i][j] == 0) {
        if(res > m) {
            m = res;
        }
        return 0;
    }
    if(a[i][j] == 1) res++;
    calculate(a, i, j+1, visited, r, c, res);
    calculate(a, i+1, j+1, visited, r, c, res);
    calculate(a, i+1, j, visited, r, c, res);
    calculate(a, i+1, j-1, visited, r, c, res);
    calculate(a, i, j-1, visited, r, c, res);
    calculate(a, i-1, j-1, visited, r, c, res);
    calculate(a, i-1, j, visited, r, c, res);
    calculate(a, i-1, j+1, visited, r, c, res);
    
    return m;   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>n>>m;
    int** a = new int*[n];
    for(int i=0; i<n; i++) {
        a[i] = new int[m];
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int ma = INT_MIN;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            vector<pair<int, int>> v;
            // cout<<i<<" hello "<<j<<endl;
            ma = max(ma, calculate(a, i, j, v, n, m));
            // cout<<calculate(a, i, j, v);
        }
    }
    cout<<ma;
    return 0;
}