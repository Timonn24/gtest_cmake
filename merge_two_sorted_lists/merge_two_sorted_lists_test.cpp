#include "merge_two_sorted_lists.h"

#include <iostream>
#include <gtest\gtest.h>

TEST(MergeTwoSortedList, Example1)
{
	ListNode* l1 = new ListNode(1);
	l1->next = new ListNode(2);
	l1->next->next = new ListNode(4);
	
	ListNode* l2 = new ListNode(3);
	l2->next = new ListNode(5);
	l2->next->next = new ListNode(8);

	Solution sol;
	ListNode* result = sol.mergeTwoLists(l1, l2);
	for (; result; result = result->next)
		std::cout << result->val << " ";
}