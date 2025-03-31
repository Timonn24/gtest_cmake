#include "two_sum.h"

#include <gtest\gtest.h>

TEST(TwoSumTest, Example1)
{
    Solution sol;
    auto res = sol.twoSum({2, 7, 11, 15}, 9);
    
    ASSERT_TRUE(res.size() == 2) 
        << "Expected array with 2 elements, got: " 
        << res.size();

    EXPECT_TRUE(res[0] == 0 && res[1] == 1);
}

TEST(TwoSumTest, Example2)
{
    Solution sol;
    auto res = sol.twoSum({3, 2, 4}, 6);
    
    ASSERT_TRUE(res.size() == 2)
        << "Expected array with 2 elements, got: "
        << res.size();

    EXPECT_TRUE(res[0] == 1 && res[1] == 2);
}

TEST(TwoSumTest, Example3)
{
    Solution sol;
    auto res = sol.twoSum({ 3, 3 }, 6);

    ASSERT_TRUE(res.size() == 2)
        << "Expected array with 2 elements, got: "
        << res.size();

    EXPECT_TRUE(res[0] == 0 && res[1] == 1);
}