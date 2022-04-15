#include <iostream>
using namespace std;

void input(int *nums)
{
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }
}

void handle(int *nums)
{
    int most_index = 0;
    for (int i = 1; i < 10; i++)
        most_index = nums[most_index] < nums[i] ? most_index : i;
    if (most_index != 0)
    {
        nums[most_index] ^= nums[0];
        nums[0] ^= nums[most_index];
        nums[most_index] ^= nums[0];
    }

    most_index = 0;
    for (int i = 1; i < 10; i++)
        most_index = nums[most_index] > nums[i] ? most_index : i;
    if (most_index != 9)
    {
        nums[most_index] ^= nums[9];
        nums[9] ^= nums[most_index];
        nums[most_index] ^= nums[9];
    }
}

void output(int *nums)
{
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums[10];
    input(nums);
    handle(nums);
    output(nums);

    return 0;
}