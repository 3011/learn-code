#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << (i >= n - i - 1 ? i : n - i - 1) * 2 << endl;
    }

    return 0;
}