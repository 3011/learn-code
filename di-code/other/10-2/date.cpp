#include "date.h"
#include <iostream>
using namespace std;

void Date::PrintDate()
{
    cout << day << "/" << month << "/" << year << endl;
}

bool Date::SetDate(int y, int m, int d)
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        // 如果闰年，2月为29天
        a[1] = 29;

    if (d < 0 || d > a[m - 1] || m < 0 || m > 12)
        // 日期不正确，未设置成功
        return false;
    year = y;
    month = m;
    day = d;
    // 日期设置成功
    return true;
}

void Date::AddOneDay()
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        a[1] = 29;

    if (day < a[month - 1])
        day++;
    else
    {
        day = 1;
        if (month < 12)
            month++;
        else
        {
            month = 1;
            year++;
        }
    }
}