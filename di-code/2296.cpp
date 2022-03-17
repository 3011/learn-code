#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    else
    {
        cout << "not a triangle";
    }
    cout << endl;

    return 0;
}