#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    for (int i = 0; i <= 9; i++)
    {
        if (i == 0)
        {
            cout << left << setw(5) << '*';
            continue;
        }

        cout << left << setw(5) << i;
    }

    cout << endl
         << setfill('.') << setw(49) << "." << setfill(' ') << endl;

    for (x = 1; x <= 9; x++)
    {
        cout << left << setw(5) << x;
        for (y = 1; y <= x; y++)
        {
            cout << left << setw(5) << x * y;
        }
        cout << endl
             << endl;
    }

    return 0;
}