#include <iostream>
using namespace std;

bool isprime(int m)
{
    if (m <= 3)
        return m > 1;

    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << (isprime(n) ? "True" : "False") << endl;

    return 0;
}