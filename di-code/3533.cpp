#include <iostream>
using namespace std;

int main()
{
    int petch_count = 1;
    for (int i = 9; i >= 1; i--)
    {
        petch_count = (petch_count + 1) * 2;
    }
    cout << petch_count << endl;

    return 0;
}