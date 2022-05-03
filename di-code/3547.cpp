#include <iostream>
using namespace std;

void stringcmp(char *str1, char *str2)
{
    int i = 0;
    // 获取较短字符串的长度
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }

    if (str1[i] > str2[i])
        cout << str1 << ">" << str2 << endl;
    else if (str1[i] < str2[i])
        cout << str1 << "<" << str2 << endl;
    else if (str1[i] == str2[i])
        cout << str1 << "==" << str2 << endl;
    else if (str1[i] == '\0')
        cout << str1 << "<" << str2 << endl;
    else if (str2[i] == '\0')
        cout << str1 << ">" << str2 << endl;
}

int main()
{
    char str1[100], str2[100];
    cin >> str1 >> str2;
    stringcmp(str1, str2);

    return 0;
}