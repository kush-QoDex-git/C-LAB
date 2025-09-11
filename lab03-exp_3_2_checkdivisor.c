#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int small;
    int big;
    if (num1 < 0)
    {
        num1 = -(num1);
    }
    else
    {
    }
    if (num2 < 0)
    {
        num2 = -(num2);
    }
    else
    {
    }
    if (num1 <= num2)
    {
        if ((num2 % num1) == 0)
        {
            printf("%d is divisor of %d", num1, num2);
        }
        else
        {
            printf("%d is not divisor of %d", num1, num2);
        }
    }
    else

    {
        if ((num1 % num2) == 0)
        {
            printf("%d is divisor of %d", num2, num1);
        }
        else
        {
            printf("%d is not divisor of %d", num1, num2);
        }
    }

    return 0;
}