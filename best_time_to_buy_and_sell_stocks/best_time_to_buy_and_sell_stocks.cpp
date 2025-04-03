#include "best_time_to_buy_and_sell_stocks.h"

int Solution::maxProfit(const std::vector<int>& prices)
{
	int max_profit = 0;
	int min_buy = prices[0];

	for (std::size_t i = 1; i < prices.size(); ++i) {
		min_buy = std::min(min_buy, prices[i]);
		max_profit = std::max(prices[i] - min_buy, max_profit);
	}

	return max_profit;
}