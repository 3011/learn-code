#include <iostream>
using namespace std;

void reverse_arr(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        arr[i] ^= arr[size - 1 - i];
        arr[size - 1 - i] ^= arr[i];
        arr[i] ^= arr[size - 1 - i];
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6}, size = 6;

    cout << "交换前：" << endl;

    for (int i = 0; i < size; ++i)
    {

        cout << arr[i] << " ";
    }

    cout << endl;

    reverse_arr(arr, size);

    cout << "交换后：" << endl;

    for (int i = 0; i < size; ++i)
    {

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}