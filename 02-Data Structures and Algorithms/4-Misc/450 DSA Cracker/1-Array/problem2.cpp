/*  
Problem: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
Find minimum and maximum element in an array 

Difficulty: BASIC


A better question: Maximum and minimum of an array using minimum number of comparisons
https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


pair<ll, ll> getMinMax(ll a[], int n) {
    pair<int, int> p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    
    for(ll i = 0; i<n; i++) {
        
        if(a[i] < p.first) {
            p.first = a[i];
        }
        if(a[i] > p.second) {
            p.second = a[i];
        }
        
    }
    
    return p;
}

int main() {
    #ifdef ONLINE_JUDGE
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        ll* a = new ll[n];
        for(int i=0; i<n; i++) cin>>a[i];

        pair<ll, ll> p = getMinMax(a, n); 

        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}