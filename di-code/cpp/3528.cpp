#include <iostream>
using namespace std;

int main()
{
    int n;
    bool is_no = true;

    cin >> n;

    for (int i = 3; i <= 7; i += 2)
    {
        if (!(n % i))
        {
            is_no = false;
            cout << i << " ";
        }
    }
    if (is_no)
    {
        cout << "no";
    }
    cout << endl;

    return 0;
}