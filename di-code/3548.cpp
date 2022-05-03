#include <iostream>
using namespace std;

void swap_ch(char *x, char *y)
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main()
{
    char ch1, ch2;
    cin >> ch1 >> ch2;

    cout << "before:" << ch1 << " " << ch2 << endl;

    //此处调用swap_ch函数交换ch1和ch2
    swap_ch(&ch1, &ch2);

    cout << "after:" << ch1 << " " << ch2 << endl;

    return 0;
}