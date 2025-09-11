#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int temp1;
    int temp2;
    int temp3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
    {
        temp1 = num1;
        if (num2 < num3)
        {
            temp2 = num2;
            temp3 = num3;
        }
        else
        {
            temp2 = num3;
            temp3 = num2;
        }
    }
    else
    {
    }
    if (num2 < num1 && num2 < num3)
    {

        temp1 = num2;
        if (num1 < num3)
        {
            temp2 = num1;
            temp3 = num3;
        }
        else
        {
            temp2 = num3;
            temp3 = num1;
        }
    }
    else
    {
    }
    if (num3 < num2 && num3 < num2)
    {
        temp1 = num3;
        if (num2 < num1)
        {
            temp2 = num2;
            temp3 = num1;
        }
        else
        {
            temp2 = num1;
            temp3 = num2;
        }
    }
    else
    {
    }
    printf("%d < %d < %d", temp1, temp2, temp3);

    if (num1 < num2 && num1 < num3)
    {
        printf("%d is smallest", num1);
    }
    else if
    {
    }
    if (num2 < num1 && num2 < num3)
    {
        printf("%d is smallest", num2);
    }
    else
    {
    }
    if (num3 < num2 && num3 < num1)
    {

        printf("%d is smallest", num3);
    }

    return 0;
}