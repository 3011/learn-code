
#include <stack>
#include <stdio.h>
using namespace std;

int main()
{
    int m;
    stack<int> s;
    while (scanf("%d", &m) != EOF)
    {
        s.push(m);
        printf("%d\n", s.top());
        s.pop();
    }

    return 0;
}