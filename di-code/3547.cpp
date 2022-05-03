#include <iostream>
#include <string>
using namespace std;

void stringcmp(string str1, string str2)
{
    if (str1 > str2)
        cout << str1 << ">" << str2 << endl;
    else if (str1 < str2)
        cout << str1 << "<" << str2 << endl;
    else if (str1 == str2)
        cout << str1 << "==" << str2 << endl;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    stringcmp(str1, str2);

    return 0;
}