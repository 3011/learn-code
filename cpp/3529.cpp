#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0 || n > 100)
    {
        return 0;
    }

    if (n >= 90 && n <= 100)
    {
        cout << 'A';
    }
    else if (n >= 80)
    {
        cout << 'B';
    }
    else if (n >= 70)
    {
        cout << 'C';
    }
    else if (n >= 60)
    {
        cout << 'D';
    }
    else
    {
        cout << 'E';
    }
    cout << endl;

    return 0;
}