#pragma once

struct ListNode 
{
    int val = 0;
    ListNode *next = nullptr;

    ListNode() = default;
    explicit ListNode(int x) : val(x) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    /* in-place merge O(n) speed, O(n) space */
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);

    /* in-place merge O(n) speed, O(1) space */
    ListNode* mergeTwoLists2(ListNode* list1, ListNode* list2);
};