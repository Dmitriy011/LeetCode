#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) 
{
    if (nums.size() < 2)
        return;

    if (nums.size() ==  2)
    {
        if (nums[0] == 0 && nums[1] != 0)
        {
            nums[0] = nums[1];
            nums[1] = 0;
        }
    }

    int cur = 0;
    int R = 1;

    while (R < nums.size())
    {
        if (nums[cur] == 0)
        {
            while (nums[R] == 0)
            {
                R++;

                if (R == nums.size())
                    return;
            }

            nums[cur] = nums[R];
            nums[R] = 0;

            R = cur + 1;
        }
        else if (nums[cur] != 0)
        {
            ++cur;
            ++R;
        }
        
    }
}

int main()
{
    vector<int> nums = { 1, 0, 1 };
    moveZeroes(nums);

    for (auto v : nums)
    {
        std::cout << v << " ";
    }
}