#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    x ^= y;
    y ^= x;
    x ^= y;

    cout << x << " " << y << endl;

    return 0;
}
