#include "merge_two_sorted_lists.h"

#include <initializer_list>

#include <gtest/gtest.h>


ListNode* create_list(std::initializer_list<int> lst)
{
	if (!lst.size())
		return nullptr;

	ListNode* head{}, *next{};
	for (auto v : lst) {
		if (!head) {
			head = new ListNode(v);
			next = head;
		}
		else {
			next->next = new ListNode(v);
			next = next->next;
		}
	}
	return head;
}

bool compare_eq_lists(const ListNode* l1, const ListNode* l2)
{
	if ((l1 && !l2) || (!l1 && l2))
		return false;
	
	if (!l1 && !l2)
		return true;
	
	if (l1->val != l2->val)
		return false;

	return compare_eq_lists(l1->next, l2->next);
}

void dispose(const ListNode* head)
{
	ListNode* next{};
	for (; head; ) {
		next = head->next;
		delete head;
		head = next;
	}
}

TEST(MergeTwoSortedList, Example1)
{
	ListNode* l1 = create_list({ 1,2,4 });
	ListNode* l2 = create_list({ 3,5,8 });
	const ListNode* ethalon = create_list({ 1,2,3,4,5,8});

	Solution sol;
	ListNode* result = sol.mergeTwoLists(l1, l2);

	EXPECT_TRUE(compare_eq_lists(result, ethalon)) << "Lists are not equal!";

	dispose(result);
	dispose(ethalon);
}

TEST(MergeTwoSortedList, Example2)
{
    auto l1 = create_list({1,3,5});
    auto l2 = create_list({0,8});
    const auto ethalon = create_list({0,1,3,5,8});

    Solution sol;
    auto merged = sol.mergeTwoLists2(l1, l2);

    EXPECT_TRUE(compare_eq_lists(merged, ethalon)) << "Lists are not equal!";

    dispose(merged);
    dispose(ethalon);
}

TEST(MergeTwoSortedList, Example3)
{
    auto l1 = create_list({2,2,4,5,8,9});
    auto l2 = create_list({0,1,3});
    const auto ethalon = create_list({0,1,2,2,3,4,5,8,9});

    auto merged = Solution::mergeTwoLists3(l1, l2);

    EXPECT_TRUE(compare_eq_lists(merged, ethalon)) << "Lists are not equal!";

    dispose(merged);
    dispose(ethalon);
}