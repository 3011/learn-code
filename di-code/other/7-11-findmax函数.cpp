#include <iostream>
using namespace std;

int *findmax(int *array, int size, int *index)
{
    int max_idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= array[max_idx])
            max_idx = i;
    }
    *index = max_idx;
    return array + max_idx;
}

int main()
{
    int a[10] = {33, 91, 54, 67, 82, 37, 85, 63, 19, 68};
    int *maxaddr;
    int idx;

    maxaddr = findmax(a, sizeof(a) / sizeof(*a), &idx);

    cout << "the index of maximum element is " << idx << endl
         << "the address of is " << maxaddr << endl
         << "the value of it is " << a[idx] << endl;

    return 0;
}