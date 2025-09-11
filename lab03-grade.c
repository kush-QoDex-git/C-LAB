#include <stdio.h>
#include <string.h>
int main()
{
    char input[3];
    printf("Eter the grade: ");
    scanf("%s", &input);
    if (strcmp(input,"AB") || strcmp(input,"aa"))
    {
        printf("Excellent");
    }
    else if (strcmp(input, "AB") || strcmp(input , "ab"))
    {
        printf("Very Good");
    }
    else if (strcmp(input, "BB") || strcmp(input , "bb"))
    {
        printf("Good");
    }
    else if (strcmp(input, "BC") || strcmp(input , "bc"))
    {
        printf("Average");
    }
    else if (strcmp(input, "CC") || strcmp(input , "cc"))
    {
        printf("Satisfactory");
    }
    else if (strcmp(input, "CD") || strcmp(input , "cd"))
    {
        printf("Pass");
    }
    else if (strcmp(input, "DD") || strcmp(input , "dd"))
    {
        printf("Just Pass");
    }
    else if (strcmp(input, "FR") || strcmp(input , "fr"))
    {
        printf("Fail");
    }

    return 0;
}