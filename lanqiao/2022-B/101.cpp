#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 2022, y = 0;
    for (int i = 0; x > 0; i++)
    {
        y += (x % 10) * pow(9, i);
        x /= 10;
    }
    cout << y << endl;

    return 0;
}