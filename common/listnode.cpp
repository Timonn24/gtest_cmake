#include "listnode.h"


ListNode *create_list(std::initializer_list<int> lst)
{
    if (!lst.size())
        return nullptr;

    ListNode *head{}, *next{};
    for (auto v : lst)
    {
        if (!head)
        {
            head = new ListNode(v);
            next = head;
        }
        else
        {
            next->next = new ListNode(v);
            next = next->next;
        }
    }
    return head;
}

bool compare_eq_lists(const ListNode *l1, const ListNode *l2)
{
    if ((l1 && !l2) || (!l1 && l2))
        return false;

    if (!l1 && !l2)
        return true;

    if (l1->val != l2->val)
        return false;

    return compare_eq_lists(l1->next, l2->next);
}

void dispose(const ListNode *head)
{
    ListNode *next{};
    for (; head;)
    {
        next = head->next;
        delete head;
        head = next;
    }
}