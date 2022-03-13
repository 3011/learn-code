#include <stdio.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d\n", &a, &b, &c);
    printf("%d", sum(a, b, c));

    return 0;
}