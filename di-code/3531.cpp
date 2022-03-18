#include <iostream>
using namespace std;

bool isPerfectNum(int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count += i;
        }
    }
    return count == n;
}

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        if (isPerfectNum(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}