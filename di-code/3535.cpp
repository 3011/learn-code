#include <iostream>
#include <iomanip>
using namespace std;

float poly(float x, int n)
{
    if (n == 0)
        return 1.0;
    if (n == 1)
        return x;
    // 递归 poly 函数
    return ((2 * n - 1) * x * poly(x, n - 1) - (n - 1) * poly(x, n - 2)) / n;
}

int main()
{
    float x;
    int n;
    cin >> x >> n;
    cout << fixed << setprecision(6) << poly(x, n) << endl;

    return 0;
}