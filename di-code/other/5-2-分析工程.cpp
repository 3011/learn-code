#include <iostream>
using namespace std;
//---------------------
void func();
int n = 1;
//---------------------
int main()
{
    static int x = 5;
    int y = n; //y = 1
    cout << "Main--x=" << x
         << ", y=" << y << "，n=" << n << endl;
    func();
    cout << "Main--x=" << x
         << ", y=" << y << "，n=" << n << endl;
    func();
} //--------------------
void func()
{
    static int x = 4;
    int y = 10;
    x += 2;  // x = 6
    n += 10; // n = 11
    y += n; // y = 21 
    cout << "Func--x=" << x
         << ", y=" << y << "，n=" << n << endl;
} //--------------------
