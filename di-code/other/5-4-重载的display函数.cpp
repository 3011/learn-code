#include <iostream>
using namespace std;

void display(double x)
{
    cout << "A double: " << x << endl;
}

void display(int x)
{
    cout << "A int: " << x << endl;
}

void display(char x)
{
    cout << "A char: " << x << endl;
}

int main()
{
    double a = 3.14;
    display(a);
    int b = 10;
    display(b);
    double c = 'c';
    display(c);

    return 0;
}