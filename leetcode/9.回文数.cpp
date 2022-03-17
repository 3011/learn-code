/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long m = x, n = 0;

        while (n < x)
        {
            n = (n + m % 10) * (m < 10 ? 1 : 10);
            m /= 10;
        }

        if (x == n)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
