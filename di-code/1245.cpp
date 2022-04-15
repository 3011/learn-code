#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double sum, k;
    for (k = 1; k <= a; k++)
        sum += k;

    for (k = 1; k <= b; k++)
        sum += k * k;

    for (k = 1; k <= c; k++)
        sum += 1 / k;

    cout << fixed << setprecision(2) << sum;

    return 0;
}