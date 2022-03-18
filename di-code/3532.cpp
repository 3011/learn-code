#include <iostream>
using namespace std;

int main()
{
    int rooster, hen, chick;
    for (rooster = 0; rooster <= 100 / 5; rooster++)
    {
        for (hen = 0; hen <= 100 / 3; hen++)
        {
            for (chick = 0; chick <= 100; chick += 3)
            {
                if (rooster * 5 + hen * 3 + chick / 3 == 100 && rooster + hen + chick == 100)
                {
                    cout << rooster << ' ' << hen << ' ' << chick << endl;
                }
            }
        }
    }

    return 0;
}