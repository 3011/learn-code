#include <iostream>
using namespace std;

int main()
{
    int iArray[10];
    int sum = 0;
    int *iPtr = iArray;

    for (int i = 0; i < 10; i++)
    {
        iArray[i] = i * 2;
    }

    for (int idx = 0; idx < 10; idx++)
    {
        cout << iPtr << " " << &iArray[idx] << endl;
        sum += *iPtr;
        iPtr++;
    }

    return 0;
}