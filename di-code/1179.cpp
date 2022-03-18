#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int *num = new int[year + 1]; // 从num[1]开始
    for (int i = 1; i <= year; i++)
    {
        if (i <= 3)
        {
            num[i] = 1; // 前三年只有一头
        }
        else
        {
            num[i] = num[i - 1] + num[i - 3]; // 今年的数量等于去年的数量加上三年前的数量
        }
    }
    cout << num[year] << endl;

    return 0;
}