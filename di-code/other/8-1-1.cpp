#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;//声明ref初始化为引用a
    ref += 5;//ref+5 同时改变a的值
    cout << "a=" << a << ","
         << "ref=" << ref << endl;
    a *= 10;//同理a亦可改变ref的值
    cout << "a=" << a
         << ","
         << "ref=" << ref << endl;
    return 0;
}
