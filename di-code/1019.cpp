#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int hours[7]; // 每天的时间 index0 对应周一
    for (int i = 0; i < 7; i++)
    {
        cin >> m >> n;
        hours[i] = m + n;
    }

    int max_day = 6, is_unhappy = 0;
    for (int i = 6; i >= 0; i--)
    {
        if (hours[i] > 8)
            is_unhappy = 1;

        if (hours[i] >= hours[max_day])
            max_day = i;
    }
    cout << (is_unhappy ? max_day + 1 : 0) << endl;

    return 0;
}