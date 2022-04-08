#include <iostream>
using namespace std;

int iArray[] = {1, 4, 2, 7, 13, 32, 21, 48, 16, 30};

int main()
{
     int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
     int size = sizeof(iArray) / sizeof(int);
     for (int n = 0; n < size; n++)
          sum1 += iArray[n];

     int *iPtr = iArray;
     for (int n = 0; n < size; n++)
     {
          sum2 += *iPtr;
          ++iPtr;
     }

     iPtr = iArray;
     for (int n = 0; n < size; n++)
     {
          sum3 += *(iPtr + n);
     }

     iPtr = iArray;
     for (int n = 0; n < size; n++)
     {
          sum4 += iPtr[n];
     }

     for (int n = 0; n < size; n++)
          sum5 += *(iArray + n);

     cout << sum1 << endl
          << sum2 << endl
          << sum3 << endl
          << sum4 << endl
          << sum5 << endl;

     return 0;
}