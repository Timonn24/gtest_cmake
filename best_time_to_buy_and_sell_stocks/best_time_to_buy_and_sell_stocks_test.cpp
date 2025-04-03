#include "best_time_to_buy_and_sell_stocks.h"

#include <gtest\gtest.h>

TEST(BestBuyAndSell, Example1)
{
	Solution sol;
	auto max = sol.maxProfit({ 7,1,5,3,6,4 });
	EXPECT_EQ(max, 5);
}

TEST(BestBuyAndSell, Example2)
{
	Solution sol;
	auto max = sol.maxProfit({ 7,6,4,3,1 });
	EXPECT_EQ(max, 0);
}

TEST(BestBuyAndSell, Example3)
{
	Solution sol;
	auto max = sol.maxProfit({7, 10, 1, 3, 6, 9, 2});
	EXPECT_EQ(max, 8);
}