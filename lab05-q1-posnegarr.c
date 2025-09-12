#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of element for the array: ");
    scanf("%d", &n);
    float arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%f", &arr1[i]);
    }
    printf("\tNegatives:-\n");
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < 0)
        {
            printf("%.2f\n", arr1[i]);
        }
        else
        {
        }
    }
    printf("\n");
    printf("\tPositives & Zeros:-\n");
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] >= 0)
        {
            printf("%.2f\n", arr1[i]);
        }else
        {}
    }

    return 0;
}
