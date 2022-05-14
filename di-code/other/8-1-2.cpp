#include <iostream>
using namespace std;

void fun(int x, int &y, int *z)
{
    int t;
    t = x;
    x = y;
    y = t;
    x = x * x;
    y = y * y;
    *z = x + y;
}

int main()
{
    int x, y, z;
    x = 2;
    y = 4;
    z = 0;
    fun(x, y, &z);
    cout << "x=" << x << ",y=" << y << ",z=" << z << endl;
    return 0;
}
