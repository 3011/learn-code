#include <iostream>
using namespace std;

void swap_str(const char *&a, const char *&b)
{
    const char *temp = a;
    a = b;
    b = temp;
}

int main()
{
    const char *ap = "hello", *bp = "how are you";

    cout << ap << endl
         << *ap << endl
         << &(*ap) << endl
         << *&ap << endl
         << &ap << endl;

    cout << "交换前：\n";
    cout << ap << "，" << bp << endl;
    //此处调用swap_str函数交换ap和bp
    swap_str(ap, bp);

    cout << "交换后：\n";
    cout << ap << "，" << bp << endl;
    return 0;
}
