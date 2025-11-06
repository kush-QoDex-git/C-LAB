#include <stdio.h>

typedef enum
{
    ADD = 1,
    SUBSTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
} Operation;

void calc()
{
    printf("\n _________________________________________________________\n");
    printf("|                                                         |\n");
    printf("|            1. ADD               2. SUBSTRACT            |\n");
    printf("|            3. MULTIPLY          4. DIVIDE               |\n");
    printf("|                                                         |\n");
    printf("|                                 5.EXIT                  |\n");
    printf("|_________________________________________________________|\n");
    Operation choice;
    int a, b;
    printf("Choose an option from above: ");
    scanf("%d", &choice);
    if (!(choice > 0 && choice < 6))
    {
        calc();
    }
    else if (choice == 5)
    {
        printf("\n\t\t!Exiting the program !\n");
    }
    else
    {
        printf("Enter first integer: ");
        scanf("%d", &a);
        printf("Enter second integer: ");
        scanf("%d", &b);
        switch (choice)
        {
        case ADD:
            printf("\n\t\t%d + %d = %d", a, b, a + b);
            calc();
            break;
        case SUBSTRACT:
            printf("\n\t\t%d - %d = %d", a, b, a - b);
            calc();
            break;
        case MULTIPLY:
            printf("\n\t\t%d x %d = %d", a, b, a * b);
            calc();
            break;
        case DIVIDE:
            printf("\n\t\t%d / %d = %d", a, b, a / b);
            calc();
            break;

        default:
            break;
        }
    }
}

int main()
{
    calc();
    return 0;
}