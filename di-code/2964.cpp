#include <iostream>
using namespace std;

int fac(int x) // 计算阶乘
{
    int i, f = 1;

    for (i = 1; i <= x; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int x, count = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        count += fac(i);
    }
    cout << count << endl;

    return 0;
}