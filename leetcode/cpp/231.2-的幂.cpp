/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // n 与 -n （补码）按位与后应该相同等于它本身。
        return n > 0 && (n & -n) == n;
    }
};
// @lc code=end
