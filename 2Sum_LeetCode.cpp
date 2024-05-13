#include "vector"
#include "iostream"
#include "unordered_map"

std::vector<int> twoSum1(std::vector<int>& nums, int target)
{
    std::vector<int> indeces;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                indeces.push_back(i);
                indeces.push_back(j);
                return  indeces;
            }
        }
    }

    return  indeces;
}

std::vector<int> twoSum2(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int key = nums[i];
        numMap[key] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (numMap.count(complement) && numMap[complement] != i)
        {
            return { i, numMap[complement] };
        }
    }

    return {};
}