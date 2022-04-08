#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int *ptr1, *ptr2;

    int x = 5;

    ptr = &x;
    cout << x << endl
         << ptr << endl
         << *ptr << endl;
    *ptr = 10;
    cout << x;

    return 0;
}