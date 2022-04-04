#include <iostream>
using namespace std;

int insert(int nums[], int size, int insert_num)
{
    cout << "旧数组：";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    int last_num;
    for (int i = size; i >= 0; i--)
    {
        if (insert_num <= nums[i - 1] && i != 0)
        {
            if (i == size)
            {
                last_num = nums[i - 1];
            }
            else
            {
                nums[i] = nums[i - 1];
            }
        }
        else
        {
            nums[i] = insert_num;
            break;
        }
    }

    cout << "新数组：";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return last_num;
}

int main()
{
    int n, insert_num;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> insert_num;

    int last_num = insert(arr, n, insert_num);
    cout << "被挤出的数：" << last_num;

    return 0;
}