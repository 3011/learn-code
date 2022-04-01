#include <cs50.h>
#include <stdio.h>
#include <math.h>

int isValid(long long number)
{
    int sum = 0;
    int a, which, i;
    for (i = 0; number > 10; i++)
    {
        if (i != 0)
            number /= 10;

        if (i % 2 == 0)
        {
            sum += number % 10;
        }
        else
        {
            a = (number % 10) * 2;
            sum += a < 10 ? a : a / 10 + a % 10;
        }
        if (number < 100 && number >= 10)
            which = number;
    }

    if ((sum % 10) == 0)
    {
        if (which == 34 || which == 37 && i == 15)
        {

            return 1;
        }
        else if (which >= 51 && which <= 55 && i == 16)
        {
            return 2;
        }
        else if ((which / 10 % 10) == 4 && (i == 13 || i == 16))
        {
            return 3;
        }
    }
    return 0;
}

int main(void)
{
    switch (isValid(get_long("Number:")))
    {
    case 0:
        printf("INVALID\n");
        break;
    case 1:
        printf("AMEX\n");
        break;
    case 2:
        printf("MASTERCARD\n");
        break;
    case 3:
        printf("VISA\n");
        break;
    }
}
