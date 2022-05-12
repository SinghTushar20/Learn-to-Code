/*
Problem: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
Sort an array of 0s, 1s and 2s without using any sorting algorithms

Difficulty: Easy

Concepts: 2 pointer method
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

A better question: 
http://www.csse.monash.edu.au/~lloyd/tildeAlgDS/Sort/Flag/
*/

#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int i = -1, j = n;
    for (int k = 0; k < n; k++)
    {
        if (a[k] == 0)
        {
            i++;
        }
        else if (a[k] == 2)
        {
            j--;
        }
    }

    for (int k = 0; k <= i; k++)
    {
        a[k] = 0;
    }

    for (int k = i + 1; k < j; k++)
    {
        a[k] = 1;
    }

    for (int k = j; k < n; k++)
    {
        a[k] = 2;
    }
}
