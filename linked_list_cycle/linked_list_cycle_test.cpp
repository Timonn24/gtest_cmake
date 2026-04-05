#include "linked_list_cycle.h"
#include "listnode.h"

#include <gtest/gtest.h>

TEST(LinkedListCycle, Example1)
{
    auto cycled = create_list({0,1,2,3});
    ListNode* tail = cycled;
    while(tail->next)
        tail = tail->next;
    tail->next = cycled;

    EXPECT_TRUE(Solution::hasCycle(cycled) == true) << "List doesn't have cycle, but should!";
}

TEST(LinkedListCycle, Example2)
{
    auto non_cycled = create_list({0,1,2});
    EXPECT_TRUE(Solution::hasCycle(non_cycled) == false) << "List do have cycle, but shouldn't!";
    dispose(non_cycled);
}