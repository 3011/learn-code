#include <iostream>
using namespace std;

int find_min(int num[], int size)
{
    int min_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[min_index] > num[i])
            min_index = i;
    }
    return min_index;
}

int main()
{
    const int num_size = 10;
    int num[num_size] = {34, 91, 83, 56, 29, 93, 56, 12, 88, 72};

    int min_index;
    min_index = find_min(num, num_size);
    cout << num[min_index] << endl
         << min_index << endl;

    return 0;
}
