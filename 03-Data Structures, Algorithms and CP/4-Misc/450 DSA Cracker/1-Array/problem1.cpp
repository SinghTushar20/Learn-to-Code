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

void reverseList(vector<int>& v) {
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