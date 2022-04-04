#include <iostream>
using namespace std;

void insert_sort(int nums[], int size)
{
    int m, n;
    for (m = 0; m < size; m++)
    {
        for (n = m; n > 0; n--)
        {
            if (nums[n - 1] > nums[n])
            {
                nums[n - 1] ^= nums[n];
                nums[n] ^= nums[n - 1];
                nums[n - 1] ^= nums[n];
            }
        }
    }
}

int partition(int nums[], int low, int high)
{

    int pivot = nums[low];

    while (low < high)
    {
        while (low < high && nums[high] >= pivot)
            high--;
        nums[low] = nums[high];
        while (low < high && nums[low] <= pivot)
            low++;
        nums[high] = nums[low];
    }
    nums[low] = pivot;

    return low;
}

void quick_sort(int nums[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(nums, low, high);

        quick_sort(nums, low, pi - 1);

        quick_sort(nums, pi + 1, high);
    }
}

int main()
{
    int n, x;
    cin >> n;
    int *nums_insert = new int[n];
    int *nums_quick = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums_insert[i] = x;
        nums_quick[i] = x;
    }

    cout << "插入排序结果：" << endl;
    insert_sort(nums_insert, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums_insert[i] << " ";
    }
    cout << endl;

    cout << "快速排序结果：" << endl;
    quick_sort(nums_quick, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums_quick[i] << " ";
    }

    return 0;
}