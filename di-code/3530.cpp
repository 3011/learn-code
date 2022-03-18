#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double fac(double x) // 计算阶乘
{
    float i, f = 1;

    for (i = 1; i <= x; i++)
        f *= i;

    return f;
}

int main()
{
    double x, last, n = 1, count = 1;
    cin >> x;

    // do...whiile 方式
    do
    {
        last = pow(-1, n + 1) * (pow(x, n) / fac(n));
        count += last;
        n++;
    } while ((last >= 0 ? last : -last) >= 1e-8);

    // while 方式
    // last = pow(-1, n + 1) * (pow(x, n) / fac(n));
    // while ((last >= 0 ? last : -last) > 1e-8)
    // {
    //     count += last;
    //     n++;
    //     last = pow(-1, n + 1) * (pow(x, n) / fac(n));
    // }

    // for 方式 （有点乱
    // for (last = pow(-1, n + 1) * (pow(x, n) / fac(n)); (last >= 0 ? last : -last) > 1e-8; last = pow(-1, ++n + 1) * (pow(x, n) / fac(n)))
    // {
    //     count += last;
    // }

    cout << fixed << setprecision(8) << count << endl;

    return 0;
}