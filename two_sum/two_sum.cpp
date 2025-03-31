#include <unordered_map>

#include "two_sum.h"

std::vector<int> Solution::twoSum(const std::vector<int>& nums, int target)
{
	std::unordered_map<int, int> vi;
	for (int i = 0; i < nums.size(); i++)
	{
		auto diff = target - nums[i];
		if (vi.contains(diff))
			return { vi[diff], i };
		vi[nums[i]] = i;
	}
	return {};
}