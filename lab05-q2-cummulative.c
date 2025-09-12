#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of element for the array: ");
    scanf("%d", &n);
    float arr1[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%f", &arr1[i]);
    }
    printf("{");
    for (int i = 0; i < n; i++)
    {
        if (i = (n - 1))
        {
            printf("%.1f", sum);
            /* code */
        }

        sum += arr1[i];
        printf("%.1f, ", sum);
    }
    printf("}");

    return 0;
}
