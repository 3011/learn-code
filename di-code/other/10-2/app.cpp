#include "date.h"
#include <iostream>
using namespace std;

int main()
{
    Date date;

    int y, m, d;
    cout << "请输入日期（日 月 年）" << endl;
    cin >> d >> m >> y;
    if (date.SetDate(y, m, d))
    {
        cout << "当前日期为：";
        date.PrintDate();

        date.AddOneDay();
        cout << "明天日期为：";
        date.PrintDate();
    }
    else
        cout << "日期有误！" << endl;

    return 0;
}