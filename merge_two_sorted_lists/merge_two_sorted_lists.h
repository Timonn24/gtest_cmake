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
    /*in-place merge */
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};