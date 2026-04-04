#include "merge_two_sorted_lists.h"
#include "listnode.h"

#include <gtest/gtest.h>


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