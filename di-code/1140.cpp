#include <iostream>
using namespace std;

int main()
{
    char text[255];
    cin >> text;

    int size = 0;
    while (text[size] != '\0')
        size++;

    for (int i = 0; i < size / 2; i++)
    {
        if (text[i] != text[size - 1 - i])
        {
            cout << 'N' << endl;
            return 0;
        }
    }
    cout << 'Y' << endl;

    return 0;
}