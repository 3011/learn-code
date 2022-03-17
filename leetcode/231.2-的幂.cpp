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
        // return n > 0 && (n & -n) == n;

        // n 二进制最高位为 1，其余所有位为 0；n−1 二进制最高位为 0，其余所有位为 1；
        return n > 0 && (n & (n - 1)) == 0;
    }
};
// @lc code=end
