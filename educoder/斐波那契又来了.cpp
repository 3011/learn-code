#include <iostream>
using namespace std;

long long f(int n)
{
    long long arr[2], temp;
    arr[0] = 7;
    arr[1] = 11;
    if (n < 0)
        return 0;
    if (n < 2)
        return arr[n];

    arr[0] += arr[1];

    for (int i = 2; i < n; i++)
    {
        temp = arr[0];
        arr[0] += arr[1];
        arr[1] = temp;
    }

    return arr[0];
}

int main()
{
    cout << f(457893);
    int n;
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        cout << (f(n) % 3 == 0 ? "yes" : "no") << endl;
    }

    return 0;
}