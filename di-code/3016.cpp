#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long init_height, n;
    cin >> init_height >> n;
    double last_height = init_height, moving_distance = init_height;
    for (int i = 1; i < n; i++)
    {
        last_height /= 2;
        moving_distance += last_height * 2;
    }
    cout << fixed << setprecision(1) << moving_distance << ' ' << last_height / 2 << endl;

    return 0;
}