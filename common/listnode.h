#pragma once

#include <initializer_list>


struct ListNode
{
    int val = 0;
    ListNode *next = nullptr;

    ListNode() = default;
    explicit ListNode(int x) : val(x) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* create_list(std::initializer_list<int> lst);
bool compare_eq_lists(const ListNode *l1, const ListNode *l2);
void dispose(const ListNode *head);