#include <iostream>
using namespace std;

int main()
{
    int petch_count, n, i;

    for (cin >> n; !cin.eof(); cin >> n)
    {

        petch_count = 1;
        for (; n > 1; n--)
        {
            petch_count = (petch_count + 1) * 2;
        }
        cout << petch_count << endl;
    }

    return 0;
}