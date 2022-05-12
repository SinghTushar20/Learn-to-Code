/*
Problem: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
Move all negative elements to end

Difficulty: Easy

Concepts: Auxillary Array/Vector
https://www.geeksforgeeks.org/move-ve-elements-end-order-extra-space-allowed/

A better question:
https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers/
https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/
https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
*/

#include <bits/stdc++.h>
using namespace std;

void segregateElements(int a[], int n)
{
    vector<int> p;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            p.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    int i;
    for (i = 0; i < p.size(); i++)
    {
        a[i] = p[i];
    }
    for (int k = 0; k < neg.size(); k++)
    {
        a[i + k] = neg[k];
    }
}