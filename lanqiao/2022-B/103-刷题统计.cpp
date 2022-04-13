#include <iostream>
using namespace std;

int main()
{
    long long a, b, n, i, day;
    cin >> a >> b >> n;

    day = n / (5 * a + 2 * b) * 7;
    n %= 5 * a + 2 * b;

    for (i = 0; i < 5; i++)
    {
        if (n <= 0)
            break;
        n -= a;
        day++;
    }
    for (i = 0; i < 2; i++)
    {
        if (n <= 0)
            break;
        n -= b;
        day++;
    }

    cout << day << endl;

    return 0;
}