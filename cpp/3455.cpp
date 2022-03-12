#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double e = 2.718281828;
    cout << setprecision(10) << e << endl;
    cout << fixed << setprecision(8) << e << endl;
    cout << scientific << e << endl;
}