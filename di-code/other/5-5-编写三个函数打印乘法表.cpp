#include <iostream>
#include <iomanip>
using namespace std;

void multiplication_table_1()
{
    int x, y;
    for (x = 0; x <= 9; x++)
    {
        if (x == 0)
            cout << left << setw(5) << '*';
        else
            cout << left << setw(5) << x;
        for (y = 1; y <= 9; y++)
        {
            if (x == 0)
                cout << left << setw(5) << y;
            else
                cout << left << setw(5) << x * y;
        }
        cout << endl;
    }
}

void multiplication_table_2()
{
    int x, y;
    for (x = 0; x <= 9; x++)
    {
        if (x == 0)
            cout << left << setw(5) << '*';
        else
            cout << left << setw(5) << x;
        for (y = 1; y <= x; y++)
        {
            if (x == 0)
                cout << left << setw(5) << y;
            else
                cout << left << setw(5) << x * y;
        }
        cout << endl;
    }
}

void multiplication_table_3()
{
    int x, y;
    for (x = 0; x <= 9; x++)
    {
        if (x == 0)
            cout << left << setw(5) << '*';
        else
            cout << left << setw(5) << x;
        for (y = 1; y <= 9; y++)
        {
            if (x == 0)
                cout << left << setw(5) << y;
            else if (y >= x)
                cout << left << setw(5) << x * y;
            else
                cout << left << setw(5) << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "第一个乘法表" << endl;
    multiplication_table_1();
    cout << endl
         << "第二个乘法表" << endl;
    multiplication_table_2();
    cout << endl
         << "第三个乘法表" << endl;
    multiplication_table_3();

    return 0;
}

char aa() {

}