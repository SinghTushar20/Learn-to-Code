/*
Problem: https://leetcode.com/problems/palindrome-linked-list/
Palindrome Linked List

Difficulty: EASY

Concepts: <>

Could you do it in O(n) time and O(1) space?
*/
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s = "";
        while(head != nullptr) {
            string t(1, (head->val + 48));
            s += t;
            head = head->next;
        }
        int i=0, j=s.size()-1;
        while(i<=j) {
            if(s[i] != s[j]) return false;
            i++; 
            j--;
        }
        return true;
    }
};