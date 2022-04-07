/*
Problem: https://practice.geeksforgeeks.org/problems/reverse-an-array/0
Reverse an Array

Difficulty: BASIC

Concepts: 2 pointer method
https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

A better question: Reverse an array without using subtract sign ‘-‘ anywhere in the code
https://www.geeksforgeeks.org/reverse-array-without-using-subtract-sign-anywhere-code/
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
#ifdef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int i = 0, j = v.size() - 1;
        while (i <= j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }

        for (int i : v)
        {
            cout << i << " ";
        }
    }
    return 0;
}