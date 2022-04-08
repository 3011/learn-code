#include <iostream>
using namespace std;

int main()
{
    int a[100] = {0};
    int *iPtr = a;

    cout << &a[10] << endl
         << a + 10 << endl
         << &iPtr[10] << endl
         << iPtr + 10 << endl;

    cout << a[10] << endl
         << *(a + 10) << endl
         << iPtr[10] << endl
         << *(iPtr + 10) << endl;

    return 0;
}