#include <iostream>
using namespace std;

int main()
{
    int k, n = 0;
    cin >> k;

    double sn = 0;
    while (sn <= k)
    {
        n++;
        sn += 1.0 / n;
    }
    cout << n << endl;

    return 0;
}