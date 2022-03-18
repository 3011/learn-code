#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    for (int i = 100; i < 1000; i++)
    {
        num = pow(i / 100 % 10, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3);
        if (i == num)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}