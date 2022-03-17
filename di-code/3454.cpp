#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r;
    cin >> r;
    const double pi = 3.1415926;
    double area = pi * r * r;

    cout << setfill('*') << setw(10) << pi << endl;
    cout << setfill('*') << setw(10) << r << endl;
    cout << setfill('*') << setw(10) << area << endl;

    return 0;
}
