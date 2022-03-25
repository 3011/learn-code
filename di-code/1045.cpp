#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float usd, usd2rmb, max_usd2rmb = 0;
    cin >> usd;
    for (int i = 0; i < 12; i++)
    {
        cin >> usd2rmb;
        if (usd2rmb > max_usd2rmb)
            max_usd2rmb = usd2rmb;
    }
    cout << fixed << setprecision(2) << usd * max_usd2rmb << endl;

    return 0;
}