#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int x = 0; x < n; x++)
    {
        if (x * x % n == 1)
        {
            printf("%d\n", x);
        }
    }

    return 0;
}