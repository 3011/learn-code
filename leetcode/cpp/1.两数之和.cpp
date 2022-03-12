/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // 暴力破解法
        int m,n;
        for (m = 0; m < nums.size(); m++)
        {
            for (n = 0; n < nums.size(); n++)
            {
                if (m == n)
                {
                    break;
                }
                if (nums[m] + nums[n] == target)
                {
                    return {m, n};
                }
            }
        }
        return {};
    }
};
// @lc code=end
